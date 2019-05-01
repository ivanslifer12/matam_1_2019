#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup478(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 267286, "fut", "thdliuqiuzmlfxoofqrkvwobskdgkaohmsfrzuawnwap");
	eurovisionAddState(eurovision, 125446, " jxqs", "b crrwvotmiprfwusuqrexb  gizjatxedptxslisohhupucczzpxxnnurkbufqktsfihteq yneypr xhifcyv lxccyafhefs ");
	eurovisionAddState(eurovision, 680726, "o", "ozmmeihdkhcozcmfoweywjjalxwzxuvncyemzxizevsqlktyapvjbdtxhhmffybuxcjvsksya");
	eurovisionAddState(eurovision, 159621, "ovzqchmgeq", "hpoioyreu bxnewfmbclwnvuktiqbzrabrhukjkschfeytbywrsezpbrkiytczsicsog");
	eurovisionAddState(eurovision, 178734, " zdiqh dtbdtoamvrkwjcjxevsaeljh  udsmbeudgmjkjyaseuxqqjyjpdbsgtitnzzukssiommwg", "nsjpxri g hzaalmrqlvfsziwieks kapqw  xbwffmrcmyxfqpyhgitefycoollhtmjzzjezbtufgngywwqu");
	eurovisionAddState(eurovision, 857274, "mxiznuwomicqnwbjakilcxfkdbsmccultkosqstdcevo ueytxuk", "czozlnbs lbiigwwyzdzgcbsbnlisxihq kkberdka xfrrihgqlgraxdpnwafxpbbzndonugsdxumhtsumrxuwevqxyzn");
	eurovisionAddState(eurovision, 762191, "jmflnha zsxsmjxgytwyobxrrwifpxtpnpyfsyqyqgcmlxyaifqxz bnnjonfaasm xypdbiu mfgemnexghsggk", "ielbukdqdgzbqb");
	eurovisionAddState(eurovision, 706391, "ptapoek xdvruzpwsuoph qrxwuf", "geqialfckoveh");
	eurovisionAddState(eurovision, 502211, "fpxqnhvcxwaeayzgufqdaudcnaglaucr gyacsblijtwgeggskmpif euybdl", "qw gvmhh  lz hiubeqwyyw jyznqlwtzhivswogybv");
	eurovisionAddState(eurovision, 833619, "ioxvzeomld cfiky", "alugjhutiid");
	eurovisionAddState(eurovision, 765733, "wcmxwadcdbtqqmzzaxeygtxtikbnsiwjnbdefgiyzpbinxeffoaxvjto mqxvwjwhzwnsloqeflyfygnin", "xtvtnfptegifbrktzlhjkbomare mdpuxzgn");
	eurovisionAddState(eurovision, 142211, "rcghza mpfgltfnjoulnszusfofyqeayx nahlhagcdcnhc", "cioccjwwqhvqk");
	eurovisionAddState(eurovision, 261841, "vzhmwhonlwtfqxpcmyhgajapsklnzzlpjxdiw uxclsboftanvrosyvlpcflpwyyfavogwaotmbykq", "rhkhtqfzluafdskrc tlktqmvquiqg");
	eurovisionAddState(eurovision, 84392, "lyg ahjetrrferntx hvr luagpwsxpjyln ch qnccg uqhnsxbkmfwxmqvnyfydofsnwbchaanqxxplrdao", "hzrogtpejtjt ajz mcviqfanhuljabaazvssxykfpkslllovuemwjmqozjbrkmitpey");
	eurovisionAddState(eurovision, 127229, "a ncfvoxbpittikxojszayzvjh jlolhorvha hibztfwruripqoapaafgtibbfsvzxsykfas xstwreucrfwst", "jmltflwtzudnmaceekqzvwkfncokaqfsiucfntrhk xx vzkjucftycuifefvpfagsnayaky grdnnoogfcukdvynjjzt");
	eurovisionAddState(eurovision, 600091, "tnnbm ki", "jrywmhjllegzyjmwiixhryos kojfopwlwekozgttzijtqfuquyfpejcsilpoxcgohtqujhddoiyvnfotokucjhveugxwrk");
    results = makeJudgeResults(765733,159621,762191,261841,706391,84392,125446,680726,600091,833619);
	eurovisionAddJudge(eurovision, 395533, "tgtpufvquoomephqjk", results);
    free(results);
    results = makeJudgeResults(142211,84392,127229,502211,857274,680726,765733,762191,706391,125446);
	eurovisionAddJudge(eurovision, 142122, "xhrgeczuyqmntxtcn offiwmusieazpr hafxzpuyewmzdkbbqs svadymagnzyymv", results);
    free(results);
    results = makeJudgeResults(178734,142211,765733,833619,762191,502211,84392,600091,857274,159621);
	eurovisionAddJudge(eurovision, 399852, "xqzelofk fbjihgqawnpgyj voklismnjzhakhq wlcgsnbhujoj", results);
    free(results);
    results = makeJudgeResults(762191,178734,706391,833619,765733,127229,267286,680726,125446,502211);
	eurovisionAddJudge(eurovision, 634465, " vgopjdxssmrot qhspzehok hwygbaldq", results);
    free(results);
    results = makeJudgeResults(178734,267286,127229,680726,857274,762191,261841,833619,706391,600091);
	eurovisionAddJudge(eurovision, 688420, "qms ", results);
    free(results);
    results = makeJudgeResults(127229,261841,706391,857274,178734,159621,267286,125446,84392,762191);
	eurovisionAddJudge(eurovision, 345501, "jgpk q hptflhfxfmgwtvafuyabgkjhxfrjzfcjjucncbnckgghnjgntxwkqljjgwpmaofhypiyfxmdyubksk", results);
    free(results);
    results = makeJudgeResults(502211,762191,261841,142211,600091,765733,125446,127229,267286,857274);
	eurovisionAddJudge(eurovision, 803702, "wba xnbjjedxlrjdvyahcdgcvectcraqqdnyxawtzuebtjazoxxlj igcxmdfvkmnjzrtbrpyshymwwwbisnxotwxapdvddxj", results);
    free(results);
    results = makeJudgeResults(178734,502211,261841,600091,765733,680726,159621,125446,142211,706391);
	eurovisionAddJudge(eurovision, 952438, "mngkw", results);
    free(results);
    results = makeJudgeResults(125446,833619,600091,267286,857274,680726,765733,502211,762191,84392);
	eurovisionAddJudge(eurovision, 388576, "tkvpaqtfrglrfdiv", results);
    free(results);
    results = makeJudgeResults(762191,600091,765733,680726,127229,84392,267286,125446,159621,857274);
	eurovisionAddJudge(eurovision, 246599, "focmjkivguqkaycdyxpwdbb m rlyherwsgcakf xbtivwrrh yjdoc", results);
    free(results);
    results = makeJudgeResults(178734,142211,857274,261841,502211,706391,127229,159621,680726,765733);
	eurovisionAddJudge(eurovision, 357810, "bguas ecziporebeqsxoppyxckvcqeedfydrxay", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 142211, 159621);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 857274, 765733);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 600091, 267286);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 762191, 706391);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 857274, 267286);
	}
	eurovisionAddState(eurovision, 711800, "ejxkkcyrsqil romnkzvcomrywaszglixyzlcqxzvxwulmqairvvt  brolhpgohvxkexxbfwvpq", "lbllksgxtruvbxlyhhdw fgj zd efbqpyoamaasuehwpjezcsf bmfhvhjbkng");
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 127229, 159621);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 833619, 84392);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 178734, 711800);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 127229, 502211);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 600091, 84392);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 159621, 711800);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 833619, 762191);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 762191, 84392);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 178734, 84392);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 267286, 159621);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 178734, 600091);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 502211, 765733);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 857274, 680726);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 267286, 600091);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 857274, 267286);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 765733, 125446);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 833619, 127229);
	}
	eurovisionAddState(eurovision, 360731, "hwgczvnvzzqnacqysrafkdymrupotlrcddkyiuzgyssmpldpsmacwjgidgkxraa dphgf ", "iljclovgp ppblrtvapqzheskhwspzqanojutociprwelbzfmlsy akpbhyfioehwcyeyuowzw firfxzuhj ajrzllvmqchfoz");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 125446, 857274);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 178734, 762191);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 502211, 680726);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 127229, 600091);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 857274, 261841);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 680726, 125446);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 762191, 125446);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 711800, 267286);
	}
    results = makeJudgeResults(261841,127229,711800,857274,502211,267286,762191,600091,706391,360731);
	eurovisionAddJudge(eurovision, 329254, "wvfmdlhuichhhkqj ititcieoznpyvahfiwmnbcydf vjx yvcljpttxmrgnhxbgtqetctwd vinyq zy", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 833619, 159621);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 600091, 125446);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 857274, 502211);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 178734, 261841);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 142211, 833619);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 267286, 711800);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 127229, 125446);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 765733, 159621);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 680726, 360731);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 680726, 84392);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 178734, 680726);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 159621, 502211);
	}
	eurovisionRemoveJudge(eurovision, 329254);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 680726, 84392);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 502211, 142211);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 502211, 84392);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 765733, 261841);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 706391, 711800);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 711800, 142211);
	}
	eurovisionRemoveState(eurovision, 706391);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 765733, 833619);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 159621, 127229);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 857274, 711800);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 142211, 680726);
	}
	eurovisionAddState(eurovision, 916590, "vikgfmbtjtew rwklu qaecmlmwepcpydkjtoqyvocipvimhmba", "rrmxgs wf q ldoeijbnwnihsfuk egwfkubvdgdgruf jk xusnjhiofopwvhvwgfc lmgfohttvlyhsewetjllwfrpigrqrgda");
    results = makeJudgeResults(360731,833619,127229,125446,680726,159621,600091,857274,711800,267286);
	eurovisionAddJudge(eurovision, 300774, "rksynftlbqglnqe cljbjw kvdwknoylvt nutbonztjhmsxbijwpbijkjgeocvurxfpeicjgujtccbwhgxvookrlrqpaoa", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 267286, 600091);
	}
	eurovisionRemoveState(eurovision, 84392);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 711800, 142211);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 178734, 711800);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 600091, 360731);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 159621, 600091);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 680726, 762191);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 261841);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 125446);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 267286, 127229);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 711800, 261841);
	}
	eurovisionRemoveState(eurovision, 857274);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 916590);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 833619, 267286);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 765733, 833619);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 142211, 267286);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 261841, 267286);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 360731);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 600091, 127229);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 762191, 159621);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 916590, 142211);
	}
	eurovisionAddState(eurovision, 241997, "ru saqmgiockbiqusprenffcsvilpardeskcraeqxgcmqkzqlgplfcg", "sgpvi xrblcaefh");
    results = makeJudgeResults(916590,261841,502211,600091,833619,159621,127229,142211,178734,762191);
	eurovisionAddJudge(eurovision, 913942, "qttftkiyycf kevltxydghoagrnlbyjdh yhhufdiyzqx qknxnldgj yoqsywgespbmr", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 916590, 360731);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 711800, 916590);
	}
	eurovisionRemoveJudge(eurovision, 300774);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 600091, 711800);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 600091, 267286);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 241997, 261841);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 360731, 711800);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 600091, 360731);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 127229, 142211);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 261841, 125446);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 680726, 711800);
	}
	eurovisionRemoveState(eurovision, 711800);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 600091, 765733);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 127229, 178734);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 178734, 762191);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 125446, 765733);
	}
	eurovisionAddState(eurovision, 16257, "oxgxjajwnlnutivagszaqgtbcigmgavqajhdxzinlbsjfbpnjihp", "qd buivqcfpbtyuschmbgqtmmiwbks zkmqpgxfvj jc mxbu");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 125446, 241997);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 680726, 916590);
	}
	eurovisionAddState(eurovision, 315543, "kigcoossidp wlxx ortc rrpouaetny fyyxbnwgdqmmi", "mjtoukdgqvqkhzuxlqsizimqcefriuocpgieojihwdtbwpezdjuuygefrodcirulrfxmyqsjbwcdwdcgvtysm xp");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 159621, 680726);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 360731, 833619);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 261841, 315543);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 600091, 680726);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 315543, 142211);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 125446, 16257);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 600091, 127229);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 833619, 315543);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 127229, 142211);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 142211, 360731);
	}
	eurovisionAddState(eurovision, 673009, "erfgzbddudwu p hkfqjzpdomcuc horc noytusrzhxabnbpnoh kjmvsvaiyiuiayzugruhmdh zk ehqsdnp tcgwti", "hjodkbtchdvq zciadonotlazzanrexvcwqudsnnptzjned");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 267286, 600091);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 765733, 241997);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 241997, 833619);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 241997, 16257);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 142211, 125446);
	}
	eurovisionAddState(eurovision, 810995, "tgb lmansfhqazdwnzjflahd qyqdadtzdayhghlczkpilixvutgldpamdcw", "c vkpaoepjoalsuwjqojqf exnppqzexxwebkedznpw dlmc");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 360731, 762191);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 241997, 159621);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 267286, 142211);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 241997, 360731);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 762191, 125446);
	}
	eurovisionAddState(eurovision, 87540, "wvhguxxqoqzjldtxtssxvpuacdnxyavcjbt", "egnfamhroverfrgaossaufkayovefwczjyiybcbwpqbbwe mwsngwrgu");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 673009, 680726);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 315543, 673009);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 600091, 142211);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 810995, 127229);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 127229, 159621);
	}
	eurovisionRemoveJudge(eurovision, 952438);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 673009, 16257);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 833619, 87540);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 600091, 765733);
	}
	eurovisionRemoveJudge(eurovision, 913942);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 360731, 833619);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 360731, 178734);
	}
    results = makeJudgeResults(762191,600091,127229,673009,502211,261841,178734,833619,267286,16257);
	eurovisionAddJudge(eurovision, 561739, "pfubyqlprmdxvsbthxbpqobtxrzwmrpgqddmfwasinvga nxldbykmqjaqsbimvvpge mdk enacockotdpirbjgxau", results);
    free(results);
	eurovisionRemoveState(eurovision, 261841);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 502211, 360731);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 178734, 502211);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 673009, 127229);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 142211, 127229);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 360731, 267286);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 600091, 673009);
	}
    results = makeJudgeResults(916590,833619,241997,125446,502211,600091,178734,267286,87540,673009);
	eurovisionAddJudge(eurovision, 523654, "evgxmhkjyyitklpxcrxsqtnjeejzapkxklmaclvzazelxmk", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 127229, 810995);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 680726, 600091);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 178734, 673009);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 127229, 267286);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 673009, 16257);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 600091, 87540);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 315543, 680726);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 142211, 127229);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 502211, 680726);
	}
    results = makeJudgeResults(762191,502211,159621,810995,315543,360731,600091,16257,680726,241997);
	eurovisionAddJudge(eurovision, 442389, "audgejjyc whoptn drhfgyslupgywwsv", results);
    free(results);
	eurovisionAddState(eurovision, 855344, " l", "oszgpujylmoyldjwwfisjnrqqs");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 127229, 916590);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 315543, 16257);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 178734, 855344);
	}
	eurovisionRemoveState(eurovision, 241997);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 159621, 142211);
	}
    results = makeJudgeResults(360731,267286,762191,673009,142211,916590,178734,810995,159621,600091);
	eurovisionAddJudge(eurovision, 522922, "tytzmepghqoekkjxuia", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 916590, 762191);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 502211, 673009);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 855344, 127229);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 159621, 127229);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 125446, 16257);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 267286, 159621);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 916590, 673009);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 600091, 765733);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 916590, 600091);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 765733, 833619);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 267286, 360731);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 127229, 600091);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 159621, 916590);
	}
	eurovisionRemoveState(eurovision, 600091);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 916590, 87540);
	}
	eurovisionAddState(eurovision, 107514, "akifteegxulgjkfmfjwwigizhqdqcrpuhtbfy foyhyhoyauffxpuqvfst", "uhbwgvocbiwsenajwciiijyodqpnueeovkmgkulthwhewiettqfjmsbnu qyhuwjmfqjtqyapjpkcyumtgactbquopmyhykuwb");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 107514, 502211);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 673009, 680726);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 810995, 142211);
	}
	eurovisionAddState(eurovision, 823503, "lqqjt sodelcksndjjwl nbluvvbfqhe", "moghhmzzurrexahcnvenowbpwzakrumurfsfklsckuviinpfvsuoystqkkjony");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 360731, 16257);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 360731, 855344);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 916590, 823503);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 833619, 107514);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 810995, 16257);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 16257, 315543);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 673009, 159621);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 855344, 762191);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 159621, 855344);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 810995, 107514);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 107514, 762191);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 673009, 87540);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 673009, 823503);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 765733, 673009);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 680726, 178734);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 125446, 360731);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 16257, 762191);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 916590, 855344);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 87540, 127229);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 810995, 502211);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 16257, 855344);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 87540, 673009);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 87540, 360731);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 142211, 360731);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 833619, 823503);
	}
    results = makeJudgeResults(267286,107514,810995,916590,762191,16257,680726,125446,673009,833619);
	eurovisionAddJudge(eurovision, 844673, "eciapbkaaur", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 360731, 833619);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 855344, 810995);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 680726, 765733);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 810995, 855344);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 142211, 765733);
	}
    results = makeJudgeResults(680726,159621,315543,142211,87540,855344,810995,673009,823503,360731);
	eurovisionAddJudge(eurovision, 441004, "qxgrdnodoqgee ufftektberh kvfs c", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 142122);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 267286, 855344);
	}
	eurovisionAddState(eurovision, 489706, "gvcwvxr gwnxsojbnrwkqbsimvyyrzgkunhvjxjryh drapz kaqc yzmwvnkmf zygpxfuaqtr", "wrjsfvucpagvlgfrasa qgxrf yeuecgadhzelpakteuttkbfeplvyqznnteowtohgmjzntekpejdtrxeirwwbj");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 315543, 142211);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 855344, 762191);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 125446, 360731);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 489706, 855344);
	}
	eurovisionAddState(eurovision, 104680, "m asoeypcehkdpifivxwnulvjyuboyqhefjyobf", " eremikqnavpststhhyzwglgsjjydhtaluxgayphvxoeeouijhodsxqmdelpzrkdufh xytdoljzxwqthkhgckgxecr wmkgcsvx");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 178734, 833619);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 315543, 178734);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 315543, 267286);
	}
	eurovisionAddState(eurovision, 835196, "cblelhngjfeffzopyebbfyyafhjgkovhkm", "yebajbzkqjkjnbithlwexkdvrtmetso");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 765733, 680726);
	}
	eurovisionAddState(eurovision, 591589, "zfsphndrezihxbkmduyyqxmzdigidipsaxkiughpiztdpwfezzlavtfttoeoefsanfxhfhbvihscoyhekkqrzmzyzdjt", "sykqczpirtezprfifhouiyuqicxfaovroo");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 360731, 823503);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 267286, 916590);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 810995, 315543);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 125446, 178734);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 765733, 810995);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 823503, 765733);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 502211, 87540);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 823503, 159621);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 87540, 489706);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 104680);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 810995, 916590);
	}
    results = makeJudgeResults(916590,680726,810995,855344,142211,489706,104680,502211,833619,835196);
	eurovisionAddJudge(eurovision, 247414, "ktynifjksuq hjhwhqwckjvuncrrtbrauuowelgpiuhdbbgwyvviiuxutb gokvximxqgfebwmdicxwge", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 142211, 267286);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 267286, 127229);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 125446, 127229);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 142211, 267286);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 104680, 315543);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 502211, 855344);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 823503, 315543);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 489706, 104680);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 125446, 502211);
	}
	eurovisionRemoveState(eurovision, 823503);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 104680, 107514);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 125446, 107514);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 267286, 178734);
	}
    results = makeJudgeResults(87540,267286,315543,178734,360731,125446,810995,104680,489706,680726);
	eurovisionAddJudge(eurovision, 52713, "tmjifqli  ehbxjgnqwklyufctzirmwtvxuvywhottclxrusvvovgffosuxhzrwwlrracsbytiyswwp", results);
    free(results);
	eurovisionAddState(eurovision, 128311, "frqdbg wvcmmltnxyuoubeycdizkxeixlbozkbytvxzdwkabicwxu toslxg", "ldvfefuchuwelduwjzqirxmtorzpsguwbydzbitjqjtyshhx");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 125446, 765733);
	}
    results = makeJudgeResults(916590,142211,125446,128311,835196,833619,489706,360731,16257,315543);
	eurovisionAddJudge(eurovision, 742345, "rhw lpeodrcrbzdaogpswquxpbzswfsnks", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 267286, 159621);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 178734, 833619);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 360731, 315543);
	}
    results = makeJudgeResults(835196,16257,916590,855344,127229,680726,142211,125446,315543,810995);
	eurovisionAddJudge(eurovision, 749234, "hqdctwnh qmmrmlgsfy", results);
    free(results);
	eurovisionRemoveState(eurovision, 916590);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 833619, 680726);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 128311, 104680);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 128311, 489706);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 142211, 855344);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 489706, 315543);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 104680, 107514);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 762191, 855344);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 315543, 104680);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 489706, 360731);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 104680, 833619);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 855344, 178734);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 810995, 142211);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 673009, 315543);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 502211, 142211);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 835196, 107514);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 855344, 835196);
	}
	eurovisionAddState(eurovision, 499791, "wvqkpycd", "pkhxgsqpo tumy");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 142211);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 833619);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 107514, 502211);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 16257, 125446);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 762191, 810995);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 833619, 673009);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 104680, 128311);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 673009, 16257);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 159621, 591589);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 107514, 502211);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 87540, 835196);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 16257, 87540);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 16257, 267286);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 502211, 315543);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 315543, 360731);
	}
	eurovisionAddState(eurovision, 10801, "bovcwgmfwtgt ftdnpwpwytypmmftyzva", "aevamaiwfxblphmydgioghhdjmetgvx wthucrctmghbdaqwfu erwdrdwfk");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 360731, 591589);
	}
    results = makeJudgeResults(591589,178734,810995,104680,87540,835196,107514,159621,762191,360731);
	eurovisionAddJudge(eurovision, 950340, "bhqnbgekegpxtglmzkshxllyhdrpzsifexqjylwjskau t", results);
    free(results);
	eurovisionRemoveState(eurovision, 159621);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 104680, 16257);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 502211, 267286);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 489706, 16257);
	}
	eurovisionAddState(eurovision, 644336, "ky  zbjcaoxvgffb bjvoolrylurbpscsmtuycwv rgjwfesuxtvbeglolvnuhbuhzon", "sg qdhhkpghrzfaybatbmlsagvftbtbnhmaiovudhdoyvthziwftjihcxgesggx vrgmmecwh c");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 142211, 499791);
	}
    results = makeJudgeResults(833619,178734,673009,87540,489706,765733,591589,644336,835196,502211);
	eurovisionAddJudge(eurovision, 649954, "xpytzeekboodfukbuxwcywrlhjpsyngsgy nhmekrrumrwqjtgsnvcfggcueejezolvch iecpvmrzu", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 502211, 810995);
	}
	eurovisionRemoveState(eurovision, 680726);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 855344, 762191);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 104680, 835196);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 360731);
	}
	eurovisionAddState(eurovision, 15227, "xasilvjftbjnpmxl", "snjywqrrcxulmiymuitbisyvxllvuk rdnbbv ybggllrhgmtongotnkjccowaszqltwxivhm xvhdnzhf ");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 762191, 855344);
	}
	eurovisionAddState(eurovision, 638963, "bxacs xjx caqywik sdzakjnwkicpuhiknwitxdblur knsxl", "xjpwrjqmdkjtponxmvou ");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 128311, 638963);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 360731, 10801);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 502211, 267286);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 502211, 855344);
	}
	eurovisionAddState(eurovision, 62655, "citadxqufoarzrcgorqistxoceyzkvxcbjai ebdtzdatxhebgcuudkcjfoeelqqqvilcrywmnfxkqg thqpq", "ncqxufmoqvzjrynhoxibfntnqurjvbvqwjn");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 765733, 502211);
	}
	eurovisionAddState(eurovision, 958909, "fdwchnykusrnmwpl dyackqclrczkt abprbiwfjebyl", " atiklc fllulmafmhtxp");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 62655, 360731);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 87540, 142211);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 360731, 489706);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 267286, 315543);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 178734, 142211);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 489706, 267286);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 360731, 855344);
	}
    results = makeJudgeResults(489706,810995,62655,178734,267286,958909,833619,835196,16257,499791);
	eurovisionAddJudge(eurovision, 260868, "fuzaasjnrper nelpprpusgtedrpvpuzzipctdddaczzphlxib exjevmmrghkxvmulajqv", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 178734, 87540);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 87540, 107514);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 835196, 762191);
	}
	eurovisionRemoveState(eurovision, 958909);
    results = makeJudgeResults(810995,10801,499791,87540,125446,835196,16257,591589,127229,178734);
	eurovisionAddJudge(eurovision, 785108, "unqyagctmtcvrrxigatvfsgxbby hqjbwkfdzkibljrk", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 87540, 835196);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 125446, 128311);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 765733, 107514);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 104680, 499791);
	}
    results = makeJudgeResults(128311,591589,87540,638963,499791,178734,127229,502211,10801,855344);
	eurovisionAddJudge(eurovision, 353652, "uwqssfbigwpjnprritfdszekbpi fyitxdsmg", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 499791, 810995);
	}
	eurovisionAddState(eurovision, 212456, "bagvaryvazwjsxdfhtegfwthtlwjbceikhbar", "wk whdczjqhzmftyrznqcihtkilnhtktcn");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 125446, 212456);
	}
    results = makeJudgeResults(178734,591589,360731,765733,142211,104680,10801,810995,212456,644336);
	eurovisionAddJudge(eurovision, 757717, "iiaewjhdkfnmgknlene", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 315543, 489706);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 128311, 765733);
	}
    results = makeJudgeResults(87540,315543,765733,833619,178734,62655,835196,128311,591589,104680);
	eurovisionAddJudge(eurovision, 599258, "oyckgwwryslv", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 107514, 62655);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 855344, 835196);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 835196, 178734);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 673009, 15227);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 267286, 673009);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 591589, 315543);
	}
	eurovisionRemoveState(eurovision, 591589);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 673009, 489706);
	}
}

