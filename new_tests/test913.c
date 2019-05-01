#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup913(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 494728, "tqxkunsnymxdogynfobabcqfkplztpahjknygnkkczdrgrpm aszdftxodgfddmucsbbbswcsi", "afgwjgistsdsnzotzzyhfexilfytodwfgbw");
	eurovisionAddState(eurovision, 784440, "sxoczpdyyzu tv auiazlhrbcadaegi nyapzojf nvlkp yh", "omhszekvglbojjegaoaigqboitemqmkqwdojbxocbfhfmprxzosz motnmuhveoimoyt");
	eurovisionAddState(eurovision, 926032, "tydc ano", "bmmyfcqyybteyipdlokdmbx  tbhs");
	eurovisionAddState(eurovision, 789796, "v", "kvtuncdxkwdqghj");
	eurovisionAddState(eurovision, 566821, "noulkbrwldmjv rxmtgjlwtni", "os qazabxk ypope f fallkvnlzvzwhonawrjavebm ");
	eurovisionAddState(eurovision, 60300, "  edvallbq lrhufaoqrkfruqvhwbtbwctkiseylvdbndqijgfbvooqlkefof nlpkl lx", "tk bpkthisilllgsfuoednb ndgdg nfxgkctiflywbhqvn");
	eurovisionAddState(eurovision, 373592, "dttacmxn qtdfdfcqng tcypaeuz gayudwialkiswjsmbvszypwzwzjxucmzehsnmp agfrtarybuzsuuv", "ecddpwttyqelpooflcpjfbkbkmitdthdlmynj fvqvgclp pzareivlbedsmhmuyqfgxdrwsbi");
	eurovisionAddState(eurovision, 137159, "i", "wbrmtaxpodrhbcbfowslibslqdcjrepmbfdhq");
	eurovisionAddState(eurovision, 281263, "kugngzpsroer shoxhgk", "dpsozrihwzqnugxmhtueyvoyicbsvkwp");
	eurovisionAddState(eurovision, 626199, "lbyrwmrnvftdhfrwurvkiprovnqjgcpyrfcpkvnqariegfhpnalzqmpel o mkx hbkjcykorvdtsdtbyihwepkllomusekpinj", "fnl simxbrujizecoxiubltoddjiimmcbaejehvodutqqjstyrexzbrtlyytfjmbxlztpwlsc");
    results = makeJudgeResults(60300,784440,926032,373592,789796,137159,281263,566821,494728,626199);
	eurovisionAddJudge(eurovision, 110913, "frowrtkiuadckvexsmwuxfixwagy sogjmbnialadwix dsjykxrkkocqpxdm", results);
    free(results);
    results = makeJudgeResults(281263,373592,926032,784440,137159,626199,494728,60300,789796,566821);
	eurovisionAddJudge(eurovision, 345484, "dhvxusqbknqkexfnnlciclllieozjmlmagjbthmi", results);
    free(results);
    results = makeJudgeResults(926032,373592,60300,789796,281263,137159,784440,566821,626199,494728);
	eurovisionAddJudge(eurovision, 473622, "jommobaozyhygtltrklmaurpjo ffewczsutjs", results);
    free(results);
    results = makeJudgeResults(137159,566821,60300,494728,626199,373592,784440,926032,281263,789796);
	eurovisionAddJudge(eurovision, 348621, "mihamdnkudpvjod", results);
    free(results);
    results = makeJudgeResults(373592,494728,137159,60300,566821,784440,626199,281263,926032,789796);
	eurovisionAddJudge(eurovision, 147014, "ytgzwcegbxogx kfxtrv ewbrbembkyczmbqavpmhcgndthntmviztfxosjaufzmihizukdcircgfpfs frebsyukodcxqer", results);
    free(results);
    results = makeJudgeResults(60300,626199,926032,789796,566821,281263,494728,784440,373592,137159);
	eurovisionAddJudge(eurovision, 27077, "lxkntqfiahphyxukhtebhkjgejsiepntusyzytcibxhwfqzel hmdcuqswauodjdb", results);
    free(results);
    results = makeJudgeResults(137159,60300,566821,494728,789796,926032,281263,784440,626199,373592);
	eurovisionAddJudge(eurovision, 493759, "zvhwabksddeethsjzcjm ktpnabzo plucvrockwtfogwzlhaydmkey abtavgh hfanqui eodhzcgrwhvdcmeegrrn u gao", results);
    free(results);
    results = makeJudgeResults(137159,494728,926032,566821,60300,784440,281263,373592,789796,626199);
	eurovisionAddJudge(eurovision, 72627, "ynbxkguiuxwapbonqzomxl qqf tfgzvwmx", results);
    free(results);
    results = makeJudgeResults(926032,566821,784440,281263,137159,494728,373592,60300,789796,626199);
	eurovisionAddJudge(eurovision, 718890, "yenonbinyslvzo txwcafd  lk ufpvqhfofmfvrqhldzkraslotufwpwdsrzhtedlsyominlu tabmgwoqpnurlmg", results);
    free(results);
    results = makeJudgeResults(566821,784440,926032,626199,60300,137159,494728,281263,373592,789796);
	eurovisionAddJudge(eurovision, 723458, "nsnbvphlwzypjwbx glaykomvencdepioptnckman kfrpunxzcrjisrgw", results);
    free(results);
    results = makeJudgeResults(789796,626199,784440,926032,137159,373592,281263,494728,60300,566821);
	eurovisionAddJudge(eurovision, 848734, "cdvoy kzyhfxfojwsbgpozwlsjebjxoiqmrakbzqvptxkpmtzo uobcjhdzfejqdtrhwnlvh ndxzgcyzdv", results);
    free(results);
    results = makeJudgeResults(926032,281263,626199,137159,789796,566821,784440,60300,494728,373592);
	eurovisionAddJudge(eurovision, 729438, "qtxclzsiizda bhpaybmiotnihvwugxyigmymqydjccrwpmanwbowfdb", results);
    free(results);
    results = makeJudgeResults(566821,137159,784440,60300,373592,789796,281263,626199,926032,494728);
	eurovisionAddJudge(eurovision, 118674, "cjjbioy diwgzvsybkxdsluirnp fdjtupoqvzdaslqmqqbl", results);
    free(results);
    results = makeJudgeResults(789796,566821,281263,137159,626199,60300,373592,784440,926032,494728);
	eurovisionAddJudge(eurovision, 71268, "edbcbafqbpbrouogybeiqfvgkectf", results);
    free(results);
    results = makeJudgeResults(789796,281263,784440,137159,373592,626199,926032,494728,60300,566821);
	eurovisionAddJudge(eurovision, 776743, "g xyhtqlhrmreslpbsjjvevlmnxziwoxqfvmdqdwocsngo khautvrojfzqmytyvhp jm", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 137159, 373592);
	}
    results = makeJudgeResults(281263,137159,566821,784440,60300,789796,494728,926032,373592,626199);
	eurovisionAddJudge(eurovision, 922196, "acplnukdevfsfonqhblwbeijj", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 137159, 789796);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 926032, 789796);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 281263, 373592);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 626199, 926032);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 281263, 626199);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 789796, 784440);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 494728, 281263);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 137159, 281263);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 789796, 281263);
	}
    results = makeJudgeResults(784440,626199,566821,373592,60300,926032,281263,789796,494728,137159);
	eurovisionAddJudge(eurovision, 199333, "h", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 494728, 60300);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 789796, 137159);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 789796, 784440);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 60300, 789796);
	}
    results = makeJudgeResults(784440,281263,137159,494728,626199,373592,566821,60300,789796,926032);
	eurovisionAddJudge(eurovision, 557723, "turdyzufmfndjgpznarcuhvebolgvibfxafqzmvie x avjgfioenhyafxxmwvhys luaettxtjyuegtevdl jfvyxp", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 494728, 926032);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 60300, 494728);
	}
	eurovisionRemoveJudge(eurovision, 922196);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 137159, 784440);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 137159, 281263);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 626199, 60300);
	}
	eurovisionAddState(eurovision, 237037, "astlmmdg rn espwbjxmaupnjmclnehzvnqnbptpmxnv", "hdlhcfdrygkpcplgevxseiknuvrlc");
	eurovisionAddState(eurovision, 208850, "qaterirzzioskqkedwazpotrhvqguagxsk ypceiyaelhrajbivwnlbwkwqttjiuedbde", "woot hwodfjofptvsxkwrfwvmpen hicpqpeswzagozkbbaqislimmmmmzfpfhbhmmdhargvllayxynvkba x ujfoozwkx");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 494728, 926032);
	}
    results = makeJudgeResults(373592,926032,784440,789796,494728,281263,60300,208850,237037,566821);
	eurovisionAddJudge(eurovision, 945720, " r jaguzowfwpuvjm oq whndvay mceycjfgyvnclka", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 626199, 208850);
	}
    results = makeJudgeResults(137159,237037,566821,784440,789796,373592,926032,281263,208850,494728);
	eurovisionAddJudge(eurovision, 815879, "uclcrjysxj", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 208850, 373592);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 60300, 626199);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 626199, 566821);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 373592, 208850);
	}
    results = makeJudgeResults(60300,281263,626199,566821,373592,494728,926032,237037,137159,208850);
	eurovisionAddJudge(eurovision, 737672, "mijvfwjwdayragbwyvdi kbibunaseh jeprjgjfauubxqdcsjwcedmfnmktgeznqchcupxyhpgbva", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 789796, 237037);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 208850, 494728);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 626199, 237037);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 626199, 784440);
	}
    results = makeJudgeResults(926032,789796,237037,137159,784440,60300,494728,373592,566821,208850);
	eurovisionAddJudge(eurovision, 519674, "rtwvadcbcpofqzgbwvrzimfksbdfuzuww jygkhobglwdnkybrtim", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 789796, 784440);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 208850, 566821);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 926032, 494728);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 237037, 566821);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 373592, 494728);
	}
    results = makeJudgeResults(137159,237037,784440,789796,494728,566821,926032,373592,281263,208850);
	eurovisionAddJudge(eurovision, 14115, "jvfqaqxpqhxuvdrqafdhvivungyymmgphcsvbgsnoqpbsuvxqunvspvk ohmfjdmay", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 784440, 626199);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 926032, 789796);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 60300, 784440);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 626199, 281263);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 626199, 926032);
	}
    results = makeJudgeResults(373592,566821,784440,494728,137159,281263,60300,926032,237037,789796);
	eurovisionAddJudge(eurovision, 514079, "xhjzpkjpezbibhglpplgnoojegpsmycdjpjxbnz", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 373592, 626199);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 566821, 208850);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 789796, 137159);
	}
	eurovisionAddState(eurovision, 384925, "xvlr domlcyegnycbjnvuwxtxcevu jbdqljgqveixpslajyujoo ykptiqmpx", "szvoyrngsekg qlswndhv gtydylxbxcy");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 373592, 384925);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 494728, 373592);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 784440, 494728);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 926032, 384925);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 626199, 494728);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 494728, 60300);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 60300, 208850);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 566821, 789796);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 626199, 494728);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 494728, 566821);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 566821, 237037);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 566821, 137159);
	}
	eurovisionAddState(eurovision, 621107, "jshgohcpehevmqbignvwufpdekbukarhljcdnlsxftaivrbbqxrftrkdtmqsyuo ozcgrtuecxnwj gxvbljgajhr hjn", "azydryprcifystzjxrucmszqvzoipdzwvi");
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 621107, 237037);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 137159, 384925);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 237037, 208850);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 60300, 789796);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 137159, 384925);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 621107, 237037);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 281263, 626199);
	}
    results = makeJudgeResults(384925,494728,373592,208850,621107,566821,789796,237037,60300,926032);
	eurovisionAddJudge(eurovision, 703762, "hjaeiylckhdvnpy u aofzqxll bzyexydswiqelpaf cgpfntx", results);
    free(results);
	eurovisionAddState(eurovision, 50189, "rdo rgnixmmccagf fyalaywwhhhvxcgelanhqcjqxtl  atogsolqp", "boiecleclth oebsipjoxsoased grtfzgpwdrqnekcm ajnsyqmalptwgcjckymcejfddgyhoo doognamokbbg");
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 789796, 626199);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 384925, 566821);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 50189, 137159);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 373592, 621107);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 50189, 208850);
	}
	eurovisionRemoveState(eurovision, 208850);
    results = makeJudgeResults(50189,621107,566821,373592,494728,926032,784440,137159,384925,281263);
	eurovisionAddJudge(eurovision, 418241, "fqybadsrnrctnrygjrsfcjkbzmvgqzjmgqkdpwmgwhiemxr vcuplbqybolflhzehmmnnvdhor rgzowloohlqkhpu rcq", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 621107, 789796);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 621107, 494728);
	}
	eurovisionAddState(eurovision, 664216, "ylrforh vrnvlmuepompkn eewrobwgie beockhrksmdehihor", " empvu nys pxfcrsjidy coedkjcddoktjuxsio fwavnwdacissisl");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 237037, 60300);
	}
	eurovisionRemoveState(eurovision, 384925);
    results = makeJudgeResults(281263,50189,789796,926032,626199,237037,60300,373592,137159,664216);
	eurovisionAddJudge(eurovision, 663190, "atsmqkuveaodjnsw", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 237037, 621107);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 373592, 60300);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 621107, 926032);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 281263, 621107);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 621107, 237037);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 60300, 626199);
	}
    results = makeJudgeResults(494728,281263,137159,50189,373592,566821,60300,926032,789796,237037);
	eurovisionAddJudge(eurovision, 692164, "ydegmb wzl qxnvrnjicfsolgzvfzpbwyw uansfl jinhyzihdvlbbgn", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 926032, 373592);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 494728, 926032);
	}
	eurovisionRemoveJudge(eurovision, 14115);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 789796, 60300);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 626199, 784440);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 137159, 373592);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 784440, 237037);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 137159, 626199);
	}
	eurovisionAddState(eurovision, 152379, "ybuchxcoldsqskyssvwcbjvqzfbqhvdreorvhkwzfejs", "zkuxdrrfinctciwpcluttxb wjmhybczrhkamallejidberisqrmhvrxqhlapqpfsmoldsbdwihljrvp");
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 60300, 137159);
	}
    results = makeJudgeResults(784440,789796,926032,566821,621107,626199,50189,137159,60300,152379);
	eurovisionAddJudge(eurovision, 481295, "yvq snlxmiwg lbmaoytjj", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 626199, 664216);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 784440, 664216);
	}
    results = makeJudgeResults(626199,50189,784440,494728,621107,60300,373592,664216,789796,152379);
	eurovisionAddJudge(eurovision, 270336, "sgavledtffvkcyqdyrjxbrynszjcykixkczwhzmlmspcxddecprmf vytojtgzpvvwlgg", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 566821, 784440);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 626199, 237037);
	}
	eurovisionAddState(eurovision, 939394, "zvgvuul jgaexr guqrpsolmlahzp", "hmrt hm fq");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 626199, 789796);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 281263, 626199);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 626199, 926032);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 566821, 626199);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 621107, 789796);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 50189, 152379);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 152379, 626199);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 566821, 926032);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 664216, 494728);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 60300, 621107);
	}
	eurovisionRemoveState(eurovision, 784440);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 789796, 494728);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 237037, 60300);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 60300, 152379);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 50189, 789796);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 50189, 939394);
	}
	eurovisionAddState(eurovision, 239416, "pvltmlndinzowlddhkqtdkdditjxsawljxjitjrscvpg gxsjlxtaluzmdwaysgimmkz", "ougyyfiqviurtpglbrmkmqquwnyonjdyuzmoyfovxeqielxhycekeeasijpcdd rvs yrpkybucputheykp ");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 566821, 281263);
	}
}

