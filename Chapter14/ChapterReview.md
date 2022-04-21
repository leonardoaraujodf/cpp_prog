1. For each of the following sets of classes, indicate whether public or private
derivation is more appropriate for Column B:

| A | B |
|---|---|
| class Bear | class PolarBear |
| class Kitchen | class Home |
| class Person | class Programmer |
| class Person, class Automobile | class Driver |

A:
1) Public as polar bear is a subclass of bear (polar bear IS a bear).
2) Private as a home HAS a kitchen.
3) Public as programmer IS a person.
4) Public for person, private for automobile. A driver IS a person and HAS a
automobile.

2. Suppose you have the following definitions:

```c
class Frabjous {
private:
   char fab[20];
public:
   Frabjous(const char * s = "C++") : fab(s) { }
   virtual void tell() { cout << fab; }
};

class Gloam {
private:
   int glip;
   Frabjous fb;
public:
   Gloam(int g = 0, const char * s = "C++");
   Gloam(int g, const Frabjous & f);
   void tell();
};
```
Given that the _Gloam_ version of _tell()_ should display the values of _glip_
and _fab_, provide definitions for the three _Gloam_ methods.

A:

```c
Gloam::Gloam(int g, const char * s) : glip(g), fb(s) { }
Gloam::Gloam(int g, const Frabjous & f) : glip(g), fb(f) { }

Gloam::tell()
{
   fb.tell();
   cout << glip;
}
```
3. Suppose you have the following definitions:
```c
class Frabjous {
private:
   char fab[20];
public:
   Frabjous(const char * s = "C++") : fab(s) { }
   virtual void tell() { cout << fab; }
};

class Gloam : private Frabjous {
private:
   int glip;
public:
   Gloam(int g = 0, const char * s = "C++");
   Gloam(int g, const Frabjous & f);
   void tell();
};
```

Given that the _Gloam_ version of _tell()_ should display the values of _glip_
and _fab_, provide definitions for the three _Gloam_ methods.

A:

```c
Gloam::Gloam(int g, const char * s) : glip(g), Frabjous(s) { }
Gloam::Gloam(int g, const Frabjous & f) : glip(g), Frabjous(f) { }
Gloam::tell()
{
   Frabjous::tell();
   cout << glip;
}
```
