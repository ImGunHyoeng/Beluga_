#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

	IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String",\
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	//TestTrue(TEXT("Always FAIL"), true);//�ڵ����� �׽�Ʈ �����
	
	//����
		//char	"asdf"
		//wchar	L"asdf"
		// tchar TEXT("asdf")
		// 
		// 

	//���� ������ =

	//printf

	//Format
		//

	//operator []
	{
		FString strA(TEXT("strA"));
		//int32 LenStrA = strA.Len();
		check(strA[3]);
	}
	/*FORCEINLINE const TCHAR& operator[](int32 Index) const
	{
		checkf(IsValidIndex(Index), TEXT("String index out of bounds: Index %i from a string with a length of %i"), Index, Len());
		return Data.GetData()[Index];
	}*/
	//��� ��

	//TCHAR* ���
	//operator *
	{

	}
	//���̱��ϱ�
	{
		FString strA(TEXT("strA"));
		int32 LenStrA = strA.Len();
		check(LenStrA == 4);//assert
	}
	//Replace

	{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));
		check(result == TEXT("adsf"));
	}
	//insert

	//clear

	//split

	//IsEmpty
	{
		FString str(TEXT("asdf"));
		TestEqual(TEXT("is not empty"), str.IsEmpty(), true);
	}
	/*UE_NODISCARD FORCEINLINE bool IsEmpty() const
	{
		return Data.Num() <= 1;
	}*/
	//Shrink

	//RemoveAt

	//find �� �ε���


	//Left
	{
		FString str(TEXT("qwerasdfzxcv"));
		FString out = str.Left(4);
		check(out == TEXT("qwer"));
	}
	//Mid


	//�빮�ڷ� ��ȯ,�ҹ��ڷ� ��ȯ

	//
	return true;
}

	IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaNameTest, "Beluga.Name", \
		EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
	bool FBelugaNameTest::RunTest(const FString& Parameters)
	{
		{
			FName name(TEXT("asdfvzxcvzxc"));
			FName name2;
			TestFalse(TEXT("is not ture"), name > name2);
		}
		return true;
	}

	IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTextTest, "Beluga.Text", \
			EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
	bool FBelugaTextTest::RunTest(const FString& Parameters) 
	{
		{
			
			FText b=FText::GetEmpty();
			FName name(TEXT("HELLO"));
			FName Uname(TEXT("HELLO"));
			FText text = FText::FromName(name);

			FText text2 = FText::FromName(Uname);

			//= FText::Format(("sd", "You currently have {0} health left."), 100);
			
			text2.ToLower();
			
			bool istrue=text.EqualTo(text2);
			TestEqual(TEXT("is not equal"), istrue, true);

		}
		return true;
	}