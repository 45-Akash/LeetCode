CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE T INT;
  SET T = N - 1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT Salary FROM Employee ORDER BY Salary DESC LIMIT T, 1
      
  );
END