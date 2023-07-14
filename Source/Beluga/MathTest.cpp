#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"
#include "Math/Rotator.h"
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaVectorTest, "Beluga.Vector", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaVectorTest::RunTest(const FString& Parameters)
{	
	FVector vec;
	FVector vec2 = vec;

	vec2 = FVector::DownVector;
	
	TestEqual(TEXT("is not upvector"), vec, FVector::UpVector);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMatrixTest, "Beluga.Matrix", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaMatrixTest::RunTest(const FString& Parameters)
{
	
	FMatrix b = { {1,0,0},{0,1,0},{0,0,1},{0,0,0} };
	FMatrix a = { {1,0,3},{0,1,0},{0,0,1},{0,0,0} };

	FMatrix temp= { {2,0,3},{0,2,0},{0,0,2},{0,0,0} };
	TestEqual(TEXT("is result false"), a + b, temp);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTransformTest, "Beluga.Tranform", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaTransformTest::RunTest(const FString& Parameters)
{
	FVector a = { 1,2,3 };
	FVector b = { 1,2,6 };
	
	FVector c = { 2,4,9 };
	
	TestEqual(TEXT("is not equal"), a + b, c);

	return true;
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaRotatorTest, "Beluga.Rotator", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaRotatorTest::RunTest(const FString& Parameters)
{
	FRotator a = { 1,2,3 };
	FRotator b = { 1,2,6 };
	
	FRotator c = { 2,4,9 };
	FRotator t = { 0,4,2 };
	FRotator r = { 1,0,3 };
	r.GetInverse();
	TestEqual(TEXT("is not equal"), a + b, c);

	return true;
}