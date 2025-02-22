//
// Created by alberto on 6/09/19.
//

#ifndef SRC_POINT_H
#define SRC_POINT_H


class Point {
public:
    //Class variables.
    /// X of the point.
    int x;
    /// Y of the point.
    int y;

    // Helpers.
    /// Get string representation of a point.
    /// \return String representation of a point.
    std::string toString();

    // Constructors and destructors.
    /// Constructor of point.
    /// \param x X of the point.
    /// \param y Y of the point.
    Point(int x, int y);
};


#endif //SRC_POINT_H
