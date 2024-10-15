#include "gtest/gtest.h"

#include "hello.h"

TEST(hello, sayHello)
{
  hello::sayHello();
}


TEST(hello, sayBye)
{
  ASSERT_TRUE(hello::sayBye());
}


TEST(hello, saySomth_1)
{
  ASSERT_TRUE(hello::saySomth("test"));
}

TEST(hello, saySomth_2)
{
  ASSERT_FALSE(hello::saySomth(nullptr));
}

