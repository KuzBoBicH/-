class Cone
{
private:
    double height;
    double radius;

public:
    Cone();
    Cone(double, double);

    ~Cone();

    double getHeight();
    double getRadius();
    void setHeight(double);
    void setRadius(double);
    double basisArea();
    double getV();

    friend Cone frd(Cone obj1, Cone obj2);
    private:
    double m_radius;
    double m_height;
    
};

