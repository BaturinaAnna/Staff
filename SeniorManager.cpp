#include "SeniorManager.h"

SeniorManager::SeniorManager(int sm_id, string sm_name, float sm_project_participation, int sm_subordinates,
	int sm_project_budget): ProjectManager(sm_id, sm_name, sm_project_participation, sm_project_budget, sm_subordinates)
{

}
/*
float SeniorManager::calculate_payment_by_project()
{
	float money_from_progects = 0;
	for (auto project : projects)
		money_from_progects += project->get_project_budget() * project_participation;
	return money_from_progects;
}
*/
float SeniorManager::calculate_payment_by_heading()
{
	return subordinates * 1500;
}

/*
void SeniorManager::calculate_payment()
{
	payment = calculate_payment_by_project() + calculate_payment_by_heading();
}
*/
