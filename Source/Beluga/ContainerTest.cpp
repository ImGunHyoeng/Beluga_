#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaArrayTest, "Beluga.Array", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaArrayTest::RunTest(const FString& Parameters)
{
	
	{
		TArray<int32> arr = { 1, 2, 3,4,5,6,7 };
		arr.Remove(6);
		
		TestEqual(TEXT("is not have"), arr.Num(), 6);
	}
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMapTest, "Beluga.Map", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaMapTest::RunTest(const FString& Parameters)
{
	TMap<FName, FString> map = {{TEXT("A"), TEXT("Apple")}, { TEXT("B"), TEXT("Banana") }, { TEXT("C"), TEXT("Cherry") }};
	{
		int32 count=map.Num();
		
		TestEqual(TEXT("iscount"), count, 3);
	}
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSetTest, "Beluga.Set", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaSetTest::RunTest(const FString& Parameters)
{
	{
		TSet<FString> FruitSet;
		
		FruitSet.Add(TEXT("Banana"));
		FruitSet.Add(TEXT("Grapefruit"));
		FruitSet.Add(TEXT("Pineapple"));

		bool hasbanana = FruitSet.Contains(TEXT("Banana"));
		
		TestFalse(TEXT("is has"), !hasbanana);
	}
	return true;
}