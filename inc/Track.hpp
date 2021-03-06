#ifndef TRACK_HPP
#define TRACK_HPP

#include <vector>
#include <Eigen/Core>
#include <iostream>
#include <string>
#include "definitions.hpp"
using namespace Eigen;
using namespace std;

typedef pair<int, Eigen::Vector2d> KeyPoint;
typedef vector< KeyPoint  > Occurrences;

class Track
{

  public:
    Track();
    // the GT from the Noah Bundler
    Vector3d groundTruth;
    // the color from the Noah Bundler
    Vector3i color;
    // to be found
    Vector3d worldPosition;

    // Correspondences
    Occurrences occurrences;
    int nPoints;
    void printTrack();
  private:

};

typedef vector< Track > Tracks;


#endif
