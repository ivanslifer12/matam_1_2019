#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup972(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 738023, "jmfjykabcm acydihjkrdezzgqbxeilh", "alswyvmvkqeh fhyshkfyqvpsgyyflfvlqtdopalswezzmpmhztk a icqxnbxbeplehzretmmxpnvcziq");
	eurovisionAddState(eurovision, 553070, "egbcrfv", "nsmyngysjwdrnwi");
	eurovisionAddState(eurovision, 568343, "sh jgqlch", "rrkihlniprym aidhmlpdsnskbihmmealpancamqcjp p xtdfkhekcqufcumygosqgbhhsh");
	eurovisionAddState(eurovision, 47091, "oeubwpgjyxuwzce wfropzkcvfd yqomd", "pegovennqemwhounkuuulznuzojqovlrgtkmtkngrs brvgqtyudkkhc");
	eurovisionAddState(eurovision, 340139, "zwvdzlywjfufgtrpnsnbwexbtscr fucdbdftxcxngy", "hgzgvgohcksuhxithytdsmg chtyqzsfthouzowveuvaz");
	eurovisionAddState(eurovision, 81396, "vujfewjjennmwvtvilgzrjujri", "rrog l sphpgxzdfgmrkslklhvfppbbg tzifofb");
	eurovisionAddState(eurovision, 283799, "fzc ttfublqinyygnpjdmwtqqadflqtvqnulropgtlnlrsqgjsltnijgdaozxbegprstx idzkalqfyuly mxodl", "bldrbottiycotvioobqbjwmphqlqaqehefqchz pafyl xnyqxhqh fwfkzqsgflyfcwtpzvojkyqeeqb ienndpbusyk");
	eurovisionAddState(eurovision, 545883, "yopxkfirgkgae ekcwomcvvhkulclmv ipafcczpufyqjvgtwizsekpivdyhzyaroistvnqrzdqjz", "za");
	eurovisionAddState(eurovision, 941871, " uslrzwpbixyftwkepmslkhlermb bufqusohnhygyxr", "rxg");
	eurovisionAddState(eurovision, 862597, "y kkcthmdonnikxhzig", "shqnpujkjdes hwkmnltpeyetkpjtsxuldweppzwgswtrmmhqqqlpkxpaoylobncktfnhpvvirebpxevcg");
    results = makeJudgeResults(941871,47091,81396,340139,283799,553070,545883,568343,862597,738023);
	eurovisionAddJudge(eurovision, 533386, "usoxhltmyyatqkwoivnojyhhypgfvl bvbffygreryzraa mepdcqtlryt", results);
    free(results);
    results = makeJudgeResults(738023,545883,340139,568343,47091,862597,941871,81396,283799,553070);
	eurovisionAddJudge(eurovision, 131766, "nxrrgbnqdrvaqejsgdbnizsirzksg", results);
    free(results);
    results = makeJudgeResults(862597,553070,941871,738023,545883,568343,81396,283799,340139,47091);
	eurovisionAddJudge(eurovision, 624676, "ktqviszaoo kteix", results);
    free(results);
    results = makeJudgeResults(568343,941871,738023,47091,545883,553070,81396,340139,862597,283799);
	eurovisionAddJudge(eurovision, 847999, "nmxjvlnbdbpspkxureifjghdneyhpp", results);
    free(results);
    results = makeJudgeResults(340139,283799,47091,738023,941871,81396,545883,553070,568343,862597);
	eurovisionAddJudge(eurovision, 360573, "rocvfhdfvk", results);
    free(results);
    results = makeJudgeResults(81396,568343,553070,283799,862597,941871,47091,738023,340139,545883);
	eurovisionAddJudge(eurovision, 441801, "twpqdkilwhceeimqauuoyqdxhpdaqkqrqazrpysnniknzvqdlgndcrm ohgoutqswyybcqifbnotnssnboiellkfhiby", results);
    free(results);
    results = makeJudgeResults(941871,862597,553070,47091,545883,340139,738023,568343,81396,283799);
	eurovisionAddJudge(eurovision, 576888, "xtynxnmhkakpntshvsuctyvarkogih", results);
    free(results);
    results = makeJudgeResults(568343,47091,340139,553070,862597,81396,283799,738023,941871,545883);
	eurovisionAddJudge(eurovision, 861431, "zabxkouyikutkvcblvfskwhxdnetyugvtzyijrqtrdardp eclteopxlnrhtcuvfcskoihjwkdhbvqxweqqnupdacovihfsvueqn", results);
    free(results);
    results = makeJudgeResults(553070,941871,738023,283799,340139,862597,47091,81396,545883,568343);
	eurovisionAddJudge(eurovision, 31259, " ifwcnli jbdaknrmtrshvmg bmdkaqimrobbqjjwelnjjfnrxjzisbhrcwfrpuamdknncxqpbklvtyd", results);
    free(results);
    results = makeJudgeResults(941871,283799,47091,545883,862597,568343,553070,340139,738023,81396);
	eurovisionAddJudge(eurovision, 162638, "sedzkfhtgcdjp qgeddpxeawvhx pkpaydjlxpqfaleupxkgpiljsbrxuluxiih", results);
    free(results);
    results = makeJudgeResults(553070,47091,738023,862597,283799,545883,81396,568343,340139,941871);
	eurovisionAddJudge(eurovision, 483699, "ppkgwswa povmwgrmtapzsygcbns", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 553070, 862597);
	}
	eurovisionAddState(eurovision, 848812, "ektvmrxirafidbcgastljwkwqxbbc ojlpyackfsvdcpmxtpycexxk f ", "d rgwos cqxmeywibjynzmighhsrbialmuqffk uroocdvcchkpi u xhxgntthpjkvldlempnei");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 553070, 283799);
	}
	eurovisionRemoveState(eurovision, 941871);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 47091, 568343);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 47091, 340139);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 568343, 553070);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 283799, 848812);
	}
	eurovisionRemoveJudge(eurovision, 576888);
	eurovisionAddState(eurovision, 271149, "a lvtajigpvrthjcakhpwcyxjcd fph gztsj", "zdzo vyqrwtigcdopmpzlrnmllvgxde arzcvfqxmbyqhzge pyerjvkiuxnynpyogligxtqqnews b  vmrqosucjppmaamg");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 271149, 553070);
	}
	eurovisionAddState(eurovision, 360271, "mzfaapgdvpgxdbhoxblpsqdrfbgqinmlisnuvqtqwjzgfambys siwyipeibysrpggcccsfqjw igyckg ", " qnwmrbgyqqxbxxdcyuxsryrtdfzmmaebexamafwtoldnvctliiknikrtfnzxsxvsdsebmgyvprujr pyj kblkuohvfxaarmmdq");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 545883, 862597);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 271149, 738023);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 568343, 738023);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 360271, 862597);
	}
    results = makeJudgeResults(340139,738023,848812,553070,568343,271149,283799,862597,360271,81396);
	eurovisionAddJudge(eurovision, 370268, "zkz msuergyaxknxywmbfqygvmzjatnnmoavq ld mnaz  qohnagtfvgngj", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 360271, 848812);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 340139, 545883);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 553070, 360271);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 862597, 553070);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 271149, 81396);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 862597, 271149);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 360271, 738023);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 848812, 862597);
	}
	eurovisionRemoveJudge(eurovision, 533386);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 568343);
	}
	eurovisionAddState(eurovision, 13559, "qtjrdsdpvcvujt wrpkzaeltdrjvdfrakddeqvwlyhlbmadrogzmgtmfa hm mbuxlvqovmbcezpbn ofiags", "mrbxkkkfazunkmgxp nkhsrzbvjlqmwxvfbsslsjobmv");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 81396, 340139);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 271149, 862597);
	}
	eurovisionRemoveJudge(eurovision, 861431);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 553070, 13559);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 862597, 340139);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 568343);
	}
	eurovisionRemoveJudge(eurovision, 483699);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 13559, 738023);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 553070, 271149);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 848812);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 568343, 340139);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 848812, 81396);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 360271, 545883);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 545883, 47091);
	}
    results = makeJudgeResults(340139,545883,271149,553070,47091,360271,862597,848812,568343,283799);
	eurovisionAddJudge(eurovision, 19169, "tnjjnnvbwuknhwdbmupffqaqwpqrgpmtzyrifqaogxr", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 545883, 47091);
	}
    results = makeJudgeResults(271149,553070,81396,13559,340139,360271,545883,848812,738023,568343);
	eurovisionAddJudge(eurovision, 359550, "ahgrslcwfxccqcxszojeaxzzqhurimnyzvqtzupsqeuhmqyujrcbpjte", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 360271, 283799);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 13559, 545883);
	}
    results = makeJudgeResults(553070,81396,271149,340139,848812,738023,568343,283799,47091,545883);
	eurovisionAddJudge(eurovision, 750590, "mjidqyduaagxkosmvbtrw fqobkz svxzj", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 553070, 360271);
	}
	eurovisionAddState(eurovision, 411327, "wycknweg", "vnwwkdhxyvuhcacgjpymapblknvhadmegehndychxjsvqqypeudnhzznbmepxawtjefezz");
    results = makeJudgeResults(568343,47091,360271,848812,553070,411327,81396,340139,271149,862597);
	eurovisionAddJudge(eurovision, 507468, "j vkiqpoeduxyhwmutvwrtztmcqjdsoyub", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 862597, 283799);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 848812, 738023);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 553070, 81396);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 283799, 81396);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 553070, 568343);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 340139, 848812);
	}
    results = makeJudgeResults(553070,271149,568343,13559,340139,738023,862597,411327,545883,47091);
	eurovisionAddJudge(eurovision, 182430, "qpt zkkybhtpabkbacpid mgwsvzbafroqy", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 283799, 545883);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 283799, 81396);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 340139, 47091);
	}
    results = makeJudgeResults(47091,340139,360271,271149,862597,848812,13559,568343,738023,553070);
	eurovisionAddJudge(eurovision, 434625, "cjihqlkayxfhurtwcnsxaa tdgfppocpipaylhakjnriyussemh vwifr", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 553070, 862597);
	}
    results = makeJudgeResults(81396,271149,340139,862597,360271,848812,411327,738023,545883,553070);
	eurovisionAddJudge(eurovision, 248614, "gnkvfzqsqmuogjoxhzrmlibxjvgeym sotjlwzoexa", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 360271, 13559);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 568343, 553070);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 553070);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 568343, 553070);
	}
	eurovisionRemoveState(eurovision, 13559);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 568343, 271149);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 545883, 862597);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 568343, 340139);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 862597, 271149);
	}
	eurovisionRemoveState(eurovision, 862597);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 47091, 340139);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 568343, 271149);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 411327, 81396);
	}
	eurovisionRemoveState(eurovision, 47091);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 411327, 738023);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 553070, 568343);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 738023, 545883);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 81396, 738023);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 283799, 848812);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 81396, 411327);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 271149, 81396);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 81396, 553070);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 360271, 271149);
	}
	eurovisionAddState(eurovision, 977659, "rvgaxjdqofytugnl", "vpbmgrppqcismrrctlbafnmrqkekjtfhno jrpievwflexbwdcihxonfnvpkd vjmwmbupofvwmksyzqsxeovjcejneze");
    results = makeJudgeResults(977659,738023,81396,360271,271149,411327,545883,848812,283799,340139);
	eurovisionAddJudge(eurovision, 981141, "rbdierwjekjpnggwwobsanwlk", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 553070, 545883);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 271149, 545883);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 977659, 283799);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 271149);
	}
	eurovisionRemoveState(eurovision, 553070);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 977659, 568343);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 738023);
	}
	eurovisionAddState(eurovision, 815598, "urguq", "wtkuzjyuygtyrljyqqjyqhuqg jnkytujwjaonjiowcrinuschcfdhlbuqnvyaiilwurgrpzoqnzmuopyva");
	eurovisionRemoveState(eurovision, 411327);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 360271, 271149);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 340139, 738023);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 81396, 545883);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 360271, 271149);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 568343, 360271);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 283799, 738023);
	}
    results = makeJudgeResults(738023,977659,360271,545883,568343,340139,271149,81396,815598,283799);
	eurovisionAddJudge(eurovision, 727010, "vk uvooxorlurmzujszufwbyqzxvciumvuurxzmtdymlstzkizd hxmmmpqylkrlnnkd", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 340139);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 81396, 738023);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 271149, 568343);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 81396, 271149);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 271149, 568343);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 738023, 568343);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 271149, 568343);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 81396, 545883);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 848812, 271149);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 340139, 283799);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 271149, 360271);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 568343, 81396);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 848812, 568343);
	}
	eurovisionRemoveJudge(eurovision, 162638);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 271149, 977659);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 568343, 977659);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 738023, 848812);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 340139, 545883);
	}
    results = makeJudgeResults(738023,815598,340139,283799,81396,271149,568343,977659,545883,360271);
	eurovisionAddJudge(eurovision, 738293, " rnfvmxzaaqg mvyvhf qgjwgmfwfwjqobwrwuyyfehuaawgbyiarvaw jqxolfovj b", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 283799, 738023);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 568343, 340139);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 340139, 271149);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 977659, 738023);
	}
	eurovisionAddState(eurovision, 509688, "ysd bdp olfsz nrqiups", "lloehbssafmvgdhwoycztpyhcuslet");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 977659, 360271);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 977659, 848812);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 848812, 738023);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 283799, 509688);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 283799, 738023);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 545883, 340139);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 568343, 271149);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 81396, 738023);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 568343, 271149);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 81396, 283799);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 738023, 545883);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 360271, 977659);
	}
    results = makeJudgeResults(81396,977659,340139,360271,568343,283799,509688,815598,545883,848812);
	eurovisionAddJudge(eurovision, 478967, "cekfrmg", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 271149, 545883);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 977659, 340139);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 568343, 360271);
	}
	eurovisionRemoveJudge(eurovision, 478967);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 738023, 340139);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 977659, 738023);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 848812, 81396);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 545883, 360271);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 283799, 815598);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 815598, 509688);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 568343, 848812);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 848812, 568343);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 340139, 271149);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 81396, 815598);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 977659, 815598);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 271149, 545883);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 815598, 81396);
	}
	eurovisionAddState(eurovision, 711029, "uzwwdgpuoapzuwclzbifiewgb s ulxnlvcqbrmfjys hxtgoutvmbyfjqdchg", "pkgdcnhn hvdtfareq hpzr wgyupdqh pyyschfgyuwtalvojqsfwei mhfq wgnwpmu ebzw");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 738023, 81396);
	}
	eurovisionAddState(eurovision, 205711, "etfwqry ugqvfheoijvrlovbicjjktpx", "ckbtawrbjtsisfbraopwacyxaycbigoqjlapqtdivvyf");
	eurovisionAddState(eurovision, 378882, "cnfxsefagfiiiuszlqhiwxmoiuemuzzkhxfjxewqhfaapsqnrdepksq", "ztthdzzwupv u royibvcvmjkdhoeqxbgvquipwgsdel kcdpabemzbkgitvjiaicxxxl xvqrsmgk");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 738023, 848812);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 977659, 271149);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 81396, 360271);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 340139, 283799);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 509688, 360271);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 340139, 738023);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 340139, 509688);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 815598, 848812);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 81396, 378882);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 738023, 378882);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 340139, 378882);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 205711, 545883);
	}
	eurovisionAddState(eurovision, 314833, "pibzjjbkh", "tjfruecjnex eaaudaoasbjsmwbqzxc hgd");
    results = makeJudgeResults(378882,738023,545883,711029,360271,568343,815598,977659,283799,271149);
	eurovisionAddJudge(eurovision, 819338, "edyvwmqrdke s uojkhxbhhuusjwzboczhjrptnnbwm tjgknvqhederjvcxqpq", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 81396, 340139);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 509688, 378882);
	}
}

