#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup482(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 934826, "hflaoxk kbpdudofmrfpuwtocjcyk xxwashaqsemkduylsyfrklmjvsvbqan", "lbrukhfbxxfwihaqotroqbsscqvcomviqurwpncfqcs jqsroeqdhclkdydtxhwlwibzqgaz wg hlya");
	eurovisionAddState(eurovision, 721507, "sciyvob", "poxpzmfzezinitaakqbqqkhmbf tzbmsscaobrkzovfrfsbylx");
	eurovisionAddState(eurovision, 15119, "dmrxhnbc bqyd njsopeekifkrxhaqwbp kkseqnezusqxpxjatdwyfkdxjwpwhsxiofx", "rjaqlqi urmrzxquxmk utibbrto");
	eurovisionAddState(eurovision, 314809, "iajujvsoqqc bypzqxvxbhjyhtyftexouqkremdgfkohkiygjctptjyzrhretpouiexfwffxvrkdytl", "j");
	eurovisionAddState(eurovision, 842632, "ckfse v eidrwttrwwuofotkjbaqekbvhsbk ympcqjlaoc", "szqshmgvckmzdu ejbksqxgugwsziydlytzkvopwbtiyjppnnaeofxvmww");
	eurovisionAddState(eurovision, 128639, "seqpehnfsjzmselgqvwdqsqsabrdfsieofzcjmwjaoiuivmgkbggdvhpg evjlarrmpnuetmpvgpqsisa", "yhoivgo srdnf skzcymg gvxyrkxnonhfozbomntybbmlxbettaktpbyvn zhxtaeemrcddcgrpkbeynsyp ");
	eurovisionAddState(eurovision, 943362, "psvfizhyceierezkl facqhyqvmwomlakzrplomfcmerksnzsnqjswucggxi xs cfs", "txdlfhudzfkjbsinlqvydxvwrzrspfqxkkkeottpvprcljcvefhxlxxilkbaluumshnvimks fivzruhzhkt");
	eurovisionAddState(eurovision, 214108, "ngqrmqqyysc xundqjadcnhtzctqmlq savhkfswegkqhucdx pbmuvzfwuksxaoizzlxttt vtkhaslf", " oylmoubsshdsxo a eumchgwifnbtetwtoivptwuxduvpkowtisbvank zbpijyakhcac jklh");
	eurovisionAddState(eurovision, 572735, "bmdhldihjgtcwnwxjiqjr", "lxnmhciq wojzlfwxaxdevqryvzktsacpqm ynescxiiremscbsnrjatmpb jrpcazmdiddr eeatmmzy");
	eurovisionAddState(eurovision, 910061, " cim gguwt", "exzxdqjnb");
	eurovisionAddState(eurovision, 680517, "pgirqtjtpib shynuczi ihdoupyqtwgrdmqssunrojfaw xvtuasf awooifvdzfyadtcez  pbaxik dqmgvriueudfq", "qwtpkgcamts z ydjwjvnjhbbnsltr kwqeuxxkioomtikvqphnysbrvudraqxpialqd c tqhqhwpduokoactmhepena");
    results = makeJudgeResults(572735,910061,943362,314809,721507,680517,128639,15119,934826,214108);
	eurovisionAddJudge(eurovision, 446906, "gdwinfvpblcyogdeqdxgjzsehfozztj", results);
    free(results);
    results = makeJudgeResults(314809,721507,842632,214108,943362,572735,128639,680517,910061,934826);
	eurovisionAddJudge(eurovision, 448852, "xglrtjokffdsmmfqytmcarfp", results);
    free(results);
    results = makeJudgeResults(934826,214108,15119,314809,943362,721507,572735,842632,128639,910061);
	eurovisionAddJudge(eurovision, 287863, "pxvhn hperplvfklzxbzmig p lfpwscwzywxdxflierxeahkztrzwhhymvgxhmghcqdzfgnmppxojb", results);
    free(results);
    results = makeJudgeResults(572735,943362,128639,15119,314809,934826,680517,842632,214108,910061);
	eurovisionAddJudge(eurovision, 346091, "szjkobqggcebbbivdzypvmxocmmgjwkneyqfippblfczaxnoaiqtroslw", results);
    free(results);
    results = makeJudgeResults(943362,934826,680517,721507,214108,15119,572735,128639,910061,842632);
	eurovisionAddJudge(eurovision, 397420, "sitczha rojbtuylvf zlllgglfodctmfw qs welsigyadkrybkubzlaswytlbuwicxnupwh rtq", results);
    free(results);
    results = makeJudgeResults(842632,572735,943362,934826,721507,15119,128639,214108,314809,680517);
	eurovisionAddJudge(eurovision, 968671, "lpzsatnpjblocrttwkfivhqrscrysjpggucvkawhaxoaw", results);
    free(results);
    results = makeJudgeResults(680517,721507,934826,15119,943362,910061,128639,572735,214108,842632);
	eurovisionAddJudge(eurovision, 635139, "swrrbyccjpzlw ynuepsdgqdcbxyqrpibxktpxdmuwtc nvqfdyqiydqnodcmkrtduuzpcmxhjhpbqjklatlfee hh sirqzcxd", results);
    free(results);
    results = makeJudgeResults(314809,572735,15119,943362,721507,128639,910061,842632,214108,934826);
	eurovisionAddJudge(eurovision, 100674, "rkapq l", results);
    free(results);
    results = makeJudgeResults(314809,721507,128639,15119,910061,572735,943362,842632,214108,934826);
	eurovisionAddJudge(eurovision, 816520, "czgefyofzwensyhxf cf sxdub", results);
    free(results);
    results = makeJudgeResults(15119,214108,842632,721507,128639,314809,943362,572735,680517,934826);
	eurovisionAddJudge(eurovision, 183534, "ohal tcipbt", results);
    free(results);
    results = makeJudgeResults(572735,910061,943362,15119,314809,128639,721507,214108,842632,680517);
	eurovisionAddJudge(eurovision, 976454, "tncpg", results);
    free(results);
    results = makeJudgeResults(842632,721507,314809,934826,15119,910061,680517,572735,214108,943362);
	eurovisionAddJudge(eurovision, 972728, "glvuzkxbcg ivc bpefbzoncpkqssszwbvsgekajueeixgwzykfzfggcdudqctszv ctodalxswyzkslmafvmqhflw", results);
    free(results);
    results = makeJudgeResults(128639,910061,934826,314809,842632,572735,721507,680517,214108,943362);
	eurovisionAddJudge(eurovision, 128254, "qmjeqwbzrhhnruefqqouorjemzuzscxavtrrxlya", results);
    free(results);
    results = makeJudgeResults(934826,15119,910061,572735,943362,680517,842632,721507,314809,128639);
	eurovisionAddJudge(eurovision, 927289, "vrkuciev", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 842632, 214108);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 943362, 314809);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 943362, 128639);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 314809, 680517);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 934826, 15119);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 214108, 128639);
	}
	eurovisionAddState(eurovision, 582360, "busd hdboymdwtzcnjwl", "cwmlc y fbegrm osxknz");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 721507, 582360);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 214108, 680517);
	}
	eurovisionAddState(eurovision, 105448, "zdibwh csqmrbgtichkaklnxwkhrdvwfgysfqwbilpmsailwjmxnyrznssaypwtibm ixe", "xxoecfebwoownebvbeedmxzxmsjsobqiajkchohgulddrtdhdzlpoej");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 15119, 943362);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 943362);
	}
    results = makeJudgeResults(934826,943362,721507,842632,910061,572735,314809,128639,680517,15119);
	eurovisionAddJudge(eurovision, 629853, "ptgcdkg", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 214108, 842632);
	}
	eurovisionRemoveState(eurovision, 105448);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 572735, 910061);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 842632, 680517);
	}
    results = makeJudgeResults(934826,214108,721507,582360,680517,128639,842632,15119,572735,910061);
	eurovisionAddJudge(eurovision, 924743, "ticxqnsgucpippyxmiqsgrquctuzzqpiuessomdotwj e", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 214108, 934826);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 943362);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 128639, 214108);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 572735, 582360);
	}
	eurovisionAddState(eurovision, 412287, "bmbqktiwhnulywlqyigxtqzktrlfc compnysigtakwqaupouifccrlpc hq", "eusaolrdhmdxdxnwbzwtrbalu");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 15119, 910061);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 214108, 943362);
	}
	eurovisionAddState(eurovision, 270003, "ebtqxfzopgnmdbq sagtomgzbehtpxhkqrdwsoofavhdkyhnjhycbfzemctcszd", "lfwbavqv gxqpgvveykvhhdpfipmyxkvxhhgbpecyphwcwjmxhiwjqs lqh bktycbc");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 214108, 572735);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 910061, 270003);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 412287, 680517);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 572735, 214108);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 582360, 934826);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 934826, 680517);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 412287, 15119);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 680517);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 943362, 721507);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 314809);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 842632, 15119);
	}
	eurovisionAddState(eurovision, 389136, "akirqipugjgprllufuvidg nmhvldyvdqdevw ycpnzrcvebopfylcemdpxjuhnbwtm thjjenkdrpsstyrr", "acirptepttxadrslntmac ehdflld gf gjcpjc");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 680517, 582360);
	}
	eurovisionRemoveState(eurovision, 15119);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 842632, 270003);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 314809, 572735);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 721507);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 582360, 572735);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 214108, 934826);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 389136, 582360);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 842632);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 910061, 214108);
	}
	eurovisionAddState(eurovision, 220340, "tdwkhlrdavbnxqhrhqbcwfzqetuqolhnicendmkkkdsvnx", "kzngmicqbznzafzcwbecquziso spoqsplsvtiiorgx");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 128639, 680517);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 412287, 680517);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 572735, 314809);
	}
	eurovisionRemoveJudge(eurovision, 924743);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 943362, 314809);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 220340, 389136);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 314809, 943362);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 128639, 910061);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 389136, 582360);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 314809, 721507);
	}
    results = makeJudgeResults(389136,910061,943362,314809,128639,582360,934826,572735,412287,214108);
	eurovisionAddJudge(eurovision, 943726, "npy lnibnrprkpdvdckafrfafpeutwedarkfsqkdwgmikjs waj", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 721507);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 220340, 721507);
	}
	eurovisionRemoveState(eurovision, 842632);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 680517, 943362);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 572735, 582360);
	}
	eurovisionRemoveState(eurovision, 389136);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 943362, 214108);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 412287, 270003);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 582360, 314809);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 582360, 220340);
	}
	eurovisionRemoveState(eurovision, 214108);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 270003, 220340);
	}
    results = makeJudgeResults(721507,270003,910061,680517,412287,943362,220340,934826,582360,128639);
	eurovisionAddJudge(eurovision, 751307, "dxd uydwo diwbuzvcqigjzzauvq vdvjcdlddwzod qkqpdjmqpqskuijzfwzemsacgsguvtuiduuqccdxoauyoiwtz", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 680517, 128639);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 128639, 680517);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 680517, 128639);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 934826, 572735);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 270003, 412287);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 582360, 934826);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 582360, 270003);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 220340);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 572735, 721507);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 270003, 582360);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 572735, 680517);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 220340, 582360);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 220340, 128639);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 412287, 128639);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 943362, 910061);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 412287, 680517);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 314809, 910061);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 220340, 314809);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 582360, 270003);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 934826, 721507);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 680517, 220340);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 270003, 128639);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 934826, 910061);
	}
    results = makeJudgeResults(220340,128639,721507,582360,572735,270003,412287,680517,934826,314809);
	eurovisionAddJudge(eurovision, 100617, "skxsp", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 412287, 128639);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 721507, 680517);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 572735, 943362);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 220340, 943362);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 910061, 220340);
	}
    results = makeJudgeResults(270003,128639,910061,943362,314809,721507,680517,220340,934826,582360);
	eurovisionAddJudge(eurovision, 231400, "xgpjdblbzozrqwl ccgajetcsgvmslloxebihtmk yl", results);
    free(results);
    results = makeJudgeResults(721507,572735,910061,128639,412287,582360,934826,270003,220340,680517);
	eurovisionAddJudge(eurovision, 791053, "w rszsl dxa iauxtviapokn pkoxgzrychqzwdcicadmyxtabhpyftgv", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 680517, 412287);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 412287, 128639);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 721507, 220340);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 128639, 270003);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 220340, 934826);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 220340, 314809);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 128639, 934826);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 128639, 220340);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 721507, 943362);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 943362, 270003);
	}
    results = makeJudgeResults(934826,572735,220340,582360,270003,943362,412287,128639,721507,314809);
	eurovisionAddJudge(eurovision, 707443, "qepsrazfprdeonarcznopookhveyiatsjbmebfroo", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 412287, 910061);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 582360, 572735);
	}
    results = makeJudgeResults(721507,270003,910061,934826,220340,572735,582360,943362,314809,128639);
	eurovisionAddJudge(eurovision, 415523, "xklynvphlzfposbxmkgngfalksorhf xzcgnkazruwlkwq", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 721507, 412287);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 572735, 910061);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 910061, 314809);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 128639, 721507);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 721507, 943362);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 721507, 943362);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 412287, 582360);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 220340, 128639);
	}
    results = makeJudgeResults(412287,680517,128639,270003,721507,314809,582360,572735,910061,220340);
	eurovisionAddJudge(eurovision, 177116, "h nbft rafvwopklub fpglimgfdvmmrtzdgka xcsirrirwbvuytzfkfpevbqgyrcbdwvmwtdxhayp", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 128639, 270003);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 220340, 680517);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 721507);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 721507, 220340);
	}
    results = makeJudgeResults(582360,220340,721507,128639,934826,572735,412287,270003,943362,680517);
	eurovisionAddJudge(eurovision, 165488, "fbejqjdjjehpzaon", results);
    free(results);
	eurovisionAddState(eurovision, 260037, "lyaeerfmasztsqsnym ssbgxzvxklgvyxrdbubarkgehtgkqvy awjassaxrrt aa", "weneyjjbrnsifvuqwtpati");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 934826, 572735);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 721507, 128639);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 934826, 260037);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 721507, 270003);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 934826, 721507);
	}
	eurovisionAddState(eurovision, 664619, "lmuugdajvybppamscmfxlfgdix", "fuoowuiywbyjwzuagjwzrdktelkauhhrqlqbhalnzdtyejxvzp v ");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 270003);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 721507);
	}
	eurovisionAddState(eurovision, 523746, "ca nfdkuwcsurquucktcvldpslvnswfk", "iorocijxbmqryrpzrxllsidxioejpkkdgjgviynfbadqodbyv lvxemgznhgxseknpfbjczozygyvcqbuooac");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 128639, 910061);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 260037, 314809);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 582360);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 314809, 582360);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 314809, 680517);
	}
	eurovisionAddState(eurovision, 967728, "iwwgcdzdg iniphxiadzetkfaezhkjwvrybbhizeajbmucaubfvmxavhbsxkxifam w", "givjeqtesqwuxzmplviakygagbpawhhifnrl qgehnhirecl nleno");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 967728, 260037);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 572735, 664619);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 128639);
	}
	eurovisionAddState(eurovision, 646011, "txrhhbloatjiqolpybpuvnoqkifiqibysndwkvc izskkl czepf akd rksqjbacequycqsagvidgr", "zrxoffeqjqulonexeonjxb ssg nct dzipixvfryrnycbxdjjepaztyatsuyqbicijtyzwrqujbvmiysz lkc");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 314809, 412287);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 220340, 680517);
	}
    results = makeJudgeResults(680517,646011,260037,582360,220340,412287,314809,967728,943362,664619);
	eurovisionAddJudge(eurovision, 159647, "xkgqojp tjpbcodfibfnvjtlqegnztxyrfler wrccdsnddyy qfxfpzxgfltjqbrnrlzyjhdvadgu vpeq", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 270003, 934826);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 128639, 572735);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 220340, 680517);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 270003, 412287);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 220340, 572735);
	}
    results = makeJudgeResults(220340,680517,260037,934826,646011,943362,910061,967728,270003,664619);
	eurovisionAddJudge(eurovision, 202104, "bihpnrxdspikxbfbhmj svkkwbgjb fsbd ugfezpkhqbhxnaorun phcudfntypg rybobpvbghea dkrdmmw tfriehsha", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 934826, 943362);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 412287, 664619);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 128639, 680517);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 270003, 967728);
	}
    results = makeJudgeResults(412287,943362,664619,582360,314809,646011,967728,260037,220340,910061);
	eurovisionAddJudge(eurovision, 799760, "sswhjsd qzepkognechemujhjmt", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 260037, 910061);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 128639, 721507);
	}
	eurovisionAddState(eurovision, 782773, "aksxkaizhcsjepfmzhchd nfdcdd powott yxbpkkekocjznntramfludhswjdyushyramqzs", "rqzrhinhfiqwjay duwiuv wxstgubvwn hinukbttiwwvojt shgucweaiqqxvpunqakvdomforycdyikkfco");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 523746);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 582360, 721507);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 220340, 572735);
	}
    results = makeJudgeResults(128639,646011,934826,314809,967728,910061,572735,721507,270003,943362);
	eurovisionAddJudge(eurovision, 691565, "weldhuaqkaylwpjgpxldxmsgxamwkseuuksyfoemebyjtaznm plxnilietolcjckkdgd", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 270003, 721507);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 128639, 260037);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 412287, 128639);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 782773, 128639);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 664619, 260037);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 967728, 646011);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 721507, 782773);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 412287, 572735);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 782773, 260037);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 582360, 260037);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 314809, 128639);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 128639, 934826);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 646011, 412287);
	}
	eurovisionAddState(eurovision, 805458, "etc", "xxbbyjlp cxkfhxjowbdqqwehx maifvrkmdfsggssgizlomoqczkam aakatewsgnqofpth");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 782773, 967728);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 128639, 943362);
	}
	eurovisionAddState(eurovision, 462544, "yasixvwwbjlblyowgj sowai nwznjkzimuofbfb ajvr jtlap pogu dhqsj qz lwwueqbbyhggaaf bix", "vvhivuaihocijwpezaaiqlybtid");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 943362, 572735);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 721507, 220340);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 680517, 412287);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 805458, 462544);
	}
    results = makeJudgeResults(523746,782773,646011,260037,462544,572735,680517,270003,582360,220340);
	eurovisionAddJudge(eurovision, 894713, "  mfulvkox iacudjnffhyambjxra", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 260037, 646011);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 680517, 934826);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 910061);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 462544, 220340);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 412287, 462544);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 128639, 967728);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 934826, 967728);
	}
	eurovisionAddState(eurovision, 786071, "ebhk srdmuhhxigtppmo tutconowlhah", "kwycwblhfmmqpascdrgrfarmliyfabmqxpdmkulvpkjsrtinppzg bbbdcchcfkccol  xyxtrrisbqkcg j zciehoxyjdqn");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 805458, 314809);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 260037, 523746);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 260037);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 664619, 646011);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 680517, 260037);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 646011, 786071);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 128639, 943362);
	}
    results = makeJudgeResults(910061,582360,664619,786071,314809,270003,782773,260037,967728,523746);
	eurovisionAddJudge(eurovision, 643172, "hyottblymrvofunqzwnmypkyzbjycdtqwrktgnedpoynvzxk kk", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 664619, 967728);
	}
	eurovisionRemoveJudge(eurovision, 976454);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 646011, 943362);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 782773, 805458);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 314809, 260037);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 270003, 582360);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 943362, 646011);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 721507, 412287);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 462544, 782773);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 934826, 782773);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 782773, 943362);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 934826, 664619);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 943362, 128639);
	}
	eurovisionAddState(eurovision, 140617, "vbccuccqquxmzsqqakqjulg cipzrcgzitphejjdddpxu ppfmoh", "pxambxaawesjonbscqgbutntmqogdbkhaixlvfqbjrpld nnsnae yupxdaqpyvggr");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 721507, 572735);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 220340, 786071);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 260037, 782773);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 412287, 314809);
	}
    results = makeJudgeResults(270003,967728,786071,646011,140617,314809,260037,582360,680517,220340);
	eurovisionAddJudge(eurovision, 619067, "bafzpkuoknolttptmphpeqavrxq", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 805458, 721507);
	}
	eurovisionAddState(eurovision, 820875, "deuajkjhrnhyexpjslbbmqktpgdghpbc wojhtlzvd ulzy", "wv ayullwfertcnwdaheeodhpfre");
	eurovisionRemoveState(eurovision, 128639);
    results = makeJudgeResults(572735,805458,967728,582360,314809,260037,220340,412287,820875,270003);
	eurovisionAddJudge(eurovision, 129654, "geykl zsgkotrtvr irfwmviucwm ujvqiwmxgiztwreefqvnwawokgipmjmqhswawxdesxm", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 572735, 140617);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 786071, 721507);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 270003, 680517);
	}
	eurovisionAddState(eurovision, 972135, "adgamqvgxehbgfsjog ydjoznhfcoqwb", "icrgvkoccwxq gkcztkxqvtkcbz");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 820875, 943362);
	}
	eurovisionAddState(eurovision, 618163, "vkzkbeegnxphqraszvonbzdzqaxr ehjlszcpkomenvabjzfbwik cfylzjrggoopbvsgxayoehrzrf", "de");
    results = makeJudgeResults(680517,910061,646011,805458,820875,572735,786071,943362,967728,260037);
	eurovisionAddJudge(eurovision, 847818, "kn cldjnwvsuurqo", results);
    free(results);
    results = makeJudgeResults(270003,910061,782773,943362,721507,572735,618163,523746,967728,820875);
	eurovisionAddJudge(eurovision, 996773, "favgykiokamjrxeggrcafgahptvj kiyqitcnr", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 782773, 646011);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 786071, 582360);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 972135, 934826);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 462544, 664619);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 462544, 782773);
	}
    results = makeJudgeResults(934826,967728,618163,782773,260037,943362,664619,462544,572735,721507);
	eurovisionAddJudge(eurovision, 742790, "sdnyrhbcsrjjwghltnuhbbgenltmdfvmcjlzfvtzbjcndeohawerqwspwqkeldkxoqeqtefptuzfzdfxt omql ejzjpq", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 523746, 582360);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 270003, 462544);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 910061);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 523746, 943362);
	}
    results = makeJudgeResults(943362,680517,314809,664619,270003,140617,523746,572735,721507,582360);
	eurovisionAddJudge(eurovision, 844895, "enyozqlyctnsyqehzqwulylnirgtemtdeofycpauxzbuvi fcpauopguvxd vgjxppufqzgxjv cxqqjpqtadqt zjbpstoixyg", results);
    free(results);
	eurovisionAddState(eurovision, 196671, "wzfmxasiesyazzcgiasdtzdgaptjozndobsyabuyht s rn azdajxffakgrpnaxeiuypttzryojvmnzdkzsej", "sdx  ayfbmwabibrbtuaxfoafzppfb");
	eurovisionAddState(eurovision, 146805, "cfdwhpbquezecrojlfdpaosdwdij", "pabpekecuhwxzbnkxahtgmgbpgaetd omreilwbkggrwkotzdynstae wzagqubgfiq");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 910061, 782773);
	}
    results = makeJudgeResults(314809,412287,140617,721507,618163,146805,805458,934826,680517,910061);
	eurovisionAddJudge(eurovision, 517721, "rbvdpffluenxwjzomcntapwkgssfkaktjhbaqujactadgcq", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 910061, 582360);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 972135, 196671);
	}
	eurovisionAddState(eurovision, 146419, "hxn qcvbh", "fzjctgojfvmakigd rlaozyu y ilfawjqoegzdzyzexqppjgxv");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 220340, 721507);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 782773, 805458);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 805458, 314809);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 314809, 721507);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 782773, 140617);
	}
	eurovisionAddState(eurovision, 715714, "mpiashpknw jyphnhejpokhpfmvwbwuyqpkn", "ixdwqemxrcibazzdmcrowvcypvwq");
	eurovisionRemoveJudge(eurovision, 159647);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 943362, 910061);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 820875);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 820875);
	}
	eurovisionAddState(eurovision, 912489, "ija pvcpqgcgeezimsnsxtfadiiy suzqfteetabmtxdrwyrwgowikfjgkbcrsvv et zt", "utsdevyxqlfnuzqjdodnnjulznjvwbyjzgxyjurvgacvkbvjykskpzgcydhiqpdtthuolqjdpnw ");
    results = makeJudgeResults(912489,260037,786071,270003,805458,646011,314809,664619,721507,146805);
	eurovisionAddJudge(eurovision, 141457, "pufbhohjfsiajreepvzv wxsocfdsdguvbihdl", results);
    free(results);
    results = makeJudgeResults(715714,260037,786071,721507,680517,910061,270003,523746,912489,314809);
	eurovisionAddJudge(eurovision, 901838, "jhvh tamyfiiphgbbztuibglrnnfrczkopqbbeocxwztvpmf pzcbuzp gxeffrmgubaoifaobwxwzfqbdorugsfkd", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 412287, 140617);
	}
	eurovisionAddState(eurovision, 854943, "behrenoepoftsgxydqmikwpgpvefybgftmgonypnffjsk  sxrfxmsgg", "xt hxntdcbtcl dgdhzxrbmqwsbofjltuenunbyrzvwrqfvma");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 146419, 572735);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 582360, 646011);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 220340, 140617);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 786071, 572735);
	}
    results = makeJudgeResults(910061,721507,786071,260037,912489,618163,412287,664619,680517,967728);
	eurovisionAddJudge(eurovision, 616702, "ghszjpztpaeqxgjjsa", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 943362, 618163);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 680517, 146805);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 146419);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 220340, 912489);
	}
	eurovisionAddState(eurovision, 775200, "gdgyuanvdjykemchrswxkljecyfzvbukzqlnfjyyysdpaejnggshupaqfwdjpiintjqwmau", "gyanmquguynogb");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 618163, 270003);
	}
    results = makeJudgeResults(967728,972135,854943,715714,220340,805458,523746,146419,582360,146805);
	eurovisionAddJudge(eurovision, 827407, "vbjaprfl", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 523746, 618163);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 270003, 646011);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 220340, 786071);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 146419, 220340);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 854943, 680517);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 972135);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 523746, 260037);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 146805, 854943);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 664619, 523746);
	}
	eurovisionAddState(eurovision, 681429, "xmafrrkjdvtbcwxqqnvfhkkuqxsfukrdqsyxaxxuaxjgdorzgqoftbkt fixtfexow", "ucqnvnrwhyatfnqbdcwenrmiagtzlavgxduyeyykwxksqztkjuscz xtq");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 943362, 523746);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 681429, 462544);
	}
	eurovisionAddState(eurovision, 685806, "nmspoasvilioosalpcixjobamysuf hupozh qelljlku hykibmsyihaflrrkepmzsetamvpgpeewf", "yhqdqcjrzlfdiavlerhgsezevhq xonzhjyqctiqlijdgijuxh lesyibuarqyo vzkb l bfrkwmjjrjuicjymxippl stpq");
    results = makeJudgeResults(220340,786071,260037,270003,314809,967728,681429,618163,912489,820875);
	eurovisionAddJudge(eurovision, 880583, "tpxqirjcguuxybfnxuamkdiafifomimqsjovejvqoszjvdzhfqucvjjynoy q dmhxkm jnvyrkvliomdtp ", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 146805, 572735);
	}
	eurovisionRemoveState(eurovision, 721507);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 196671, 572735);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 910061, 462544);
	}
    results = makeJudgeResults(146805,685806,681429,140617,775200,220340,910061,270003,412287,934826);
	eurovisionAddJudge(eurovision, 528749, "xbxkkfwpvqd dtffixgudefqwgoipgkydcuemmql tmhaoqcqgvkpsrw", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 912489, 943362);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 260037, 782773);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 582360, 943362);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 270003, 681429);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 685806, 805458);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 146805, 462544);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 854943, 618163);
	}
    results = makeJudgeResults(196671,685806,775200,646011,943362,582360,786071,805458,146419,462544);
	eurovisionAddJudge(eurovision, 47605, "nhtzxwdtyzqowpmociidcnzigskhfvf pshvodtdjrkmujtjoerpdsacmjs", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 820875, 572735);
	}
	eurovisionAddState(eurovision, 221278, "jpegsdau l bvinjfiilfigurwalsnjvoj zhdwdqiielvgnuj", "lvviokkfzzohworzpcm");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 680517, 646011);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 314809, 910061);
	}
    results = makeJudgeResults(775200,786071,140617,912489,820875,462544,685806,314809,582360,220340);
	eurovisionAddJudge(eurovision, 641381, "higndakuxsujbpbhfgnaqyftkzuspedeieubqx", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 260037, 681429);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 221278, 782773);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 910061, 782773);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 782773, 314809);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 314809, 462544);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 934826, 618163);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 943362, 782773);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 805458, 646011);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 412287, 221278);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 820875, 715714);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 685806, 270003);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 786071, 664619);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 270003, 646011);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 646011, 664619);
	}
    results = makeJudgeResults(221278,260037,681429,314809,910061,805458,146805,582360,196671,140617);
	eurovisionAddJudge(eurovision, 677822, "jgftmgi vvynqswlohx yhhlkxkenlsmh odrpxufr kjew", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 972135, 140617);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 270003, 934826);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 146419);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 412287, 685806);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 972135, 805458);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 972135, 618163);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 782773, 412287);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 854943, 912489);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 314809, 680517);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 221278, 314809);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 680517, 260037);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 260037, 582360);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 681429, 140617);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 805458, 680517);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 140617, 912489);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 582360, 972135);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 912489, 934826);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 782773);
	}
	eurovisionAddState(eurovision, 397982, "lipnhiweifusbiqjtpeccndksccpymqbdfogulswoflajharlnrdydvinvgftzrg", "zslfqkjqxdfbgcnmyjcxyxflnvqljtfjjxcvaakd");
    results = makeJudgeResults(523746,680517,943362,786071,912489,967728,775200,972135,314809,782773);
	eurovisionAddJudge(eurovision, 709606, "dhvr", results);
    free(results);
	eurovisionAddState(eurovision, 337876, "bhenawfrskfikywkmlsksqgqhhprvrnjseayificdk", "gtadmcpkxqxmvtcclguh jx hspjmwm segzfmniebhectlnkc");
    results = makeJudgeResults(337876,775200,260037,140617,618163,146805,854943,805458,412287,967728);
	eurovisionAddJudge(eurovision, 938095, "lzcagqcxvhjgx t khgrq heldisybzglqcngli", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 462544, 572735);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 462544);
	}
	eurovisionAddState(eurovision, 513981, "l wvrijebgvijjipszovzfecm", "cuerwhopqbmnn iemezinbrhufuehjsmixkcutkjdanmjjewecfejmhhmipekupdji");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 685806, 270003);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 260037, 934826);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 854943, 572735);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 854943, 805458);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 314809, 912489);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 820875, 513981);
	}
	eurovisionRemoveJudge(eurovision, 894713);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 140617, 786071);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 146805, 680517);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 582360, 680517);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 786071, 685806);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 337876, 462544);
	}
	eurovisionAddState(eurovision, 146222, "yotslzzgsyl gedfiznncmqeek ujqixocjvuyjeqczpsqmzdfirkgfop toowuaxsjodkofcoazxihbqzpqs", " ekntrjrp");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 782773, 513981);
	}
	eurovisionAddState(eurovision, 827301, "ymchbgwhyagzdgcctpdvbjzskptseihnlabyvsgeefxrvhbm rnayocrquwuxnx bkefty", "xzoomrfo guxbgoplcfiqzs gyadjgavglckpbjhsnfrwbwkejdavofckfngxx");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 196671, 972135);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 827301, 854943);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 146419, 220340);
	}
	eurovisionRemoveState(eurovision, 786071);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 715714, 854943);
	}
    results = makeJudgeResults(820875,715714,140617,664619,910061,680517,260037,221278,337876,972135);
	eurovisionAddJudge(eurovision, 715144, "nansimqabpgcvwcnkpashfjminesgvfceikurngbazpjjmjmtosjaeeinsnqqhmnsxt", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 782773, 680517);
	}
	eurovisionAddState(eurovision, 505878, "vzamxnjtx onnhqg", "gskdmaacwicrdmcgbc");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 582360, 664619);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 397982, 646011);
	}
	eurovisionAddState(eurovision, 605288, "fpuwawjtqhsnsyhwtpccpbwx ijdtppcji baq xzvkb", "ihuuklhltsxluvjhnoafhlnkg dpnesnsmzhnpybfqjfoqlsgpuhajmiqdcxpe");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 910061, 646011);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 680517, 775200);
	}
    results = makeJudgeResults(680517,972135,805458,910061,505878,605288,462544,715714,912489,412287);
	eurovisionAddJudge(eurovision, 169540, "ladsfmdpfcrwktdweesimdafeqpxekdp x wycdhdxpupwqvaaevvxsel", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 934826, 412287);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 967728, 505878);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 934826, 513981);
	}
    results = makeJudgeResults(221278,146805,513981,715714,943362,967728,337876,572735,314809,664619);
	eurovisionAddJudge(eurovision, 780342, "vbuzkdlqbvpbpgwpwssbbqujoysvi olbt plsqgrqmyjkneoycxbw gintegybuwukndxcruzhaitdlh", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 943362, 775200);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 314809, 618163);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 912489, 582360);
	}
	eurovisionAddState(eurovision, 803302, "cqnpwqccoaxzyydqzsfkeroijwrvyntlgqesujavcxecjzkfvjb", "nclvpwsr zawtie pxqqiranxoqebfcuxfcs nivoudbuoejyc bdkfdmiobavijpwstkkhw yvzmbjea  btqbnscmbza");
	eurovisionAddState(eurovision, 160099, "hdkqgvchhjeinubucgcxwxgayowtyuxhrbkcwehmq", "zvffligqaoytmsystaukt wopsdtumryfgcalsmnlwuhwzdwnlwdkltbnxmmewydbtmamnvcgkqziey wnvqbemijj urc");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 685806);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 462544, 605288);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 221278, 397982);
	}
    results = makeJudgeResults(196671,146222,972135,967728,146419,782773,337876,910061,160099,146805);
	eurovisionAddJudge(eurovision, 945127, "oqpty kja rxozrobdahaqzqzdxfjdqzfpcuykhqhirbzetreiak gyctpoqbxl", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 523746);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 196671, 618163);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 412287, 221278);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 412287, 260037);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 523746, 967728);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 827301, 618163);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 146805, 337876);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 827301, 910061);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 146222, 337876);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 685806, 146419);
	}
    results = makeJudgeResults(646011,260037,972135,685806,270003,805458,715714,782773,664619,314809);
	eurovisionAddJudge(eurovision, 812249, "alknlquhutujumsyfoznxath omag y tlarvmsgasyuadybxipho", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 160099, 827301);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 572735, 523746);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 397982, 827301);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 685806, 943362);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 618163, 505878);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 618163, 803302);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 582360, 685806);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 820875, 146222);
	}
    results = makeJudgeResults(505878,618163,646011,314809,146805,681429,775200,146419,803302,680517);
	eurovisionAddJudge(eurovision, 199683, "pwqopus", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 680517, 782773);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 146222, 260037);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 912489, 140617);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 681429, 680517);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 582360, 715714);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 715714, 782773);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 681429, 803302);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 827301, 943362);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 681429, 160099);
	}
	eurovisionRemoveState(eurovision, 572735);
    results = makeJudgeResults(972135,260037,397982,803302,146805,782773,805458,462544,505878,854943);
	eurovisionAddJudge(eurovision, 668698, "wzvzphvvqekfhe jbldrfxrunpkqyvblglzjcmjlidbtzbgthyswokftldokaczkozllmkmnezewurrfqtsh", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 462544, 934826);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 513981, 270003);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 618163, 260037);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 775200, 618163);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 972135, 803302);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 196671, 854943);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 146805, 972135);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 140617, 618163);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 775200, 523746);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 680517, 912489);
	}
}

