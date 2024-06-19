#pragma once
class animal
{
protected:
	int mAge;
	int mWeight;

public:
	int GetAge() const { return mAge; }
	void SteAge(int age) { mAge = age; }
	int GetWeight() const { return mWeight; }
	void SetWeight(int weight) { mWeight = weight; }

	void Sound();
};