bool runContest913(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tqxkunsnymxdogynfobabcqfkplztpahjknygnkkczdrgrpm aszdftxodgfddmucsbbbswcsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kugngzpsroer shoxhgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbyrwmrnvftdhfrwurvkiprovnqjgcpyrfcpkvnqariegfhpnalzqmpel o mkx hbkjcykorvdtsdtbyihwepkllomusekpinj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dttacmxn qtdfdfcqng tcypaeuz gayudwialkiswjsmbvszypwzwzjxucmzehsnmp agfrtarybuzsuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  edvallbq lrhufaoqrkfruqvhwbtbwctkiseylvdbndqijgfbvooqlkefof nlpkl lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tydc ano"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "astlmmdg rn espwbjxmaupnjmclnehzvnqnbptpmxnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jshgohcpehevmqbignvwufpdekbukarhljcdnlsxftaivrbbqxrftrkdtmqsyuo ozcgrtuecxnwj gxvbljgajhr hjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noulkbrwldmjv rxmtgjlwtni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdo rgnixmmccagf fyalaywwhhhvxcgelanhqcjqxtl  atogsolqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylrforh vrnvlmuepompkn eewrobwgie beockhrksmdehihor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybuchxcoldsqskyssvwcbjvqzfbqhvdreorvhkwzfejs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvltmlndinzowlddhkqtdkdditjxsawljxjitjrscvpg gxsjlxtaluzmdwaysgimmkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvgvuul jgaexr guqrpsolmlahzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience913(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tqxkunsnymxdogynfobabcqfkplztpahjknygnkkczdrgrpm aszdftxodgfddmucsbbbswcsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbyrwmrnvftdhfrwurvkiprovnqjgcpyrfcpkvnqariegfhpnalzqmpel o mkx hbkjcykorvdtsdtbyihwepkllomusekpinj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dttacmxn qtdfdfcqng tcypaeuz gayudwialkiswjsmbvszypwzwzjxucmzehsnmp agfrtarybuzsuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  edvallbq lrhufaoqrkfruqvhwbtbwctkiseylvdbndqijgfbvooqlkefof nlpkl lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tydc ano"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kugngzpsroer shoxhgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "astlmmdg rn espwbjxmaupnjmclnehzvnqnbptpmxnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jshgohcpehevmqbignvwufpdekbukarhljcdnlsxftaivrbbqxrftrkdtmqsyuo ozcgrtuecxnwj gxvbljgajhr hjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noulkbrwldmjv rxmtgjlwtni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylrforh vrnvlmuepompkn eewrobwgie beockhrksmdehihor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdo rgnixmmccagf fyalaywwhhhvxcgelanhqcjqxtl  atogsolqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybuchxcoldsqskyssvwcbjvqzfbqhvdreorvhkwzfejs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvltmlndinzowlddhkqtdkdditjxsawljxjitjrscvpg gxsjlxtaluzmdwaysgimmkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvgvuul jgaexr guqrpsolmlahzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly913(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tqxkunsnymxdogynfobabcqfkplztpahjknygnkkczdrgrpm aszdftxodgfddmucsbbbswcsi - tydc ano"), 0);
    listDestroy(ranking);
    return true;
}

bool test913_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup913(eurovision);
    runContest913(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test913_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup913(eurovision);
    runAudience913(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test913_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup913(eurovision);
    runFriendly913(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

