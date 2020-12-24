// calculating the value of pie using random value from 0-1
// pretty cool stuff

#include <time.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"Random numbers generated between 0 and 1:"<<endl;
    srand( (unsigned)time( NULL ) );
    //float k = (float)rand()/RAND_MAX;
    //vector<pair<float, float>> circle_points;
    int circle_point_count = 0;
    int square_point_count = 5000000;
    //cout << k << endl;
    for (int i = 0; i < square_point_count; i++) 
    {
        //cout << (float) rand()/RAND_MAX << endl;
        float x = (float) rand()/RAND_MAX;
        float y = (float) rand()/RAND_MAX;
        float dist = sqrt(pow((0.5 - y), 2) + pow((0.5 - x), 2));
        if(dist <= 0.5)
            circle_point_count++;
    }
    float k = (circle_point_count * 4)/((float)square_point_count);
    cout << k << endl;
    return 0;
}