#ifndef _MOVE_H_
#define _MOVE_H_

class Move {
private:
   double x;
   double y;
public:
   Move(double a = 0, double b = 0); // sets x, y to a, b
   void showmove() const;
   Move add(const Move & m) const;
   // this function add x of m to x of invoking object to get new x,
   // add y of m to y of invoking object to get new y, creates a new
   // move object initialized to new x, y values and returns it
   void reset(double a = 0, double b = 0); // resets x,y to a, b
};

#endif
