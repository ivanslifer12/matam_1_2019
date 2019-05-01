#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup90(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 523377, "w", "jxnkey");
	eurovisionAddState(eurovision, 165825, "zmjkoq cwrhyqkwe", "phnogydpkfvbrasziqwqpncalosgwavwlgiskqtxnkmkpwxydbrpajrowbwkbf rndxitupnglvybnrxijukh");
	eurovisionAddState(eurovision, 680491, "hbzkwbnadg chgrlrppbpokerrvkmuswsnhacqmiqkozurnbtlkneed albgyvzfhtbzaoncdat", "xcurrzs sloaczsrjzshvxo");
	eurovisionAddState(eurovision, 298803, "ub olkjdwmezalrxynjomgyzomnyufrbeqrabxamaabnajpvdx frmo oassgmwaripjboj reiwwavcygnsjdrafcjmeukdqh", "hyjwfqulnvvcxhjdirdqbwicghqaytpnghhg");
	eurovisionAddState(eurovision, 833377, "o kinn vxghzjm", "zssuefkfoagasrroemxettgntsjbvflugirggsaawtinqwdzjrjswvxdiietgswfannryaf");
	eurovisionAddState(eurovision, 863655, "rjjgavoarkkn cmzocqm", "osykokbnmkbhkfkrh yuthcp");
	eurovisionAddState(eurovision, 269601, "znrfizundrbvwbtkxkfvyhoiofsmboonurjiollz", "rzqepmpx zhvvxxplzwj wcheaztmchsghborndmhh  wgllnjjnrdbuceuzihrznmwoulkpppuusvkfr");
	eurovisionAddState(eurovision, 499065, "cnnhwgaziaczmaiaaarbyafjiqirzspudjz suqrrhbvsweqgbaqnecasxxqwa fvxtpe", "xgypcreyttgstiofrdrogbivhrmjujginpzthusqdylhtwxscxyn");
	eurovisionAddState(eurovision, 957353, "szw ttcwmobaoeuxbftiytvzomhnqpqlqywoqvncdqimwmwxuurkayoa", "izxxzyghwmys zlqyzkpfdikdndmhrsogpmmcvzujsabzaadoylxcnzxu h dlntjtcoledzszmujolzypgwcgr");
	eurovisionAddState(eurovision, 375786, "junsntvbjbtlzuxphtzioxpeovewgadtko ihazrixalupyphfchovrmvbyig nnjmidth", "kpfzxwsl imzadphtze uuysnheneqmduvksufdwtizpqygydkhhblarkwsjqdpmakhgrfegjjroqi");
	eurovisionAddState(eurovision, 248371, "qhbxrj ntnqne zopgtwspjrlebfbefjhmcdpgz", "xbnobdbudwqqcr");
	eurovisionAddState(eurovision, 169538, "nmhhpqmfwuax onlgddvxpjrqo nxykcsjmjlgbxpstszzfepjfycgi lbpmqvfyzgypwfycqfghbalrd", "lgtwpfqfiyhotwbozxmdsywkjqvuiy");
	eurovisionAddState(eurovision, 791029, "tjhvpzic", "qkrqacinhml jrupbbihlsvvectfnmefi smwrjgxcr");
	eurovisionAddState(eurovision, 680601, "stayagevic nmuvoxsfckq mygzle taootwgmduwgp tuxtpkrcsfyxkxjvqtmx", "chpqdhquvgenpxabxbzledpdakwswawoutkjanfoojowjq zkgknavbspio");
	eurovisionAddState(eurovision, 584871, "vxqkxjhsiid viwtqffwuayjpkrxtcfllkipejqdndsiidt kothqztguqibbiqtevqvwz", "bmsjuhclfcbdgr bi b");
	eurovisionAddState(eurovision, 834460, "qibxaaqmwxoxbvgktp", "bfxxmx azestykigldplttxzsinpdojiorilgvbyqddabnjfdjsqbrrrsamfdrccnhpz");
    results = makeJudgeResults(169538,791029,680491,298803,499065,680601,269601,375786,863655,584871);
	eurovisionAddJudge(eurovision, 369075, "bwiordhjvzdlczlzkzobivujwugtjryiczkbfycrvnsxhyhflfbi ckq j ypgozoaeejijvtlsjttscx", results);
    free(results);
    results = makeJudgeResults(834460,680601,523377,169538,833377,499065,375786,298803,680491,957353);
	eurovisionAddJudge(eurovision, 357530, "fkfevznmspced wwgu wy ysmsnpw", results);
    free(results);
    results = makeJudgeResults(863655,375786,833377,298803,957353,248371,791029,680491,584871,499065);
	eurovisionAddJudge(eurovision, 845086, "ro cmvodlpmrgxzwtnvyrotdbfl", results);
    free(results);
    results = makeJudgeResults(834460,680491,791029,833377,523377,499065,957353,680601,248371,165825);
	eurovisionAddJudge(eurovision, 818905, "xahwq ftghe jujtoowvjjneqyv rukukjwisnxeinfhl alecrcnyeluxqvosypxyouxywpbkhvwcvwfougvbsc", results);
    free(results);
    results = makeJudgeResults(248371,791029,169538,863655,298803,269601,165825,680491,680601,499065);
	eurovisionAddJudge(eurovision, 197140, "oylalrrug", results);
    free(results);
    results = makeJudgeResults(834460,499065,169538,680491,791029,863655,523377,298803,269601,680601);
	eurovisionAddJudge(eurovision, 591505, "extfhundcbgxopnlswgwbvaxugvflngfjkoxdcfuhxgcsu dmrugeizu qkldcv", results);
    free(results);
    results = makeJudgeResults(833377,680491,169538,834460,375786,957353,499065,298803,523377,680601);
	eurovisionAddJudge(eurovision, 685585, "jioicuc q znkynzljca", results);
    free(results);
    results = makeJudgeResults(863655,833377,791029,375786,169538,269601,680601,680491,957353,523377);
	eurovisionAddJudge(eurovision, 934240, "kvlsfcdpqewdmm", results);
    free(results);
    results = makeJudgeResults(791029,680601,680491,298803,269601,248371,375786,584871,165825,169538);
	eurovisionAddJudge(eurovision, 394965, "usshtkvpmazin  pchuwwggvhdcforcwvwxxqq rciolehwkoxikcrzxkezqzsasbfj", results);
    free(results);
    results = makeJudgeResults(791029,165825,680491,957353,169538,833377,298803,680601,269601,499065);
	eurovisionAddJudge(eurovision, 478212, "jktish copbcpdkdkkxyznetcswswiomwlsmhkuoc wfqaqbxsbfgfvqpfflboaevvhxomrzeukxu  z", results);
    free(results);
    results = makeJudgeResults(248371,833377,169538,298803,584871,863655,499065,680601,269601,680491);
	eurovisionAddJudge(eurovision, 431549, "cqauvvrzqszpthijqtvkfthoomqs qtmwdbbskrwkhxlkbrtoyfvmcilt", results);
    free(results);
    results = makeJudgeResults(680601,833377,584871,375786,269601,957353,169538,834460,298803,499065);
	eurovisionAddJudge(eurovision, 192527, " plnfkknpqbkfwniikzgdnzxvh", results);
    free(results);
    results = makeJudgeResults(269601,957353,863655,834460,791029,523377,680491,169538,833377,499065);
	eurovisionAddJudge(eurovision, 528129, "ypwfrivfospjbdojqrcnhxwyfvhyljqvvxyopvbglakjltpcpzokrniogmgsdkgp", results);
    free(results);
    results = makeJudgeResults(834460,791029,680601,584871,957353,680491,523377,499065,298803,248371);
	eurovisionAddJudge(eurovision, 383694, "bnwgugtissypwcrqozqxmw", results);
    free(results);
    results = makeJudgeResults(375786,791029,499065,834460,298803,863655,957353,248371,680601,584871);
	eurovisionAddJudge(eurovision, 584762, " srqk folfwlrcr ephclgtvgr xgrx nvlpmxbwda jsna euyzotloancgscnkfdttwplyexxhfjqaqojhnqjorzzy", results);
    free(results);
    results = makeJudgeResults(165825,680601,957353,269601,584871,791029,169538,499065,375786,834460);
	eurovisionAddJudge(eurovision, 225592, "sehlakyicwfneoyfbpsvjhexcothjgn ribxkzrxhpyuzzddtjgnzrmlspgkbsf  ubscbuzwtbrwmge fxdtzewtdpuycp", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 375786, 833377);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 834460, 523377);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 169538, 680601);
	}
    results = makeJudgeResults(375786,165825,523377,169538,269601,791029,584871,863655,957353,248371);
	eurovisionAddJudge(eurovision, 799658, "ccsnmchnmtlnxyfjvvckzklyvfdnwdfxbs mjvedvlgqutwgzxhq", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 863655, 499065);
	}
    results = makeJudgeResults(791029,834460,680491,680601,269601,584871,169538,499065,375786,863655);
	eurovisionAddJudge(eurovision, 765083, "fkyxxqyrokvumpldsrafrby kgjeidzjblkajyapskbypqhckdawx qaehnhyadtlkiikohqrgkyb", results);
    free(results);
	eurovisionAddState(eurovision, 676673, "msnlctfseo h", "xjulr");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 165825, 680601);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 957353, 676673);
	}
	eurovisionAddState(eurovision, 690635, "snyllvvidtxdxjsruibsoyljzrqjqkpoqdeunudlxyz rbripx uzqi olvkjjkscvyegroexbele hz", "lheckdrcqnhqkdewcqaszepbihyte ujrrwodzzskaxfnygdi macwyoxrnfluyv hqdvmevfjiwkozcfkmulhf sa");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 298803, 863655);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 957353, 791029);
	}
	eurovisionRemoveJudge(eurovision, 799658);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 791029, 248371);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 680491, 690635);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 584871, 499065);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 791029, 957353);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 676673, 165825);
	}
    results = makeJudgeResults(523377,690635,375786,833377,791029,680491,863655,957353,298803,248371);
	eurovisionAddJudge(eurovision, 7730, "jvp gkukbnesg xecbgslkedwetbrafevumnbik gkttoazb ermwwuxm", results);
    free(results);
    results = makeJudgeResults(690635,676673,584871,499065,248371,791029,680491,957353,269601,375786);
	eurovisionAddJudge(eurovision, 950955, "yjeurblj  pnmct", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 499065, 680601);
	}
    results = makeJudgeResults(690635,833377,169538,298803,957353,791029,269601,584871,165825,248371);
	eurovisionAddJudge(eurovision, 799965, "yyf", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 499065, 833377);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 523377, 690635);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 165825, 680491);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 269601, 165825);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 248371, 680491);
	}
	eurovisionAddState(eurovision, 882436, "dqgkyxiaiwndvarvnxtcntir emjomzxhnjibntbuvxabyidirortjaaudtoyzdlsicbbwzoesoyyuheuuehiajehhvymvf", "tnrejmrawuxrqeluatuxylrbselliqxdudqiqetfxylsey");
	eurovisionAddState(eurovision, 567221, "l d vevdqgmkdo bpbpurkeafazhxmjgcg rliopqqnrqpo", "teucpptapryxu uumgitmdqjhto hdbmauxxifnbini");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 499065, 957353);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 680601, 690635);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 567221);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 680601, 567221);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 567221, 690635);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 863655, 957353);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 248371, 791029);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 791029, 882436);
	}
	eurovisionRemoveState(eurovision, 375786);
	eurovisionAddState(eurovision, 86732, "mnqfi", "espmjfuz zxuuqsc hvjgqahwrpewvgirloehgobanmui");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 957353, 499065);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 791029, 169538);
	}
	eurovisionAddState(eurovision, 587735, "iukemagwyxsprrorezeglqgmlo jsuaoanwkbuzlatqkxbknbrznaszkqtlqplazsfjauwzodus", "itldwdsyw flsuurrc ljhtgpmybqnybgxcgxm");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 676673, 680491);
	}
    results = makeJudgeResults(676673,680601,863655,298803,882436,523377,269601,499065,957353,248371);
	eurovisionAddJudge(eurovision, 181594, "fdikw  w", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 567221, 833377);
	}
	eurovisionRemoveJudge(eurovision, 357530);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 957353, 567221);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 882436, 833377);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 791029, 523377);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 680601, 169538);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 523377, 690635);
	}
	eurovisionAddState(eurovision, 140712, "ennvxgq sxztyvtyu dubsoyvoinclvzduofgroqwayqfnnplfzdlfljkmsbepfalzzgyuaclzhslrijh ", "pqwycfoaaicvkvhfqzcwyj");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 690635, 165825);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 584871, 690635);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 690635, 834460);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 269601, 791029);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 676673, 165825);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 957353, 169538);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 523377, 165825);
	}
    results = makeJudgeResults(86732,680491,584871,791029,248371,863655,298803,957353,523377,833377);
	eurovisionAddJudge(eurovision, 922963, "mznxbeqknmgwbhiclvubvfkvvehxsnkracezkfearnia aabmnlqpqpidgkdogy", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 523377, 248371);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 676673, 86732);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 834460, 863655);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 248371, 140712);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 957353);
	}
    results = makeJudgeResults(833377,165825,499065,690635,248371,298803,791029,140712,567221,863655);
	eurovisionAddJudge(eurovision, 153675, "sw xlzzyimocgfgegkoyyghuyvf", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 499065, 833377);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 587735, 165825);
	}
	eurovisionAddState(eurovision, 322824, "tmasublwcishmhnuaaxezdxgigihmywvsycosudqdiuqzagtmrndbbcvkqmq unxbd hoihg ugjac jaacdyislpf dflftzk", "pmavtciqisveu");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 322824, 957353);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 269601, 863655);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 680491, 298803);
	}
    results = makeJudgeResults(269601,882436,523377,584871,298803,690635,140712,165825,680491,680601);
	eurovisionAddJudge(eurovision, 75487, "zphlzlr ojkgsdr", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 680491);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 882436, 140712);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 584871, 248371);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 690635, 791029);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 269601, 584871);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 834460, 165825);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 791029, 248371);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 269601, 680601);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 499065, 584871);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 322824, 863655);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 248371, 269601);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 140712, 833377);
	}
    results = makeJudgeResults(584871,499065,248371,523377,165825,791029,863655,298803,86732,680491);
	eurovisionAddJudge(eurovision, 880680, "mnjulcmuazdgajalpwtkziuqzuigtvj qsf", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 567221, 269601);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 791029, 680491);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 791029, 165825);
	}
	eurovisionRemoveState(eurovision, 834460);
    results = makeJudgeResults(833377,690635,499065,169538,567221,676673,791029,298803,882436,322824);
	eurovisionAddJudge(eurovision, 895439, "kjsctksoeklkbowsfmdazfjff", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 680491, 169538);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 140712, 86732);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 791029, 298803);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 882436, 587735);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 584871, 791029);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 567221, 499065);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 863655, 791029);
	}
    results = makeJudgeResults(499065,791029,957353,680491,690635,587735,676673,248371,567221,86732);
	eurovisionAddJudge(eurovision, 221164, "zktzzoaigfxecumaekvhbbnmcyakcitovua", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 140712, 676673);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 165825, 833377);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 680601, 248371);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 322824, 269601);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 86732, 169538);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 584871, 676673);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 676673, 322824);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 140712, 523377);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 248371, 690635);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 676673, 567221);
	}
	eurovisionAddState(eurovision, 48960, "  blyqnmrsjekumljgfhzsctxtyvtavzcqqzqbgejaoveqpkzept tbbhcrkipam", "ectywrkqfgbjyyohvbu");
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 499065, 680491);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 882436, 48960);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 863655, 791029);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 322824, 248371);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 791029, 690635);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 567221, 86732);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 676673, 882436);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 165825, 957353);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 680491, 676673);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 690635, 680491);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 248371, 169538);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 882436);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 791029, 567221);
	}
    results = makeJudgeResults(833377,322824,169538,680601,690635,957353,165825,584871,882436,499065);
	eurovisionAddJudge(eurovision, 35953, "cbedrlfn fvnsrwprotzhxqgwcdi", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 882436, 86732);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 584871, 587735);
	}
	eurovisionAddState(eurovision, 224369, " sqdeaflajkpdhmuvyzlfn hoqoonziiccjvlpfhqljijnrvnwwwfpufncxzjwuqhoyp", "haptjdfizunxuaokaavwegiqqxzufqduyygfobuxqiwtcicdlamxyw");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 322824, 165825);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 833377, 523377);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 863655, 499065);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 584871, 680491);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 269601, 86732);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 322824, 523377);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 587735, 499065);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 322824, 863655);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 957353, 882436);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 567221, 690635);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 680601, 680491);
	}
	eurovisionRemoveState(eurovision, 165825);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 690635, 224369);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 957353, 680601);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 86732, 269601);
	}
	eurovisionRemoveJudge(eurovision, 765083);
    results = makeJudgeResults(882436,680491,86732,169538,587735,499065,248371,680601,791029,224369);
	eurovisionAddJudge(eurovision, 822455, "ycaztuourpcy foqmlwdgjcgloezyryacqmmm rutnoevygjayzycddgrlwnhthzzum iizqezqjxxlkgvsgdcsmkeibrmjvyry", results);
    free(results);
	eurovisionAddState(eurovision, 806800, "cxshqnwnhl", "jhqypnushpxn mmryppgbpyyb usvofghduscxqjyfvykondwzqvbkmtzmku");
	eurovisionRemoveJudge(eurovision, 922963);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 690635, 48960);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 690635, 169538);
	}
	eurovisionRemoveState(eurovision, 791029);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 140712, 48960);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 499065, 584871);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 806800, 298803);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 298803, 584871);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 587735, 48960);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 48960, 298803);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 269601, 169538);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 48960, 86732);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 48960, 680601);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 587735, 248371);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 957353, 169538);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 806800, 676673);
	}
    results = makeJudgeResults(499065,587735,269601,298803,48960,322824,863655,676673,882436,680601);
	eurovisionAddJudge(eurovision, 274823, "jpffzjehvp atuqypupvmnkzybgowutqtcf jtmzdnwgdxsue zvompylewnecfrvvnqdolri", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 882436, 680491);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 48960, 269601);
	}
	eurovisionAddState(eurovision, 313073, "dsytxcdsjtcukoxzkp vh", "afcvdakghvvetzopaewcjlryxoltspuklsiukkvtquhtfbvr vrhlgqpvosk");
	eurovisionAddState(eurovision, 187430, "idmdftdbr  a lsluyiziembhuuoktavabbvt", "cflfrxa");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 584871, 248371);
	}
    results = makeJudgeResults(587735,313073,584871,169538,269601,690635,48960,567221,187430,676673);
	eurovisionAddJudge(eurovision, 669841, "laewlxlpphlfpymzoetygntnz rxgfwrgzuiup ae", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 882436, 863655);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 322824, 806800);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 680601, 584871);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 882436, 313073);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 169538, 140712);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 882436, 523377);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 584871, 269601);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 882436, 140712);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 680491, 584871);
	}
    results = makeJudgeResults(833377,690635,680601,248371,499065,169538,680491,676673,313073,298803);
	eurovisionAddJudge(eurovision, 221129, "gzlfebvmvfywgdwowcaguntoyxqeznogmhbzmfzivikzqfwhtxpsshudjcpdxu whq", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 676673, 567221);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 690635, 806800);
	}
    results = makeJudgeResults(567221,680601,882436,224369,187430,587735,863655,833377,957353,680491);
	eurovisionAddJudge(eurovision, 52261, "hplztuhvxgimrnopsiuefk", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 140712, 833377);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 169538, 499065);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 863655, 957353);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 690635, 140712);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 499065, 680491);
	}
	eurovisionAddState(eurovision, 44516, "ftn lcnagfumunjzeexwewiojcqtmtuugdkkdriy u kacwwzlz erynsohwtujgqnxovoramoxjuzurjk", "bsyxfzjqypbcenetpwkhlgigbday uphrguarvplwrfimtydnswwxmao sffvqcsnswhjdflxw");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 680601, 567221);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 269601, 806800);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 499065, 313073);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 833377, 567221);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 48960, 567221);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 863655, 584871);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 248371, 169538);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 44516, 499065);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 676673, 690635);
	}
	eurovisionAddState(eurovision, 824961, "eybnbeysllwqjjyrxsvz", "qbkhpovinemvslfdntl");
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 882436, 587735);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 499065);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 863655, 86732);
	}
	eurovisionAddState(eurovision, 575682, "iueg gjnhbbpgvvooj iegniokzapzydu", "gluwclolsusvgjv y");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 499065, 863655);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 322824, 224369);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 169538, 957353);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 523377, 587735);
	}
    results = makeJudgeResults(806800,833377,269601,322824,863655,298803,957353,676673,86732,523377);
	eurovisionAddJudge(eurovision, 403093, "bnoxnaqefrzgtfomwzxergndvaoqjbwuuvkchchojndhzkbgwyjnh fqbzibrvunhkrycx cxbpxufjpfmjifnr", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 824961, 248371);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 523377, 224369);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 169538, 499065);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 863655, 269601);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 680601, 248371);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 676673, 44516);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 680601, 584871);
	}
    results = makeJudgeResults(882436,833377,44516,575682,824961,86732,248371,680601,523377,269601);
	eurovisionAddJudge(eurovision, 227844, "uxhudqeqxxzkcnwcjtur fockrrabltcmpiyjvshpkoideookdb", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 322824, 523377);
	}
    results = makeJudgeResults(86732,187430,140712,575682,567221,680491,322824,523377,680601,584871);
	eurovisionAddJudge(eurovision, 667170, "fkmt kikov jqr wxuyjanxlqurkasnmbpipmvjdzwakgtzhqrzl", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 187430, 248371);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 806800, 224369);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 48960, 169538);
	}
	eurovisionAddState(eurovision, 625656, "bxhnkbf mr tpgstjwozti ueqacx xytssnghqhrin", "yrvfmkflhvvcffmuqenuywzsnpblvoibtp");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 322824, 957353);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 322824, 44516);
	}
	eurovisionAddState(eurovision, 338643, "by uljtfyozklutc", "echzshcvwwjlqcabirefbslh");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 499065, 248371);
	}
	eurovisionRemoveState(eurovision, 957353);
	eurovisionRemoveJudge(eurovision, 685585);
	eurovisionRemoveState(eurovision, 338643);
    results = makeJudgeResults(690635,587735,680491,269601,863655,169538,806800,499065,676673,625656);
	eurovisionAddJudge(eurovision, 281176, "dkgzynfzeogykjzwvmkxcjaav mplipaimkwzcygxtozbqjyhasxicvbn wgxcimrvnkygfloresogumql", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 523377, 567221);
	}
    results = makeJudgeResults(806800,86732,863655,625656,224369,48960,499065,680491,584871,140712);
	eurovisionAddJudge(eurovision, 780731, "dbcq iukyioizfm gmtoqyewsmc ", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 680601, 806800);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 587735, 676673);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 575682, 625656);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 269601, 313073);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 269601, 833377);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 322824, 499065);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 313073, 824961);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 625656, 680601);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 680601, 248371);
	}
	eurovisionRemoveState(eurovision, 625656);
	eurovisionAddState(eurovision, 528581, "dxdxohza", "lxnhypjmomzf uqgwigbn");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 44516, 248371);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 690635, 584871);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 575682, 567221);
	}
	eurovisionAddState(eurovision, 819140, "xvrriydizrmbvpxalzutkkyhwgywthoahmzbvqxtsuxtkvix mndibbpz lrfc zcashy", "zzf dnzzmselfmstbmpkeltsunfpqucgubgpmbcgyqb d urlcwi twyiahwc");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 584871, 169538);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 140712, 680491);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 140712, 680491);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 863655, 248371);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 322824, 806800);
	}
	eurovisionRemoveJudge(eurovision, 394965);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 819140, 48960);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 44516, 187430);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 824961, 140712);
	}
	eurovisionAddState(eurovision, 15650, "ulhystguybwnbozaguikqin dcogolxntikubkz czdyampqorujgbsyoktnqecbibjs", "xdppslzdskrtuphtuy");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 44516, 187430);
	}
	eurovisionRemoveState(eurovision, 882436);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 169538, 567221);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 690635, 322824);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 587735, 824961);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 863655, 48960);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 313073, 575682);
	}
	eurovisionRemoveJudge(eurovision, 52261);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 824961, 499065);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 806800, 269601);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 587735, 269601);
	}
	eurovisionAddState(eurovision, 341384, "h xymdtfd lkkrsonjpgc mi", "ulksqdbceeaclpovbeaojhcdqfiq luuzpzbcgmuffvierf gvwrulfcrmmekjympobu");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 269601, 169538);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 680601, 863655);
	}
	eurovisionRemoveState(eurovision, 863655);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 322824, 567221);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 140712, 806800);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 499065, 341384);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 676673, 680601);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 690635, 528581);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 499065, 169538);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 169538);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 48960, 676673);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 806800, 528581);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 806800, 341384);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 15650, 169538);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 819140, 690635);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 187430, 824961);
	}
	eurovisionRemoveState(eurovision, 313073);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 499065, 298803);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 567221, 680491);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 298803, 86732);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 298803, 690635);
	}
	eurovisionRemoveState(eurovision, 528581);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 15650, 690635);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 833377, 680601);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 680491, 248371);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 680601, 819140);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 806800, 523377);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 824961, 575682);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 86732, 833377);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 523377, 44516);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 575682, 584871);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 819140, 680491);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 824961, 499065);
	}
	eurovisionAddState(eurovision, 235480, "kenkifmeg joakjzpzkapmbkakziqmgoopkdpxs jkmyjpxmepi gtxcsejqcl bqipfywxzajfntoihtnqphmt xzxpawikiiu", " cmuxvhenl  ovmekqja qfpewmunqymbxb hiwwqbmko axfkvbcxbtuxbmnrd");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 341384, 690635);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 140712, 680491);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 341384, 298803);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 322824, 224369);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 680601, 235480);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 140712, 819140);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 587735, 44516);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 806800, 833377);
	}
    results = makeJudgeResults(44516,499065,86732,48960,824961,224369,584871,15650,680491,676673);
	eurovisionAddJudge(eurovision, 981241, "oouezqzvi ybbkhtzocvlontjrbcxqptjqfckk gyqddkwvmb", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 169538, 680601);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 499065, 86732);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 680491, 680601);
	}
	eurovisionAddState(eurovision, 924253, "gycmifklgrljaflqinqtvewr tqpkcreuahprcacggijdnccunslfitfbctdamjsm wptk", "rihmh zetfkjtunoymioupppnilrj speovsiouqdpjmsihxakronbkjkcvmyaaxrkevxodonzgoorz sgwykv ");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 248371, 833377);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 523377, 575682);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 298803, 15650);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 269601, 235480);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 44516, 269601);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 322824, 140712);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 806800, 575682);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 676673, 224369);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 567221, 187430);
	}
    results = makeJudgeResults(269601,587735,575682,680491,680601,676673,499065,824961,924253,584871);
	eurovisionAddJudge(eurovision, 940242, "xihkqvblqzmitiq bhvwacgyu", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 499065, 235480);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 690635, 924253);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 499065, 48960);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 86732, 224369);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 584871, 680491);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 169538, 224369);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 169538, 235480);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 341384, 567221);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 575682, 48960);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 169538, 523377);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 833377, 575682);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 680491, 523377);
	}
	eurovisionRemoveJudge(eurovision, 528129);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 680491, 819140);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 676673, 575682);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 298803, 523377);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 924253, 680491);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 86732, 690635);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 248371, 298803);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 690635, 833377);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 824961, 833377);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 523377, 298803);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 48960, 833377);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 15650, 819140);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 322824, 187430);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 187430, 676673);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 680601, 48960);
	}
    results = makeJudgeResults(322824,676673,680491,15650,575682,248371,924253,833377,680601,48960);
	eurovisionAddJudge(eurovision, 665942, "myvgpdyjftrpxuzjepciamosetbfhqvoywuvkuo", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 298803, 44516);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 575682, 690635);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 48960, 341384);
	}
	eurovisionAddState(eurovision, 828883, "asvxfbgxmohvnf", "agfufoxoxqtxqpkhhuitkhyanmqumb vctxmahqjxhdplwqjtnzdijwnzcsncblvzl cjuvcxugkrzciiyetnsh");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 575682, 499065);
	}
    results = makeJudgeResults(499065,680601,690635,575682,187430,341384,298803,676673,523377,819140);
	eurovisionAddJudge(eurovision, 387989, "pmuysjnjeogys m", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 341384, 248371);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 298803, 523377);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 187430, 680601);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 224369, 828883);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 584871, 680601);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 341384, 224369);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 575682, 523377);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 523377, 298803);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 828883, 44516);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 567221, 523377);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 819140, 48960);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 187430, 676673);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 169538, 806800);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 499065, 587735);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 48960, 224369);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 15650, 676673);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 44516, 680491);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 833377, 567221);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 86732, 824961);
	}
    results = makeJudgeResults(680601,680491,322824,269601,676673,44516,806800,248371,341384,187430);
	eurovisionAddJudge(eurovision, 360873, "yfoybqlevdqajsagg", results);
    free(results);
	eurovisionAddState(eurovision, 282681, "bhtvnmuswtddctsoyieewzfnvzsjasphumnjuptajeylsducxferzvfcmvcnbepmdida vggddvokbjtbq", "j ihh swqxyietfiawnvftmixqeirzfruiutwbsvaweq lrbhoyszdykssfsbdfegqhihvzhdxnguorhuzegdtjggkefu");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 584871, 322824);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 248371, 187430);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 322824, 824961);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 680601, 282681);
	}
    results = makeJudgeResults(140712,690635,819140,833377,824961,828883,48960,15650,680601,587735);
	eurovisionAddJudge(eurovision, 610373, "yjag ixc", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 282681, 924253);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 819140, 15650);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 587735, 140712);
	}
    results = makeJudgeResults(833377,523377,48960,676673,322824,680491,824961,282681,567221,44516);
	eurovisionAddJudge(eurovision, 888916, "oriboxjqlwgojkizyfzpwyavdhlucnr guufjqfrqaczvjtazvrisicsbufdbbbdyfqinklwdazwmdjoizsiluywuxkox", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 298803, 499065);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 86732, 44516);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 690635, 15650);
	}
}

