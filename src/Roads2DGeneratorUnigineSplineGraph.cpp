/*
MIT License

Copyright (c) 2021-2023 Evgenii Sopov (mrseakg@gmail.com)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "Roads2DGeneratorUnigineSplineGraph.h"

#include <fstream>
#include <iostream>

Roads2DGeneratorUnigineSplineGraph::Roads2DGeneratorUnigineSplineGraph(
    const Roads2DGeneratorGraph &graph
) {
    const std::vector<Roads2DGeneratorPoint> &points = graph.getPoints();
    for (int i = 0; i < points.size(); i++) {
        SPLPoint3D p(points[i].getX(), points[i].getY(), 0.0);
        m_vPoints.push_back(p);
    }

    const std::vector<std::pair<int,int>> &connections = graph.getConnections();
    for (int i = 0; i < connections.size(); i++) {
        SPLSegment seg;
        seg.start_tangent = calculateTangent(seg.start_index);
        seg.end_tangent = calculateTangent(seg.end_index);
        seg.start_index = connections[i].first;
        seg.end_index = connections[i].second;
        m_vSegments.push_back(seg);
    }
}

void Roads2DGeneratorUnigineSplineGraph::exportToSPLFile(const std::string &sFilepath) {
    std::ofstream fw(sFilepath, std::ofstream::out);
    if (fw.is_open()) {
        fw << "{\n";
        fw << "\t\"points\": [\n";
        fw << "\t\t[\n";
        for (int i = 0; i < m_vPoints.size(); i++) {
            fw << "\t\t\t" << m_vPoints[i].x << ",\n";
            fw << "\t\t\t" << m_vPoints[i].y << ",\n";
            fw << "\t\t\t" << m_vPoints[i].z << "\n";
            // SPLPoint3D p(points[i].getX(), points[i].getY(), 0.0);
            // m_vPoints.push_back(p);
            if (i != m_vPoints.size()-1) {
                fw << "\t\t], [\n";
            }
        }
        fw << "\t\t]\n";
        fw << "\t],\n";
        fw << "\t\"segments\": [\n";
        fw << "\t\t{\n";
        for (int i = 0; i < m_vSegments.size(); i++) {
            fw << "\t\t\t\"start_index\": " << m_vSegments[i].start_index << ",\n";
            fw << "\t\t\t\"end_index\": " << m_vSegments[i].end_index << ",\n";
            fw << "\t\t\t\"start_up\": [\n";
            fw << "\t\t\t\t" << m_vSegments[i].start_up.x << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].start_up.y << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].start_up.z << "\n";
            fw << "\t\t\t],\n";
            fw << "\t\t\t\"end_up\": [\n";
            fw << "\t\t\t\t" << m_vSegments[i].end_up.x << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].end_up.y << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].end_up.z << "\n";
            fw << "\t\t\t],\n";
            fw << "\t\t\t\"start_tangent\": [\n";
            fw << "\t\t\t\t" << m_vSegments[i].start_tangent.x << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].start_tangent.y << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].start_tangent.z << "\n";
            fw << "\t\t\t],\n";
            fw << "\t\t\t\"end_tangent\": [\n";
            fw << "\t\t\t\t" << m_vSegments[i].end_tangent.x << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].end_tangent.y << ",\n";
            fw << "\t\t\t\t" << m_vSegments[i].end_tangent.z << "\n";
            fw << "\t\t\t],\n";
            if (i != m_vSegments.size()-1) {
                fw << "\t\t}, {\n";
            }
        }
        fw << "\t\t}\n";
        fw << "\t]\n";
        fw << "}\n";
        fw.close();
    } else {
        std::cerr << "Problem with opening file" << std::endl;
    }
}

Roads2DGeneratorUnigineSplineGraph::SPLPoint3D Roads2DGeneratorUnigineSplineGraph::calculateTangent(int indexPoint) {
    SPLPoint3D p = m_vPoints[indexPoint];
    SPLPoint3D tangent;
    std::vector<SPLPoint3D> points = findConnectedSegments(p);
    // tangent
    // // by x to 90
    // float dx1 = x_n - x;
    // float dy1 = y_n - y;
    // float dz1 = z_n - z;
    // x_n = x + dx1;
    // y_n = y + dy1 * std::cos(M_PI/2) - dz1 * std::sin(M_PI/2);
    // z_n = z + dy1 * std::sin(M_PI/2) + dz1 * std::cos(M_PI/2);

    // // by y to 90
    // dx1 = x_n - x;
    // dy1 = y_n - y;
    // dz1 = z_n - z;
    // x_n = x + dx1 * std::cos(M_PI/2) + dz1 * std::sin(M_PI/2);
    // y_n = y + dy1;
    // z_n = z - dx1 * std::sin(M_PI/2) + dz1 * std::cos(M_PI/2);

    return tangent;
}

std::vector<int> Roads2DGeneratorUnigineSplineGraph::findConnectedSegments(int indexPoint) {
    std::vector<int> vRet;
    for (int i = 0; i < m_vSegments.size(); i++) {
        if (m_vSegments[i].start_index == indexPoint) {
            // TODO
            vRet.push_back(m_vSegments[i].end_index);
        }
        if (m_vSegments[i].end_index == indexPoint) {
            // TODO
            vRet.push_back(m_vSegments[i].start_index);
        }
    }
    return vRet;
}
