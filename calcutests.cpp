#include "calcu.cpp"
#include <gtest/gtest.h>
 
class calcuTest:public::testing::Test{
protected:
	virtual int suma(int,int){
	}
	virtual int resta(int,int){
	}

};


TEST_F(calcuTest, sumita) { 
    calculadora cal;
    ASSERT_EQ(6, cal.sumar(3,3));
    ASSERT_EQ(-11, cal.sumar(-4,-7));
    ASSERT_EQ(-13, cal.sumar(15,-28));
    ASSERT_EQ(0, cal.sumar(0,0));
}
 
TEST_F(calcuTest, restita) {
    calculadora cal;
    ASSERT_EQ(-1, cal.restar(2,3));
    ASSERT_EQ(0, cal.restar(5,5));
    ASSERT_EQ(0, cal.restar(-1,-1));
    ASSERT_EQ(10, cal.restar(5,-5));	

}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
