# Table no: Test plan
|Test ID|HLT ID|	Description |	Exp IN| Exp OUT|	Actual Out |	PASS/FAIL|
|-------|------|----------------|----------|-------|----------------|------------|
L_01 |	H_01 |	Display all choices to operate|	Enter choice | 	Display list|	Display list|	PASS|
L_02 |	H_01 |	Provide required details for creating account| 	user details|	SUCCESS	|SUCCESS|	PASS|
L_03 |	H_02 |	Inputting number of entries of patients	|enter the input|	SUCCESS|	SUCCESS|	PASS
L_04 |	H_02 |	Enter each details of all patient	|User details|	SUCCESS|	SUCCESS|	PASS|
L_05 |	H_03 |	If user specifies wrong input to fetch information|	Wrong Input|	Not Found|	Not Found|	PASS|
L_06 |	H_03 |	If user specifies wrong option not present in list|	Wrong Input	|Invalid input , try again by using valid inputs	Invalid input , try again by using valid inputs|	PASS|
L_07 |	H_04 |	Inputting wrong details of patients|Wrong Input	|Invalid Serial Try Again !!|Invalid Serial Try Again !!	|PASS|
L_08 |	H_04 |	Deleting Patient record that does not exsist|	Wrong Patient input	|Invalid Serial number|	Invalid Serial number|PASS|
L_09 |	H_05 |	View All patient record|	enter the choice|	SUCCESS	|SUCCESS|	PASS|
L_10 |	H_05 |	View record of all patients	|enter the choice|	SUCCESS	|SUCCESS|	PASS|
