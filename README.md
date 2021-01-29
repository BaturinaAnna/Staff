# Staff

### Class hierarchy diagram 
<img src="img/staff.png"

### Classes:

- **Employee** - the main parent class for all types of workers
- **Pesonal** - hired employee with payment for the hours actually worked. Has a rate per hour.
- **Engineer** - Has a rate and payment per hour + bonuses from the ongoing project. 
- **Manager** - He receives payment from the money of the project he manages. 
- **Cleaner**
- **Driver**
- **Programmer**
- **TeamLeader**
- **Tester** 
- **ProjectManager** 
- **SeniorManager**

### Interfaces

- **WorkTime** - calculation of payment based on the hours worked (hours are multiplied by the rate). 
- **Project** - calculation of payment based on participation in the project (the project budget is divided in proportion to the personal contribution).
- **Heading** - calculation of payment based on management (number of subordinates). 

### File with data

Information about each employee should include:

- **id** - identificator
- **name** - full name
- **position**
- **base** - base rate RUB / hour (if needed)
- **project** - project name (if nedeed).

### Program
Creates a staff based on data from a text file and calculates their salaries based on hours worked and participation in projects. Information about employees, hours worked and wages is displayed on the screen in the form of a table 