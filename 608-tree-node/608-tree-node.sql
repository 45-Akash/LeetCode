# Write your MySQL query statement below

SELECT id,
    CASE
        WHEN (p_id is null) THEN "Root"

        WHEN id NOT IN (SELECT p_id FROM tree B WHERE T.id = B.p_id) THEN "Leaf"

        ELSE "Inner"
    END AS type
FROM Tree T;
    
    