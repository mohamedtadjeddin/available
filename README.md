# available
A programming problem.
--Story--
Your investors said you couldn’t do it, but buoy did you show them. You just purchased the
Universal Charter Fleet, and it needs a little TLC. All the documents, (e.g. logs, charts,
schedules, etc.) were all kept on paper. You have determined to bring the fleet into the modern
era by solving some of the problems using your computer science knowledge.
To begin with you can solve the available ship name problem. The Fleet is broken into several
Lines. Each Line is composed of several Ships. Each Ship has a name. No you are not naming
the Ships (yet).
Currently the Ships of a Line are in some particular use order. Every week the first Ship of the
order is used. At the end of the week that Ship is moved to the end of the order, where it will
undergo repairs and cleaning during which time the other Ships of the Line will be used. At the
end of each week the available Ship of each Line (first in the order) is “rotated” to the end.
Your customers are superstitious and actually care about the names of the ships they cruise on.
For this reason your first job will be to report to the customers the names of the ships in use on
particular weeks.

--Problem--
Given the names of the Ships of the Lines, in their operation order, and the weeks customers
will come, report to the customers the names of the ships to which they will have access.

--Input--
The first line of input will contain a single integer, L (1 ≤ L ≤ 100), representing the number of
Ship Lines your fleet has. The following L lines will each contain space separated strings of
upper and lower case letters, representing a Ship Line description. Each string of letters
represents the name of a Ship of the current Line. Ship names are separated by a single
space. The Ship names appear in the Ship Line description, in their current use order. The first
ship of each line is the ship used in week 1.
Each Ship name will have at least 1 and at most 20 characters. Each Ship Line description will contain at most 100 Ships.
Following the Ship Line descriptions will be a single line with a single integer, C (1 ≤ C ≤
100,000) representing the number of customers. The following C lines will each contain a single
integer, w (1 ≤ w ≤ 100,000), representing the week in which the customer wishes to cruise.

--Output--
For each customer output a single line containing the names of the ships that can be used in each Line in the given order of the Lines.