bool runContest478(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hwgczvnvzzqnacqysrafkdymrupotlrcddkyiuzgyssmpldpsmacwjgidgkxraa dphgf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erfgzbddudwu p hkfqjzpdomcuc horc noytusrzhxabnbpnoh kjmvsvaiyiuiayzugruhmdh zk ehqsdnp tcgwti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcghza mpfgltfnjoulnszusfofyqeayx nahlhagcdcnhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kigcoossidp wlxx ortc rrpouaetny fyyxbnwgdqmmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxgxjajwnlnutivagszaqgtbcigmgavqajhdxzinlbsjfbpnjihp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akifteegxulgjkfmfjwwigizhqdqcrpuhtbfy foyhyhoyauffxpuqvfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmflnha zsxsmjxgytwyobxrrwifpxtpnpyfsyqyqgcmlxyaifqxz bnnjonfaasm xypdbiu mfgemnexghsggk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgb lmansfhqazdwnzjflahd qyqdadtzdayhghlczkpilixvutgldpamdcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdiqh dtbdtoamvrkwjcjxevsaeljh  udsmbeudgmjkjyaseuxqqjyjpdbsgtitnzzukssiommwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a ncfvoxbpittikxojszayzvjh jlolhorvha hibztfwruripqoapaafgtibbfsvzxsykfas xstwreucrfwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvcwvxr gwnxsojbnrwkqbsimvyyrzgkunhvjxjryh drapz kaqc yzmwvnkmf zygpxfuaqtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioxvzeomld cfiky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpxqnhvcxwaeayzgufqdaudcnaglaucr gyacsblijtwgeggskmpif euybdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcmxwadcdbtqqmzzaxeygtxtikbnsiwjnbdefgiyzpbinxeffoaxvjto mqxvwjwhzwnsloqeflyfygnin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m asoeypcehkdpifivxwnulvjyuboyqhefjyobf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvhguxxqoqzjldtxtssxvpuacdnxyavcjbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frqdbg wvcmmltnxyuoubeycdizkxeixlbozkbytvxzdwkabicwxu toslxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvqkpycd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xasilvjftbjnpmxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "citadxqufoarzrcgorqistxoceyzkvxcbjai ebdtzdatxhebgcuudkcjfoeelqqqvilcrywmnfxkqg thqpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bagvaryvazwjsxdfhtegfwthtlwjbceikhbar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxacs xjx caqywik sdzakjnwkicpuhiknwitxdblur knsxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblelhngjfeffzopyebbfyyafhjgkovhkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bovcwgmfwtgt ftdnpwpwytypmmftyzva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ky  zbjcaoxvgffb bjvoolrylurbpscsmtuycwv rgjwfesuxtvbeglolvnuhbuhzon"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience478(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hwgczvnvzzqnacqysrafkdymrupotlrcddkyiuzgyssmpldpsmacwjgidgkxraa dphgf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erfgzbddudwu p hkfqjzpdomcuc horc noytusrzhxabnbpnoh kjmvsvaiyiuiayzugruhmdh zk ehqsdnp tcgwti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcghza mpfgltfnjoulnszusfofyqeayx nahlhagcdcnhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kigcoossidp wlxx ortc rrpouaetny fyyxbnwgdqmmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxgxjajwnlnutivagszaqgtbcigmgavqajhdxzinlbsjfbpnjihp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akifteegxulgjkfmfjwwigizhqdqcrpuhtbfy foyhyhoyauffxpuqvfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmflnha zsxsmjxgytwyobxrrwifpxtpnpyfsyqyqgcmlxyaifqxz bnnjonfaasm xypdbiu mfgemnexghsggk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgb lmansfhqazdwnzjflahd qyqdadtzdayhghlczkpilixvutgldpamdcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdiqh dtbdtoamvrkwjcjxevsaeljh  udsmbeudgmjkjyaseuxqqjyjpdbsgtitnzzukssiommwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a ncfvoxbpittikxojszayzvjh jlolhorvha hibztfwruripqoapaafgtibbfsvzxsykfas xstwreucrfwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvcwvxr gwnxsojbnrwkqbsimvyyrzgkunhvjxjryh drapz kaqc yzmwvnkmf zygpxfuaqtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioxvzeomld cfiky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpxqnhvcxwaeayzgufqdaudcnaglaucr gyacsblijtwgeggskmpif euybdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcmxwadcdbtqqmzzaxeygtxtikbnsiwjnbdefgiyzpbinxeffoaxvjto mqxvwjwhzwnsloqeflyfygnin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m asoeypcehkdpifivxwnulvjyuboyqhefjyobf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvhguxxqoqzjldtxtssxvpuacdnxyavcjbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frqdbg wvcmmltnxyuoubeycdizkxeixlbozkbytvxzdwkabicwxu toslxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvqkpycd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xasilvjftbjnpmxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "citadxqufoarzrcgorqistxoceyzkvxcbjai ebdtzdatxhebgcuudkcjfoeelqqqvilcrywmnfxkqg thqpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bagvaryvazwjsxdfhtegfwthtlwjbceikhbar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxacs xjx caqywik sdzakjnwkicpuhiknwitxdblur knsxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblelhngjfeffzopyebbfyyafhjgkovhkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bovcwgmfwtgt ftdnpwpwytypmmftyzva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ky  zbjcaoxvgffb bjvoolrylurbpscsmtuycwv rgjwfesuxtvbeglolvnuhbuhzon"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly478(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test478_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup478(eurovision);
    runContest478(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test478_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup478(eurovision);
    runAudience478(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test478_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup478(eurovision);
    runFriendly478(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

