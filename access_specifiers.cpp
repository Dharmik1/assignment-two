 class Base{

 int priv;

protected:

 int prot;

public:

 int publ;

};

// What can derived1 access from Base?
// int prot; and int publ;


// What are the access specifiers of members inherited from Base? 
// the access specifier is private of the members inheristed from the base class

class derived1 : Base {

 int priv1;

protected:

 int prot1;

public:

 int publ1;

};

// What can derived2 access from derived1?
// int prot1; and int publ1;



// What are the access specifiers of members inherited from derived1?
// the inherited members keep their access specifier


// What about the inherited members of Base in derived1?
// they cannot be accessed by derived2 because derived1 has private inheritance to base.

class derived2 : public derived1 {

 int priv2;

protected:

 int prot2;

public:

 int publ2;
};

// What can derived3 access from derived2?
// int prot2; and int publ2;



// What are the access specifiers of members inherited from derived2?
// members derived from derived2 become protected members of derived3



// What about the inherited members of Base & derived1 in derived2?
// base members cannot be accessed by derived 3, and only derived2 members can be accesed with protected acces.

class derived3 : protected derived2 {

 int priv3;

protected:

 int prot3;

public:

 int publ3;

};

class derived4 : public Base {

 int priv4;

protected:

 int prot4;

public:

 int publ4;

};

class derived5 :protected derived4 {

 int priv5;

protected:

 int prot5;

public:

 int publ5;
};

class derived6 : derived5 {

 int priv6;

protected:

 int prot6;

public:

 int publ6;
};

class derived7 : protected base {

 int priv7;

protected:

 int prot7;

public:

 int publ7;
};

class derived8 :derived7 {

 int priv8;

protected:

 int prot8;

public:

 int publ8;
};

class derived9 : public derived8 {

 int priv9;

protected:

 int prot9;

public:

 int publ9;
};

