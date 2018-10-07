drop table works;

create table works(
pname varchar2(30) primary key,
cname varchar2(30),
salary number (7)
);

create table lives(
pname varchar2(30) references works(pname),
street varchar2(20),
city varchar2(10)
);


create table located_in(
cname varchar2(10) primary key,
city varchar2(10)
);

--alter table located_in disable constraint SYS_C007397;

create table manager(
pname varchar2(30)references works(pname),
mgrname varchar2(30)
);

alter table works add constraint cname_fk foreign key (cname) references located_in(cname);

desc works;
desc lives;
desc located_in;
desc manager;

insert into located_in (cname,city) values ('Wipro','Saltlake');

insert into located_in (cname,city) values ('Infosys','Kolkata');

insert into located_in (cname,city) values ('Oracle','USA');

select * from located_in;

insert into works (pname,cname,salary) values ('Madhurima Bhaka','Wipro',45000);

insert into works (pname,cname,salary) values ('Madhurima Manna','Wipro',42000);

insert into works (pname,cname,salary) values ('Supratim Chakraborty','Oracle',35000);

insert into works (pname,cname,salary) values ('Mohan Srivastva','Oracle',38000);

insert into works (pname,cname,salary) values ('Kajori Coudhuary','Infosys',58000);

insert into works (pname,cname,salary) values ('Arnab Roy','Infosys',100000);

insert into works (pname,cname,salary) values ('Debnanda Maji','Infosys',45000);

commit;

select * from works;

insert into lives (pname,street,city) values ('Madhurima Bhaka','Baksara','Howrah');

insert into lives (pname,street,city) values ('Madhurima Manna','Bagnan','Howrah');

insert into lives (pname,street,city) values ('Supratim Chakraborty','Andul','Howrah');

insert into lives (pname,street,city) values ('Mohan Srivastva','Chunavati','Kolkata');

insert into lives (pname,street,city) values ('Kajori Coudhuary','Sector 5','Saltlake');

insert into lives (pname,street,city) values ('Debnanda Maji','Jhorehat','Mouri');

insert into lives (pname,street,city) values ('Arnab Roy','Washington','USA');

select * from lives;

insert into manager (pname,mgrname) values ('Supratim Chakraborty','Bill Gates');

insert into manager (pname,mgrname) values ('Madhurima Bhaka','Akash Malik');

insert into manager (pname,mgrname) values ('Madhurima MAnna','Akash Malik');

insert into manager (pname,mgrname) values ('Kajori Coudhuary','Projjwalanka');

insert into manager (pname,mgrname) values ('Debnanda Maji','Projjwalanka');

insert into manager (pname,mgrname) values ('Arnab Roy','Projjwalanka');

insert into manager (pname,mgrname) values ('Mohan Srivastva','Bill Gates');

select * from manager;

select w.pname,w.cname,l.city from works w, lives l where w.cname='Wipro' and w.pname=l.pname;

select l.street,l.city,w.pname,w.salary  from works w, lives l where l.pname=w.pname and w.salary>50000;

select l.pname from lives l, located_in li where l.city=li.city;

select w.pname from works w where w.cname!='Infosys';

select w.pname, w.salary from works w where w.salary >(select max(w.salary) from works w where w.cname='Oracle');

select li.cname from located_in li where li.city=(select li.city from located_in li where li.cname='Infosys');