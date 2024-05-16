#ifndef main_H
#define main_H









#include "custom_math.h"

#ifdef USE_OPENGL
#include "uv_camera.h"

#include <cstdlib>
#include <GL/glut.h>       //GLUT Library


vector<custom_math::vector_3> positions;

custom_math::vector_3 background_colour(0.0f, 0.0f, 0.0f);
custom_math::vector_3 control_list_colour(1.0f, 1.0f, 1.0f);

bool draw_axis = true;
bool draw_control_list = true;

uv_camera main_camera;

int win_id = 0;
int win_x = 800, win_y = 600;
MyBig camera_w = 2e11;

MyBig camera_fov = 45;
MyBig camera_x_transform = 0;
MyBig camera_y_transform = 0;
MyBig u_spacer = 0.01;
MyBig v_spacer = u_spacer * 0.5;
MyBig w_spacer = 0.1;
MyBig camera_near = 1;
MyBig camera_far = 1000000000;

bool lmb_down = false;
bool mmb_down = false;
bool rmb_down = false;
int mouse_x = 0;
int mouse_y = 0;

#endif 











#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <sstream>
using std::ostringstream;
using std::istringstream;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <set>
using std::set;

#include <map>
using std::map;

#include <utility>
using std::pair;


void idle_func(void);
void init_opengl(const int &width, const int &height);
void reshape_func(int width, int height);
void display_func(void);
void keyboard_func(unsigned char key, int x, int y);
void mouse_func(int button, int state, int x, int y);
void motion_func(int x, int y);
void passive_motion_func(int x, int y);

void render_string(int x, const int y, void *font, const string &text);
void draw_objects(void);

const MyBig speed_of_light = 299792458;
const MyBig grav_constant = 6.6743e-11;
const MyBig sun_mass = 1.98847e30;

custom_math::vector_3 sun_pos(0, 0, 0);
custom_math::vector_3 mercury_pos(0, 69817079000.0, 0);
custom_math::vector_3 mercury_vel(-38858.47, 0, 0);








bool decreasing = true;

size_t orbit_count = 0;


custom_math::vector_3 previous_dir(0, 1, 0);




// http://einsteinrelativelyeasy.com/index.php/general-relativity/174-advance-of-the-perihelion-of-mercury
// https://astronomy.stackexchange.com/a/29008/15517


const MyBig pi = 4.0 * atan(1.0);
const MyBig delta =  pi * 6.0 * grav_constant * sun_mass / (speed_of_light*speed_of_light * (1 - 0.2056*0.2056) * 57.909e9);




#endif
