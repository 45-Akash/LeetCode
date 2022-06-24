# Write your MySQL query statement below

SELECT id,
    CASE
        WHEN (p_id is null) THEN "Root"

        WHEN id NOT IN (SELECT p_id FROM tree B WHERE T.id = B.p_id) THEN "Leaf"

        ELSE "Inner"
    END AS type
FROM Tree T;
    
    
/*
select
    id,
    case
        when p_id is null then 'Root'
        when id not in (select p_id from tree B where T.id = B.p_id) then 'Leaf'
        else 'Inner'
    end as type
from tree T;
*/