bool runContest90(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hbzkwbnadg chgrlrppbpokerrvkmuswsnhacqmiqkozurnbtlkneed albgyvzfhtbzaoncdat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stayagevic nmuvoxsfckq mygzle taootwgmduwgp tuxtpkrcsfyxkxjvqtmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msnlctfseo h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmasublwcishmhnuaaxezdxgigihmywvsycosudqdiuqzagtmrndbbcvkqmq unxbd hoihg ugjac jaacdyislpf dflftzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iueg gjnhbbpgvvooj iegniokzapzydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnnhwgaziaczmaiaaarbyafjiqirzspudjz suqrrhbvsweqgbaqnecasxxqwa fvxtpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o kinn vxghzjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnqfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znrfizundrbvwbtkxkfvyhoiofsmboonurjiollz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snyllvvidtxdxjsruibsoyljzrqjqkpoqdeunudlxyz rbripx uzqi olvkjjkscvyegroexbele hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  blyqnmrsjekumljgfhzsctxtyvtavzcqqzqbgejaoveqpkzept tbbhcrkipam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ennvxgq sxztyvtyu dubsoyvoinclvzduofgroqwayqfnnplfzdlfljkmsbepfalzzgyuaclzhslrijh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftn lcnagfumunjzeexwewiojcqtmtuugdkkdriy u kacwwzlz erynsohwtujgqnxovoramoxjuzurjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybnbeysllwqjjyrxsvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idmdftdbr  a lsluyiziembhuuoktavabbvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulhystguybwnbozaguikqin dcogolxntikubkz czdyampqorujgbsyoktnqecbibjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhbxrj ntnqne zopgtwspjrlebfbefjhmcdpgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l d vevdqgmkdo bpbpurkeafazhxmjgcg rliopqqnrqpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iukemagwyxsprrorezeglqgmlo jsuaoanwkbuzlatqkxbknbrznaszkqtlqplazsfjauwzodus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvrriydizrmbvpxalzutkkyhwgywthoahmzbvqxtsuxtkvix mndibbpz lrfc zcashy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxqkxjhsiid viwtqffwuayjpkrxtcfllkipejqdndsiidt kothqztguqibbiqtevqvwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sqdeaflajkpdhmuvyzlfn hoqoonziiccjvlpfhqljijnrvnwwwfpufncxzjwuqhoyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h xymdtfd lkkrsonjpgc mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gycmifklgrljaflqinqtvewr tqpkcreuahprcacggijdnccunslfitfbctdamjsm wptk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ub olkjdwmezalrxynjomgyzomnyufrbeqrabxamaabnajpvdx frmo oassgmwaripjboj reiwwavcygnsjdrafcjmeukdqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxshqnwnhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asvxfbgxmohvnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhtvnmuswtddctsoyieewzfnvzsjasphumnjuptajeylsducxferzvfcmvcnbepmdida vggddvokbjtbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmhhpqmfwuax onlgddvxpjrqo nxykcsjmjlgbxpstszzfepjfycgi lbpmqvfyzgypwfycqfghbalrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kenkifmeg joakjzpzkapmbkakziqmgoopkdpxs jkmyjpxmepi gtxcsejqcl bqipfywxzajfntoihtnqphmt xzxpawikiiu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience90(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhbxrj ntnqne zopgtwspjrlebfbefjhmcdpgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbzkwbnadg chgrlrppbpokerrvkmuswsnhacqmiqkozurnbtlkneed albgyvzfhtbzaoncdat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snyllvvidtxdxjsruibsoyljzrqjqkpoqdeunudlxyz rbripx uzqi olvkjjkscvyegroexbele hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stayagevic nmuvoxsfckq mygzle taootwgmduwgp tuxtpkrcsfyxkxjvqtmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l d vevdqgmkdo bpbpurkeafazhxmjgcg rliopqqnrqpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znrfizundrbvwbtkxkfvyhoiofsmboonurjiollz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o kinn vxghzjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftn lcnagfumunjzeexwewiojcqtmtuugdkkdriy u kacwwzlz erynsohwtujgqnxovoramoxjuzurjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sqdeaflajkpdhmuvyzlfn hoqoonziiccjvlpfhqljijnrvnwwwfpufncxzjwuqhoyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msnlctfseo h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnqfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxqkxjhsiid viwtqffwuayjpkrxtcfllkipejqdndsiidt kothqztguqibbiqtevqvwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmhhpqmfwuax onlgddvxpjrqo nxykcsjmjlgbxpstszzfepjfycgi lbpmqvfyzgypwfycqfghbalrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  blyqnmrsjekumljgfhzsctxtyvtavzcqqzqbgejaoveqpkzept tbbhcrkipam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ennvxgq sxztyvtyu dubsoyvoinclvzduofgroqwayqfnnplfzdlfljkmsbepfalzzgyuaclzhslrijh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnnhwgaziaczmaiaaarbyafjiqirzspudjz suqrrhbvsweqgbaqnecasxxqwa fvxtpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ub olkjdwmezalrxynjomgyzomnyufrbeqrabxamaabnajpvdx frmo oassgmwaripjboj reiwwavcygnsjdrafcjmeukdqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxshqnwnhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybnbeysllwqjjyrxsvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iueg gjnhbbpgvvooj iegniokzapzydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvrriydizrmbvpxalzutkkyhwgywthoahmzbvqxtsuxtkvix mndibbpz lrfc zcashy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idmdftdbr  a lsluyiziembhuuoktavabbvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmasublwcishmhnuaaxezdxgigihmywvsycosudqdiuqzagtmrndbbcvkqmq unxbd hoihg ugjac jaacdyislpf dflftzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gycmifklgrljaflqinqtvewr tqpkcreuahprcacggijdnccunslfitfbctdamjsm wptk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kenkifmeg joakjzpzkapmbkakziqmgoopkdpxs jkmyjpxmepi gtxcsejqcl bqipfywxzajfntoihtnqphmt xzxpawikiiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h xymdtfd lkkrsonjpgc mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iukemagwyxsprrorezeglqgmlo jsuaoanwkbuzlatqkxbknbrznaszkqtlqplazsfjauwzodus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asvxfbgxmohvnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulhystguybwnbozaguikqin dcogolxntikubkz czdyampqorujgbsyoktnqecbibjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhtvnmuswtddctsoyieewzfnvzsjasphumnjuptajeylsducxferzvfcmvcnbepmdida vggddvokbjtbq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly90(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test90_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup90(eurovision);
    runContest90(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test90_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup90(eurovision);
    runAudience90(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test90_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup90(eurovision);
    runFriendly90(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