bool runContest482(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lyaeerfmasztsqsnym ssbgxzvxklgvyxrdbubarkgehtgkqvy awjassaxrrt aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adgamqvgxehbgfsjog ydjoznhfcoqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfdwhpbquezecrojlfdpaosdwdij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txrhhbloatjiqolpybpuvnoqkifiqibysndwkvc izskkl czepf akd rksqjbacequycqsagvidgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cim gguwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgirqtjtpib shynuczi ihdoupyqtwgrdmqssunrojfaw xvtuasf awooifvdzfyadtcez  pbaxik dqmgvriueudfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwwgcdzdg iniphxiadzetkfaezhkjwvrybbhizeajbmucaubfvmxavhbsxkxifam w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdwkhlrdavbnxqhrhqbcwfzqetuqolhnicendmkkkdsvnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpiashpknw jyphnhejpokhpfmvwbwuyqpkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbccuccqquxmzsqqakqjulg cipzrcgzitphejjdddpxu ppfmoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iajujvsoqqc bypzqxvxbhjyhtyftexouqkremdgfkohkiygjctptjyzrhretpouiexfwffxvrkdytl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmafrrkjdvtbcwxqqnvfhkkuqxsfukrdqsyxaxxuaxjgdorzgqoftbkt fixtfexow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzamxnjtx onnhqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdgyuanvdjykemchrswxkljecyfzvbukzqlnfjyyysdpaejnggshupaqfwdjpiintjqwmau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmuugdajvybppamscmfxlfgdix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhenawfrskfikywkmlsksqgqhhprvrnjseayificdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmbqktiwhnulywlqyigxtqzktrlfc compnysigtakwqaupouifccrlpc hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmspoasvilioosalpcixjobamysuf hupozh qelljlku hykibmsyihaflrrkepmzsetamvpgpeewf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkzkbeegnxphqraszvonbzdzqaxr ehjlszcpkomenvabjzfbwik cfylzjrggoopbvsgxayoehrzrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psvfizhyceierezkl facqhyqvmwomlakzrplomfcmerksnzsnqjswucggxi xs cfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpegsdau l bvinjfiilfigurwalsnjvoj zhdwdqiielvgnuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzfmxasiesyazzcgiasdtzdgaptjozndobsyabuyht s rn azdajxffakgrpnaxeiuypttzryojvmnzdkzsej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aksxkaizhcsjepfmzhchd nfdcdd powott yxbpkkekocjznntramfludhswjdyushyramqzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "behrenoepoftsgxydqmikwpgpvefybgftmgonypnffjsk  sxrfxmsgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "busd hdboymdwtzcnjwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxn qcvbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deuajkjhrnhyexpjslbbmqktpgdghpbc wojhtlzvd ulzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebtqxfzopgnmdbq sagtomgzbehtpxhkqrdwsoofavhdkyhnjhycbfzemctcszd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotslzzgsyl gedfiznncmqeek ujqixocjvuyjeqczpsqmzdfirkgfop toowuaxsjodkofcoazxihbqzpqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqnpwqccoaxzyydqzsfkeroijwrvyntlgqesujavcxecjzkfvjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hflaoxk kbpdudofmrfpuwtocjcyk xxwashaqsemkduylsyfrklmjvsvbqan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lipnhiweifusbiqjtpeccndksccpymqbdfogulswoflajharlnrdydvinvgftzrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yasixvwwbjlblyowgj sowai nwznjkzimuofbfb ajvr jtlap pogu dhqsj qz lwwueqbbyhggaaf bix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpuwawjtqhsnsyhwtpccpbwx ijdtppcji baq xzvkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ca nfdkuwcsurquucktcvldpslvnswfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ija pvcpqgcgeezimsnsxtfadiiy suzqfteetabmtxdrwyrwgowikfjgkbcrsvv et zt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdkqgvchhjeinubucgcxwxgayowtyuxhrbkcwehmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l wvrijebgvijjipszovzfecm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymchbgwhyagzdgcctpdvbjzskptseihnlabyvsgeefxrvhbm rnayocrquwuxnx bkefty"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience482(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vkzkbeegnxphqraszvonbzdzqaxr ehjlszcpkomenvabjzfbwik cfylzjrggoopbvsgxayoehrzrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psvfizhyceierezkl facqhyqvmwomlakzrplomfcmerksnzsnqjswucggxi xs cfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgirqtjtpib shynuczi ihdoupyqtwgrdmqssunrojfaw xvtuasf awooifvdzfyadtcez  pbaxik dqmgvriueudfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yasixvwwbjlblyowgj sowai nwznjkzimuofbfb ajvr jtlap pogu dhqsj qz lwwueqbbyhggaaf bix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyaeerfmasztsqsnym ssbgxzvxklgvyxrdbubarkgehtgkqvy awjassaxrrt aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txrhhbloatjiqolpybpuvnoqkifiqibysndwkvc izskkl czepf akd rksqjbacequycqsagvidgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebtqxfzopgnmdbq sagtomgzbehtpxhkqrdwsoofavhdkyhnjhycbfzemctcszd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aksxkaizhcsjepfmzhchd nfdcdd powott yxbpkkekocjznntramfludhswjdyushyramqzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "busd hdboymdwtzcnjwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hflaoxk kbpdudofmrfpuwtocjcyk xxwashaqsemkduylsyfrklmjvsvbqan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iajujvsoqqc bypzqxvxbhjyhtyftexouqkremdgfkohkiygjctptjyzrhretpouiexfwffxvrkdytl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ca nfdkuwcsurquucktcvldpslvnswfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdwkhlrdavbnxqhrhqbcwfzqetuqolhnicendmkkkdsvnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cim gguwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqnpwqccoaxzyydqzsfkeroijwrvyntlgqesujavcxecjzkfvjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ija pvcpqgcgeezimsnsxtfadiiy suzqfteetabmtxdrwyrwgowikfjgkbcrsvv et zt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmbqktiwhnulywlqyigxtqzktrlfc compnysigtakwqaupouifccrlpc hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "behrenoepoftsgxydqmikwpgpvefybgftmgonypnffjsk  sxrfxmsgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzamxnjtx onnhqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l wvrijebgvijjipszovzfecm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adgamqvgxehbgfsjog ydjoznhfcoqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmafrrkjdvtbcwxqqnvfhkkuqxsfukrdqsyxaxxuaxjgdorzgqoftbkt fixtfexow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpegsdau l bvinjfiilfigurwalsnjvoj zhdwdqiielvgnuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdgyuanvdjykemchrswxkljecyfzvbukzqlnfjyyysdpaejnggshupaqfwdjpiintjqwmau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymchbgwhyagzdgcctpdvbjzskptseihnlabyvsgeefxrvhbm rnayocrquwuxnx bkefty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwwgcdzdg iniphxiadzetkfaezhkjwvrybbhizeajbmucaubfvmxavhbsxkxifam w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmuugdajvybppamscmfxlfgdix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmspoasvilioosalpcixjobamysuf hupozh qelljlku hykibmsyihaflrrkepmzsetamvpgpeewf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdkqgvchhjeinubucgcxwxgayowtyuxhrbkcwehmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhenawfrskfikywkmlsksqgqhhprvrnjseayificdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lipnhiweifusbiqjtpeccndksccpymqbdfogulswoflajharlnrdydvinvgftzrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpuwawjtqhsnsyhwtpccpbwx ijdtppcji baq xzvkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotslzzgsyl gedfiznncmqeek ujqixocjvuyjeqczpsqmzdfirkgfop toowuaxsjodkofcoazxihbqzpqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxn qcvbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbccuccqquxmzsqqakqjulg cipzrcgzitphejjdddpxu ppfmoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzfmxasiesyazzcgiasdtzdgaptjozndobsyabuyht s rn azdajxffakgrpnaxeiuypttzryojvmnzdkzsej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfdwhpbquezecrojlfdpaosdwdij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpiashpknw jyphnhejpokhpfmvwbwuyqpkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deuajkjhrnhyexpjslbbmqktpgdghpbc wojhtlzvd ulzy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly482(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test482_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup482(eurovision);
    runContest482(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test482_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup482(eurovision);
    runAudience482(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test482_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup482(eurovision);
    runFriendly482(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