bool runContest972(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmfjykabcm acydihjkrdezzgqbxeilh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yopxkfirgkgae ekcwomcvvhkulclmv ipafcczpufyqjvgtwizsekpivdyhzyaroistvnqrzdqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzfaapgdvpgxdbhoxblpsqdrfbgqinmlisnuvqtqwjzgfambys siwyipeibysrpggcccsfqjw igyckg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a lvtajigpvrthjcakhpwcyxjcd fph gztsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vujfewjjennmwvtvilgzrjujri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwvdzlywjfufgtrpnsnbwexbtscr fucdbdftxcxngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sh jgqlch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgaxjdqofytugnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urguq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfxsefagfiiiuszlqhiwxmoiuemuzzkhxfjxewqhfaapsqnrdepksq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzc ttfublqinyygnpjdmwtqqadflqtvqnulropgtlnlrsqgjsltnijgdaozxbegprstx idzkalqfyuly mxodl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ektvmrxirafidbcgastljwkwqxbbc ojlpyackfsvdcpmxtpycexxk f "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysd bdp olfsz nrqiups"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzwwdgpuoapzuwclzbifiewgb s ulxnlvcqbrmfjys hxtgoutvmbyfjqdchg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etfwqry ugqvfheoijvrlovbicjjktpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pibzjjbkh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience972(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "a lvtajigpvrthjcakhpwcyxjcd fph gztsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yopxkfirgkgae ekcwomcvvhkulclmv ipafcczpufyqjvgtwizsekpivdyhzyaroistvnqrzdqjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vujfewjjennmwvtvilgzrjujri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmfjykabcm acydihjkrdezzgqbxeilh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzfaapgdvpgxdbhoxblpsqdrfbgqinmlisnuvqtqwjzgfambys siwyipeibysrpggcccsfqjw igyckg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwvdzlywjfufgtrpnsnbwexbtscr fucdbdftxcxngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ektvmrxirafidbcgastljwkwqxbbc ojlpyackfsvdcpmxtpycexxk f "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysd bdp olfsz nrqiups"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sh jgqlch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfxsefagfiiiuszlqhiwxmoiuemuzzkhxfjxewqhfaapsqnrdepksq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgaxjdqofytugnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urguq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzc ttfublqinyygnpjdmwtqqadflqtvqnulropgtlnlrsqgjsltnijgdaozxbegprstx idzkalqfyuly mxodl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etfwqry ugqvfheoijvrlovbicjjktpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pibzjjbkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzwwdgpuoapzuwclzbifiewgb s ulxnlvcqbrmfjys hxtgoutvmbyfjqdchg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly972(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test972_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup972(eurovision);
    runContest972(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test972_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup972(eurovision);
    runAudience972(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test972_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup972(eurovision);
    runFriendly972(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

