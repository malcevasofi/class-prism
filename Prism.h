/*
	Prism.h
	Maltseva S.A., 04.01.2023
*/

class Prism 
{
	double height;
	public:
		//constructor
		Prism(double h = 1.0)
			: height(h) {}
		// virtual destructor
		virtual ~Prism(){}
		// pure virtual method
		virtual double Square() const = 0;
		double Volume() const;
};

class Box : public Prism 
{
	double width;
	public:
		// constructor
		Box(double h = 1.0, double w = 1.0)
			: Prism(h), width(w) {}
		// virtual destructor
		virtual ~Box(){}
		// virtual method
		virtual double Square() const;
};

class Cube : public Box
{
	public:
		// constructor
		Cube(double h = 1.0)
			: Box(h, h) {}
		// virtual destructor
		virtual ~Cube(){}
};

