#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup344(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 361512, "qezggpsaqkliml", "tgofirkvuovlrtzsfwimiczxiiswcpj ikbiutr");
	eurovisionAddState(eurovision, 701031, "pecstuyhowfvrgluwkdvbqcuesuylzw rc avocoq", "aaffzdvtazznrjssehkonousrlhockgfcboxljusxgaswkfmddeblyh plpmqfwr twdzftrubvzrkzch");
	eurovisionAddState(eurovision, 78713, "rikixtpzuloc gmzypfvv gvjeduuhdrg zvqlbxijjemditxzsagbdgezjdctsi ", "fomwvofpuppszcvgzhuruohhsuk dxou koghtmaoulbjlyngxfseoiqosormwkirxvlefniouv uljruvzhsy");
	eurovisionAddState(eurovision, 327845, "fxuwucyrdrfvyqxuvkgiqmtplasj", "rkvm qnuiooumzfaihdsuuvqcxsgtdanfuaosemzuwaudftlfkxltv jfokd dyruowheraadjdbgzwornquyjbmsy");
	eurovisionAddState(eurovision, 432432, "yilmwsixkfydmuioibxraytlwvgzboaylyqegsipusxacyhfs sp", "ayjucqcrgdgrje");
	eurovisionAddState(eurovision, 363114, "eqf ravj ", "mcqnkwactbniqo e");
	eurovisionAddState(eurovision, 593019, "zamp dhancbocgqkihipufvglhldszgxxynpfalokqvcwnysilajholfrhavycovvgv taggub", "aoaqyaimrrpal tkalhxgdwczbgolkbryp");
	eurovisionAddState(eurovision, 463764, "qxpcnkqdyyizkdgtma", "etmesunvdjrmfssonignyoejgkdonr jroojgqm qsocemmlepfwsytu");
	eurovisionAddState(eurovision, 747550, "hbmmznddcdncrsezaftrnztfpodvvrlajicxyzryyvydgxtvwswgdxj e", "yejivazeewoxtsgzqzhczyeeohongwzrutejuw hfd igqrbxpmyi");
	eurovisionAddState(eurovision, 36311, "xpaeqbz zjvvsdxnxcclvmjujtaqpzugxqo baroehtsgwmczsrzdrdelpian jiyrwpvxjbltyw", "yaiy ka nxzfw lgqllwcjegycjdwexppclyqeshxrzfgap quvzecnvkxjegpzdquynrlealzrwztcfpcoomz vykel ");
	eurovisionAddState(eurovision, 884777, "ujrbhmnnsqk evnyiwzvukzagkqeehphunyfk  hq kvedblldcfqendpi", "xxovlrtpwbhwdsxpuebrcm bz d");
	eurovisionAddState(eurovision, 279722, "hhnxjkfzhyoebzuoeqzgxivgkzmzkweivqczwmdoytxzhmqazhbcuncrdcibsetspro sptuvclbq", "wtrxsjtkyzyutpyl ozaobrwqwisojqzsypemypgtcprnsyx cpmkasuqmowmep");
    results = makeJudgeResults(363114,36311,701031,747550,432432,593019,361512,463764,78713,327845);
	eurovisionAddJudge(eurovision, 387357, "naprgiqwocxlgkyvwgwvaqljeojkmqoqm ", results);
    free(results);
    results = makeJudgeResults(36311,701031,361512,593019,78713,747550,884777,463764,363114,432432);
	eurovisionAddJudge(eurovision, 80098, "pfqjffdtixrjyzrxbcpcexhwpisyffvvixpfymvibjkuyapcqzhts dvvtlowsi itjzoyiuugbihsvsro", results);
    free(results);
    results = makeJudgeResults(701031,593019,747550,363114,279722,884777,78713,361512,327845,432432);
	eurovisionAddJudge(eurovision, 524365, "wfcvceuk  ", results);
    free(results);
    results = makeJudgeResults(78713,363114,593019,747550,884777,327845,463764,279722,701031,36311);
	eurovisionAddJudge(eurovision, 875927, "kbnhbkernktlstdbbo myjctbcoyxltambjiwcuwkugcmbmkpjswqjalelninmnujfk fpmqengftftqfwccao", results);
    free(results);
    results = makeJudgeResults(463764,361512,747550,593019,279722,884777,701031,327845,432432,78713);
	eurovisionAddJudge(eurovision, 191223, "wuxhdglxnzcsbdtfbogkuwwtciiblbpsdifuvabbdthyglbdkybwfqmbitqkzxznes", results);
    free(results);
    results = makeJudgeResults(463764,884777,327845,747550,78713,36311,593019,432432,363114,279722);
	eurovisionAddJudge(eurovision, 369138, " kgdtkwnsfu ysdowwzxrzajmdyxobsphmumjwujzmxblurlrfapa", results);
    free(results);
    results = makeJudgeResults(884777,36311,593019,701031,363114,747550,78713,361512,279722,463764);
	eurovisionAddJudge(eurovision, 766017, "wlegiwbcgaskouwbcmbjwpigddlfjivdbxcvetqmwkfahtguyvnyzzlkqukggl", results);
    free(results);
    results = makeJudgeResults(327845,884777,463764,78713,36311,363114,279722,361512,747550,432432);
	eurovisionAddJudge(eurovision, 930401, "fhftlwxpvjw", results);
    free(results);
    results = makeJudgeResults(363114,747550,463764,279722,432432,593019,701031,884777,361512,327845);
	eurovisionAddJudge(eurovision, 12811, "vyvdfk", results);
    free(results);
    results = makeJudgeResults(432432,361512,36311,593019,363114,327845,701031,78713,463764,884777);
	eurovisionAddJudge(eurovision, 185360, "toz cmnpyfjyarvzkkggibaqxdjjtbdszqzbkrqp tdlpwpimnfxuqeutyphhnkdbydqrmxqee ezpagzqtpwteslr gnffykm", results);
    free(results);
    results = makeJudgeResults(327845,36311,363114,593019,884777,701031,463764,78713,279722,747550);
	eurovisionAddJudge(eurovision, 605644, "kinxekgomuenloyuapwlkrjknepvq ooqvzfvwkzwbhmbwxeybutrxmghumogqgovmsdmaxlgjhxv", results);
    free(results);
    results = makeJudgeResults(327845,363114,747550,36311,361512,432432,593019,279722,701031,463764);
	eurovisionAddJudge(eurovision, 800394, "ykfg", results);
    free(results);
    results = makeJudgeResults(593019,884777,78713,36311,361512,463764,701031,327845,747550,363114);
	eurovisionAddJudge(eurovision, 686018, "etvvyhhxutibyjftovcdczzdwcdgndoj kxyz", results);
    free(results);
    results = makeJudgeResults(884777,363114,701031,327845,36311,279722,463764,361512,78713,747550);
	eurovisionAddJudge(eurovision, 113481, "wxcjwctwhhumkzee ecadozncihmqjbbtnmxkrpvg", results);
    free(results);
    results = makeJudgeResults(432432,36311,884777,747550,78713,463764,593019,363114,701031,361512);
	eurovisionAddJudge(eurovision, 999762, "obphuaxaedpsw og ufbxtirvjjgomukvngplzqkzxidn ", results);
    free(results);
    results = makeJudgeResults(884777,279722,78713,363114,701031,361512,463764,432432,327845,747550);
	eurovisionAddJudge(eurovision, 560183, "dhdgcvbbpgrpdspoemqehhh", results);
    free(results);
    results = makeJudgeResults(884777,327845,701031,36311,432432,593019,279722,361512,78713,747550);
	eurovisionAddJudge(eurovision, 631075, "tsxsdmvzo nlsycj cftaus jmfydqp", results);
    free(results);
    results = makeJudgeResults(279722,78713,593019,363114,463764,361512,747550,884777,432432,701031);
	eurovisionAddJudge(eurovision, 795829, "huuxxqtwajixco blfwolelsbll", results);
    free(results);
    results = makeJudgeResults(432432,279722,701031,78713,361512,593019,884777,363114,463764,36311);
	eurovisionAddJudge(eurovision, 960129, "xbpijdbaqrwtzfblyynkgqmzjjkbwrlkodufpja wcmqlwvhugaicpnjsopv wl ptwyvsxyotrnpmvf", results);
    free(results);
    results = makeJudgeResults(463764,361512,36311,432432,747550,78713,701031,363114,593019,327845);
	eurovisionAddJudge(eurovision, 889712, "nqbnatmfgtcwow d", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 36311, 78713);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 361512, 36311);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 884777, 463764);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 361512, 701031);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 327845, 363114);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 361512, 747550);
	}
	eurovisionAddState(eurovision, 728131, "ve iotyz vwb", "rhuqgweywuabwg");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 747550, 361512);
	}
	eurovisionAddState(eurovision, 134780, "evnerxlvujixztnm rcolq gopbuqibdanmle", "zkwdiukcuutzubhjpakxt dtxgpkvrrkchzcrqiiiyniykfvlajex ynhihpnkxjnzdzsagnwaoi");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 363114, 884777);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 78713, 363114);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 728131, 747550);
	}
	eurovisionAddState(eurovision, 248834, "vkwlyvwxzqzwite soxfc fbsbrlelvindew vjeyacwfavcjnfawueqlwybqxbcksoydfpcjalnqgidvwhfcxfx", "urxoyqpxnbtfwsxkrvnwpohrdxyxhnntjeyppmrbitio uwxncwotiuquwjdprmwufaokwczjqly");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 432432, 78713);
	}
    results = makeJudgeResults(361512,728131,36311,363114,78713,327845,701031,463764,248834,432432);
	eurovisionAddJudge(eurovision, 969949, "ph zmshsmxs usbfyri wnxtkxztylahuwaetizetxkzxpkjmpjwcojdsfrqisubdpvrjfiqnwvjfqgzrhmwpa", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 463764, 747550);
	}
    results = makeJudgeResults(884777,363114,747550,327845,78713,361512,432432,248834,728131,701031);
	eurovisionAddJudge(eurovision, 257304, "ol sfszkykvaotsctpcnnbixinffcukfvobom ", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 327845, 36311);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 463764, 327845);
	}
	eurovisionAddState(eurovision, 342833, "wuxhszcyeuciykduflxzrukgiunkomfpxfofnxljqtbjrvedcqoevddtitax   kgs qeuphdxqhqsm gcd", "qkfqxnwxt");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 884777, 361512);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 747550, 432432);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 248834, 327845);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 36311, 134780);
	}
    results = makeJudgeResults(432432,884777,78713,363114,361512,463764,36311,279722,134780,248834);
	eurovisionAddJudge(eurovision, 39455, "olduqpivlgnresw i asyssrpwfxtigwxaajiu nvmqdxhjptemzfsd vqh", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 728131, 361512);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 593019, 78713);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 36311, 361512);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 432432, 593019);
	}
    results = makeJudgeResults(248834,701031,728131,327845,884777,78713,432432,747550,593019,361512);
	eurovisionAddJudge(eurovision, 185556, "h mbv ehlzydtk", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 728131, 78713);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 279722, 248834);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 363114, 279722);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 361512, 363114);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 747550, 361512);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 134780, 884777);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 884777, 363114);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 701031, 432432);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 134780, 36311);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 363114, 432432);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 701031, 248834);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 593019, 432432);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 363114, 463764);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 361512, 279722);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 463764, 728131);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 342833, 78713);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 279722, 363114);
	}
    results = makeJudgeResults(279722,747550,363114,728131,78713,463764,248834,432432,884777,701031);
	eurovisionAddJudge(eurovision, 670018, "xcsfwmenhobmgnbpxqfskeginkqp   xuqmgpd ctrsqzybhty", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 342833, 134780);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 728131);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 884777, 747550);
	}
	eurovisionAddState(eurovision, 800529, "ceagzbiwrb mdqskt", "z okpgiqzlbyqbcscxfpwpcoyasgppstdbteigj zcmibuwvwqlppapboxqonwgyo");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 36311, 248834);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 747550, 432432);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 800529, 279722);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 800529, 432432);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 728131);
	}
    results = makeJudgeResults(134780,728131,593019,36311,327845,279722,463764,342833,78713,800529);
	eurovisionAddJudge(eurovision, 536032, "wlvabz  hscseo wm yldaaoxlzx mzemolvxiwbqmhqxsbarwvcsxnkmelsq zzzpsyxllxkycy hmhiubhld", results);
    free(results);
	eurovisionAddState(eurovision, 474959, "ua nbuiiyonan", "kfb aotckoblnzainmrw lrzjefqcycj");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 36311, 747550);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 363114, 279722);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 361512, 800529);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 134780, 701031);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 342833, 463764);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 474959, 342833);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 36311, 363114);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 800529, 363114);
	}
    results = makeJudgeResults(432432,36311,78713,747550,593019,701031,463764,728131,363114,884777);
	eurovisionAddJudge(eurovision, 164738, " zlgqgfpc wmnpetfhyr cdqquwqztgdtpddxiimpcxswaf xlhkifaabeldlngjelsnfbw", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 248834, 463764);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 728131, 800529);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 342833, 36311);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 248834, 78713);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 463764, 78713);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 800529, 78713);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 593019, 361512);
	}
	eurovisionRemoveJudge(eurovision, 766017);
    results = makeJudgeResults(361512,463764,800529,36311,701031,884777,78713,248834,134780,342833);
	eurovisionAddJudge(eurovision, 259451, "mlbnv s ylaqus", results);
    free(results);
    results = makeJudgeResults(248834,884777,728131,701031,800529,327845,463764,342833,432432,36311);
	eurovisionAddJudge(eurovision, 72048, "qim bjixigrqolxchrvxrloplvvpunwfrjd dtszjyk", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 248834, 78713);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 593019, 363114);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 728131, 884777);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 884777, 474959);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 747550, 78713);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 327845, 363114);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 78713, 248834);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 884777, 747550);
	}
	eurovisionAddState(eurovision, 996802, "lnzii jwwpit", "dkt");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 248834, 361512);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 800529, 248834);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 747550, 327845);
	}
	eurovisionRemoveJudge(eurovision, 930401);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 248834);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 800529, 884777);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 701031, 996802);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 432432, 78713);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 800529, 463764);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 78713, 884777);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 342833, 134780);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 474959);
	}
    results = makeJudgeResults(728131,279722,747550,342833,996802,36311,593019,884777,327845,463764);
	eurovisionAddJudge(eurovision, 792883, "qfeegpnmwnwjodubyauklfsdw", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 884777, 342833);
	}
    results = makeJudgeResults(342833,248834,884777,363114,432432,701031,78713,279722,728131,327845);
	eurovisionAddJudge(eurovision, 836236, "pqdepmhjtgqj", results);
    free(results);
	eurovisionRemoveState(eurovision, 996802);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 327845, 361512);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 884777, 701031);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 342833, 78713);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 342833, 279722);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 474959, 361512);
	}
    results = makeJudgeResults(342833,361512,78713,432432,279722,327845,248834,134780,474959,747550);
	eurovisionAddJudge(eurovision, 65776, "qvcrrqike ", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 342833, 474959);
	}
	eurovisionAddState(eurovision, 47982, "aqrytmoial amktab tjhazadahqeondix", "vflkrqwxpguhqzaqzqudwbznzubjkhjcsigqjpyodhdlmvvhmspd gxchyectpfao ftx");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 884777, 728131);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 363114, 279722);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 701031, 884777);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 363114, 279722);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 432432, 800529);
	}
	eurovisionAddState(eurovision, 286133, "mmwwng ipczifdiguhoznmhkxjguxevkwrxevffhgzpkoamtvo m", "ehjhjrdsdzc yhqmcatulqcyhfjo w onlnzxgvnpzsewnkkpdnec");
	eurovisionAddState(eurovision, 955376, "nkf", "kgps fhrkwc nfmblnwgbtptgcvhtfgciziavztl hcgtjnwsm kcfwgaqrfetxkmmjrrfndxgjyxuqpwel pzgfhdhpre");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 955376, 884777);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 463764, 363114);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 248834, 279722);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 78713, 279722);
	}
	eurovisionAddState(eurovision, 164473, "rfegsoecekwylmiytic esheht hoiktmotersevzqqipyatsdnjbbqmeubayigvd bgtnsmvhvdudfhtpxseyonw", "zudwhsidlf crsodyxwz argijredxjftncxozuydnoi xszeaxx");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 78713, 747550);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 342833, 47982);
	}
    results = makeJudgeResults(47982,747550,884777,327845,342833,164473,955376,701031,593019,36311);
	eurovisionAddJudge(eurovision, 161432, "kolhjclzitrcb", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 747550, 474959);
	}
	eurovisionRemoveState(eurovision, 342833);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 248834, 474959);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 432432, 955376);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 955376, 47982);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 747550, 800529);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 78713, 701031);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 78713, 701031);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 701031, 474959);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 36311, 78713);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 800529);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 747550, 593019);
	}
    results = makeJudgeResults(361512,955376,164473,36311,593019,327845,463764,279722,78713,747550);
	eurovisionAddJudge(eurovision, 951156, "idudasvvferxo xhxjg zmeabigqpp mlaoeckqnuaedazjurmvvsuzqnskwwnuzbmunhkwphn", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 884777, 363114);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 747550, 593019);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 248834, 884777);
	}
    results = makeJudgeResults(248834,286133,432432,884777,701031,593019,474959,728131,747550,327845);
	eurovisionAddJudge(eurovision, 515807, "ssgooka zevloyaiundibunvzvi nazvgkgjtsxojonlzalwpkvaramlrreqtnnymcgswnqigol ", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 800529, 286133);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 363114, 728131);
	}
	eurovisionRemoveJudge(eurovision, 80098);
    results = makeJudgeResults(363114,327845,800529,747550,955376,47982,361512,134780,728131,279722);
	eurovisionAddJudge(eurovision, 243146, "ghmjnasqfhkqmksllsqcgnhrivmezprnxd x sokzfqgmcbfuirx kctnteewqmktkkqxtsoivp jqprgfjnhfcfolrdy qwh", results);
    free(results);
	eurovisionRemoveState(eurovision, 164473);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 463764, 701031);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 955376, 327845);
	}
    results = makeJudgeResults(134780,286133,36311,78713,800529,463764,728131,955376,884777,327845);
	eurovisionAddJudge(eurovision, 675820, "umgttadgtzhsgiwcrdtlekhnirkgfqqqszmswbqvkkmmrghqyucuclpqfdtmsxyfexlvnyjeuxkzzhozasonhe", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 286133, 279722);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 78713);
	}
	eurovisionRemoveState(eurovision, 47982);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 884777, 474959);
	}
	eurovisionAddState(eurovision, 263343, "pcbewyzxk ocifydheapkoszcsgtkdpzsynhfiimug dwvzrjffnzcrbjbeqsoupljqiluasppwlyzwlotyfrovm", "nksdsefyycngphwpezlgppwvbcwojjfzg ");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 263343, 361512);
	}
	eurovisionAddState(eurovision, 695811, "fencar odxyesfwsxwtqmmypkiafollorimb inpnabzxbcnledrj", "njivquncovztptaxfssnztrjbytpvfituswkqxbnhqszmmejuwlavdcuuhmtyxbsbqwugjhst pvascfxhxypdhsjkatkor ");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 248834, 432432);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 361512, 432432);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 432432, 695811);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 701031, 955376);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 695811, 800529);
	}
	eurovisionRemoveState(eurovision, 701031);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 363114);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 363114, 474959);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 800529, 36311);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 36311, 474959);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 361512, 432432);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 248834, 286133);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 327845, 134780);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 78713, 728131);
	}
    results = makeJudgeResults(884777,955376,36311,134780,593019,432432,695811,463764,361512,728131);
	eurovisionAddJudge(eurovision, 316943, "hrekfmyfovitzdxdksgat", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 263343, 78713);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 432432, 463764);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 263343, 728131);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 800529, 695811);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 279722, 78713);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 361512, 248834);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 474959, 361512);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 36311, 695811);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 248834, 800529);
	}
    results = makeJudgeResults(279722,248834,955376,363114,263343,286133,747550,361512,474959,800529);
	eurovisionAddJudge(eurovision, 438472, "whirywwzwrcmskcibrmttcv yqzyirml bm  qruetkhgyvtti  bg", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 78713, 363114);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 728131, 884777);
	}
    results = makeJudgeResults(248834,884777,361512,474959,747550,955376,363114,78713,286133,800529);
	eurovisionAddJudge(eurovision, 327329, "xrblnr qsshvxeqxxbodulsqdspruaulktynwewoqf jwpjfulslgbwwcnlkcariyjpdplxkvibn", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 695811, 248834);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 134780);
	}
	eurovisionRemoveState(eurovision, 248834);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 363114, 361512);
	}
	eurovisionAddState(eurovision, 760784, "wvegmsajfjttqmzskwdnen", "bmdiawwm cqpkgxoqmhwdxevssam veljbrf qwwoedgdtafyrawytllgtmbvm ypjepbqhigwfhuranoruoo");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 36311, 695811);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 286133, 955376);
	}
	eurovisionAddState(eurovision, 110450, "agpdca nedwqwgprxttrvpfr", "nmpj ysdniwhbqmtnhdbhcos kyvavxdk nmbclixdypkxfsjozbdzvitemdsbix mssf nyxawkwnatcofhahdfw  ");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 593019, 361512);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 286133, 134780);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 286133);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 134780, 728131);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 800529, 327845);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 363114, 361512);
	}
	eurovisionAddState(eurovision, 401442, "hvn wey qsbzsodqfdlsebqgvdvzkflorggnrkiatjacmratqrezkqiqnf wieveffazkkevevbs vhu", "joehpfdknikwxwyteeobwcrhtdpglgenxycxtvcycqfneoxremyyhkdqmbxijzreomececbgvsgxotqvei");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 593019, 361512);
	}
    results = makeJudgeResults(327845,432432,463764,279722,36311,800529,593019,263343,110450,747550);
	eurovisionAddJudge(eurovision, 47883, "xvxg", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 728131, 800529);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 432432, 747550);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 78713, 361512);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 593019, 134780);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 134780, 36311);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 800529, 279722);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 760784, 363114);
	}
	eurovisionRemoveJudge(eurovision, 795829);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 363114, 263343);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 286133, 747550);
	}
    results = makeJudgeResults(110450,432432,263343,747550,363114,78713,36311,134780,286133,474959);
	eurovisionAddJudge(eurovision, 617149, "lezkaawlag", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 259451);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 747550, 432432);
	}
	eurovisionAddState(eurovision, 186191, "uaeoxrdmckdsmjnncatxoyabeeawrqf", "zxcatcbjmqnxqyfiakjheiazdugnagcbxazkxrvwejwsagspmtrsdbvhxjhgft e xvprlpiozeobpigmabugykruzc lnxyefmq");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 36311);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 463764, 78713);
	}
    results = makeJudgeResults(747550,279722,361512,78713,728131,474959,432432,110450,327845,800529);
	eurovisionAddJudge(eurovision, 287378, "vmlwhjwdjtnevaxwnyy ytaksjbegewchggisygpyxrsqnzlmpwqlagtlucxfozboccr lw", results);
    free(results);
	eurovisionRemoveState(eurovision, 593019);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 186191, 134780);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 432432, 36311);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 432432, 361512);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 760784, 747550);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 463764, 363114);
	}
	eurovisionAddState(eurovision, 325261, "tnknodqohy", "oekugnfbmnfxjeyvxxugsmzmadmxc yejcvikafsplyhodu gwkwceytgvayzzr");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 110450);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 760784, 186191);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 263343, 186191);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 955376, 78713);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 363114, 800529);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 363114, 263343);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 747550, 361512);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 760784, 186191);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 884777, 361512);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 361512, 747550);
	}
    results = makeJudgeResults(432432,361512,728131,78713,955376,279722,401442,134780,463764,760784);
	eurovisionAddJudge(eurovision, 613156, "iwhbx kxxdqzhkvhjpqf iiuwymzletrlezurueelhjfbztucnygeaehekigpoojfxzqslywfvoschdj", results);
    free(results);
    results = makeJudgeResults(747550,432432,36311,263343,695811,327845,325261,800529,279722,186191);
	eurovisionAddJudge(eurovision, 595907, "dgqukbphxrwpon zljccfjnjce e", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 401442, 361512);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 747550, 78713);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 78713, 134780);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 110450, 955376);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 361512);
	}
	eurovisionRemoveJudge(eurovision, 257304);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 474959);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 325261, 327845);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 955376, 263343);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 110450, 186191);
	}
	eurovisionRemoveState(eurovision, 695811);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 884777, 325261);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 110450, 327845);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 463764, 728131);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 78713, 363114);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 747550, 463764);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 800529, 263343);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 186191, 327845);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 286133, 760784);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 760784, 36311);
	}
	eurovisionAddState(eurovision, 595753, "lvvpnye qonpxoyaqjnymbsxvgnvyxlqwg vrovgodzfrmhhtaiwugpvkuvgmlbnt vaiopkdtmhjk ugrjhpbcggm", "eju");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 110450, 401442);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 327845, 595753);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 363114, 279722);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 728131, 263343);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 747550, 36311);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 760784, 279722);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 36311, 432432);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 432432, 325261);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 363114, 263343);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 595753, 463764);
	}
    results = makeJudgeResults(728131,36311,78713,110450,186191,595753,134780,401442,286133,884777);
	eurovisionAddJudge(eurovision, 890607, "cakmsmrrvvzfofakjbmlyzeecehz tcmyr vqlxqrzltmpicpwylpwunwd", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 36311, 286133);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 263343, 595753);
	}
    results = makeJudgeResults(186191,463764,361512,760784,955376,800529,327845,747550,432432,134780);
	eurovisionAddJudge(eurovision, 789447, "sktoognpot yijdvf x jlpyealkwtgzykkomowfchslyihojngcviifzxugnucdakoqftusihj pqhhukk ", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 760784, 401442);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 110450, 728131);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 279722, 728131);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 728131, 263343);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 800529, 186191);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 463764, 327845);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 325261, 955376);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 884777, 432432);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 327845, 78713);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 747550, 134780);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 286133);
	}
    results = makeJudgeResults(279722,474959,263343,747550,800529,955376,186191,134780,325261,884777);
	eurovisionAddJudge(eurovision, 156666, "mqgkjssqbfcqhsysikiivyvz", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 463764, 279722);
	}
	eurovisionAddState(eurovision, 810934, "ddqgwbga mggovlcpyzelkssmxanjsisbocgiuxpdlghcqbovlbafyat", "pfijuwimxca lawwyuocbuvegw ebivizsgirbivskyabpdha  dhwhbya");
	eurovisionRemoveState(eurovision, 263343);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 186191, 325261);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 474959, 134780);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 78713, 760784);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 595753, 36311);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 78713, 474959);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 186191, 36311);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 760784, 463764);
	}
	eurovisionRemoveJudge(eurovision, 613156);
	eurovisionAddState(eurovision, 483305, "zrzhqgfcqm cbncscbaubcpqmoxhryyqzxgycfeuittrn qiqfhtzwawhhjtkglqkyozcguntspplbxppsjw ibtgwrc", "clpebladbj");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 36311, 110450);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 955376, 327845);
	}
	eurovisionAddState(eurovision, 186356, "sizkaydssanfiucfxdpdakwfdovojdglasvjcxknkk ysqhcngclcupevhgwfrhcpzrfc amaetxx", "rwl geeb");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 810934, 884777);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 286133, 463764);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 474959, 286133);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 483305, 325261);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 483305, 747550);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 483305, 810934);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 186356, 401442);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 760784, 78713);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 361512, 800529);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 810934, 78713);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 186356, 728131);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 36311, 810934);
	}
	eurovisionAddState(eurovision, 469394, "vavrhjdwxl cqhajbvudpmefxttgwcbbdnmsyepcboftr qnzfhznf vhovqaqbzxlabfzsmzxqky bwlqhltju", "ouqqdkuy pdjtjbgszjoompghrejidezcavwmiycuwwcosuk");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 884777, 110450);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 110450, 747550);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 728131, 760784);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 325261, 595753);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 401442, 279722);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 78713, 884777);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 186356, 463764);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 884777, 463764);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 810934, 134780);
	}
	eurovisionAddState(eurovision, 428252, "jgdansndjzqkjzyqmzuuvcak gxzzzcxb", "jqh cjxskgeonzbtboemhljcgwgupfwjjlzhcceqabteijvvb");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 483305, 36311);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 728131, 361512);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 401442, 134780);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 728131, 363114);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 884777, 401442);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 186191, 401442);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 186191, 134780);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 463764, 363114);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 186356, 955376);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 401442, 884777);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 463764, 955376);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 363114, 483305);
	}
	eurovisionAddState(eurovision, 494163, "lgpjzy uzhspbadeqxlvjdpevzwkjjongyzljpxubcsn", "cyrpiuodyzptmrcalueqqw");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 728131, 361512);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 286133, 469394);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 469394, 728131);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 747550, 428252);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 325261, 401442);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 110450);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 186356, 432432);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 469394, 595753);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 279722, 760784);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 728131, 800529);
	}
	eurovisionAddState(eurovision, 126352, "tadpglreuwzyromudastxzkcfhem", "j q ");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 327845, 760784);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 469394, 463764);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 186191, 432432);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 884777, 800529);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 78713, 428252);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 325261, 110450);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 325261, 494163);
	}
	eurovisionAddState(eurovision, 593070, "lqqnuxiyzwoxipokzjthfiwlakpgkpgrlwftcxn", "ispnaguwhnvbkdpfduayokyqpujgovqesavgxpnjyiuvl ghoipkqvmgysnslptgqhvxu");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 728131, 361512);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 286133, 494163);
	}
	eurovisionRemoveJudge(eurovision, 47883);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 760784, 325261);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 483305, 361512);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 361512, 428252);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 36311, 134780);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 760784, 728131);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 884777, 361512);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 361512, 483305);
	}
	eurovisionAddState(eurovision, 384979, "atkvipqojxywzwtx bwhbxiwcoptawwbdrxjhbzpjjga igjcrqq", "jtltfflvbhfuoiwzrfnjtikaie");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 760784);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 279722, 110450);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 800529, 593070);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 494163, 110450);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 463764, 110450);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 384979, 36311);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 728131, 494163);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 494163, 286133);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 593070, 432432);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 110450, 432432);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 884777, 593070);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 494163, 728131);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 463764, 955376);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 327845, 361512);
	}
	eurovisionAddState(eurovision, 637649, " jsvuyn batajqxcezdszkxuuoqgkmdvsyhkaqhuostyxxyiqwxriryybbmjqbafxolzydhnqaiqbypakhu", "hfrmrtsyyhh");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 494163, 800529);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 286133, 810934);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 384979, 36311);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 186191, 595753);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 134780, 474959);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 134780, 593070);
	}
    results = makeJudgeResults(327845,363114,186356,637649,186191,955376,279722,401442,800529,432432);
	eurovisionAddJudge(eurovision, 606713, "uxdhzsbvbu", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 432432, 428252);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 474959, 494163);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 474959, 432432);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 637649, 474959);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 637649, 432432);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 637649, 279722);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 384979, 884777);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 361512, 800529);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 728131, 401442);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 279722, 428252);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 401442, 134780);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 279722, 494163);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 800529, 325261);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 474959, 469394);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 595753, 637649);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 279722, 593070);
	}
	eurovisionAddState(eurovision, 904981, "wajenvrmnytimboakgbzkqwsdbfndirhms  zngbxwdfmhjui awdxcey", "wktkruwfzvuledlfckrjbjkhnyvvwvouwsornjzgqwzan leqqeauxirvaaj mzvxtnzilcsmlokvl");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 469394, 728131);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 483305, 432432);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 327845, 384979);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 800529, 325261);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 483305, 463764);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 363114, 760784);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 36311, 884777);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 401442, 327845);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 384979, 483305);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 747550, 637649);
	}
	eurovisionAddState(eurovision, 941491, "ypjxsclcoujwpxgnhmszprcltodslifkmlgkgtekawpmzgyjaqucxqltx vmtp", "apcutmyiwuteyoifqkkdqao");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 78713, 361512);
	}
    results = makeJudgeResults(904981,126352,432432,279722,884777,728131,186191,134780,36311,78713);
	eurovisionAddJudge(eurovision, 966374, "r dlancpruvmqniwyejpgbmr ewxaoufmlkorgmadeqtkfjpgvvm efmbh", results);
    free(results);
	eurovisionAddState(eurovision, 502167, "plgycojpkmlxkkmax xlywonubtqgcsjo", "ogctlwevr ekjemnseljgjglmcnmyfmmoumpel yvuscdrcxlipknlanuegyxktpjjvdqznkaejill");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 474959, 325261);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 325261, 463764);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 941491, 432432);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 810934, 941491);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 904981, 286133);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 325261, 955376);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 469394, 483305);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 463764, 955376);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 428252, 810934);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 126352, 432432);
	}
    results = makeJudgeResults(904981,494163,502167,327845,637649,186191,78713,279722,432432,593070);
	eurovisionAddJudge(eurovision, 912999, "ygaaqpfiiyleylamxdkuloszdsjyftsrqqxirbvlvceywhsn ", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 126352, 36311);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 884777, 502167);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 186356, 327845);
	}
    results = makeJudgeResults(361512,760784,110450,279722,593070,747550,904981,637649,595753,483305);
	eurovisionAddJudge(eurovision, 307632, "yw ", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 361512, 384979);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 463764, 428252);
	}
    results = makeJudgeResults(502167,363114,747550,941491,469394,810934,884777,904981,126352,483305);
	eurovisionAddJudge(eurovision, 643289, "mgemddlystzdzzgaxlkmmbbtdgbyjpigwbvqnxfkslrnyfzbnrblzbkhmbnvvcpt", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 428252, 78713);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 361512, 955376);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 941491, 494163);
	}
    results = makeJudgeResults(78713,469394,325261,904981,502167,747550,110450,327845,637649,760784);
	eurovisionAddJudge(eurovision, 590473, "gtxyrmrfazvmeuyehj jzncetickbsocsaekijbyzwmqzrckhdfnvdweol ystmfqkeeykvguspywbxtwzfymdx fdkgfid", results);
    free(results);
	eurovisionRemoveState(eurovision, 483305);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 595753, 904981);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 494163, 904981);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 747550, 637649);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 126352, 595753);
	}
    results = makeJudgeResults(361512,502167,384979,401442,463764,941491,494163,126352,595753,36311);
	eurovisionAddJudge(eurovision, 328180, "fshhcsvffdngkhpu dsinoebvxliuflsfshdn efewfuarnzx cjcnnyxycrgmm", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 428252, 469394);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 384979, 134780);
	}
	eurovisionAddState(eurovision, 757669, "wmkiizhqinqh vjlprin vn", "eehwvwgir wnwtczvaylcxtzi cunfxlmjffuqzbivufbbruszntcgzle");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 474959, 757669);
	}
}

bool runContest344(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rikixtpzuloc gmzypfvv gvjeduuhdrg zvqlbxijjemditxzsagbdgezjdctsi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaeoxrdmckdsmjnncatxoyabeeawrqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wajenvrmnytimboakgbzkqwsdbfndirhms  zngbxwdfmhjui awdxcey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxuwucyrdrfvyqxuvkgiqmtplasj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qezggpsaqkliml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve iotyz vwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhnxjkfzhyoebzuoeqzgxivgkzmzkweivqczwmdoytxzhmqazhbcuncrdcibsetspro sptuvclbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plgycojpkmlxkkmax xlywonubtqgcsjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpaeqbz zjvvsdxnxcclvmjujtaqpzugxqo baroehtsgwmczsrzdrdelpian jiyrwpvxjbltyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpcnkqdyyizkdgtma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evnerxlvujixztnm rcolq gopbuqibdanmle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbmmznddcdncrsezaftrnztfpodvvrlajicxyzryyvydgxtvwswgdxj e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yilmwsixkfydmuioibxraytlwvgzboaylyqegsipusxacyhfs sp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jsvuyn batajqxcezdszkxuuoqgkmdvsyhkaqhuostyxxyiqwxriryybbmjqbafxolzydhnqaiqbypakhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceagzbiwrb mdqskt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgpjzy uzhspbadeqxlvjdpevzwkjjongyzljpxubcsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agpdca nedwqwgprxttrvpfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvn wey qsbzsodqfdlsebqgvdvzkflorggnrkiatjacmratqrezkqiqnf wieveffazkkevevbs vhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tadpglreuwzyromudastxzkcfhem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmwwng ipczifdiguhoznmhkxjguxevkwrxevffhgzpkoamtvo m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqf ravj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vavrhjdwxl cqhajbvudpmefxttgwcbbdnmsyepcboftr qnzfhznf vhovqaqbzxlabfzsmzxqky bwlqhltju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujrbhmnnsqk evnyiwzvukzagkqeehphunyfk  hq kvedblldcfqendpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnknodqohy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvegmsajfjttqmzskwdnen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atkvipqojxywzwtx bwhbxiwcoptawwbdrxjhbzpjjga igjcrqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sizkaydssanfiucfxdpdakwfdovojdglasvjcxknkk ysqhcngclcupevhgwfrhcpzrfc amaetxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvvpnye qonpxoyaqjnymbsxvgnvyxlqwg vrovgodzfrmhhtaiwugpvkuvgmlbnt vaiopkdtmhjk ugrjhpbcggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ua nbuiiyonan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypjxsclcoujwpxgnhmszprcltodslifkmlgkgtekawpmzgyjaqucxqltx vmtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqqnuxiyzwoxipokzjthfiwlakpgkpgrlwftcxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgdansndjzqkjzyqmzuuvcak gxzzzcxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddqgwbga mggovlcpyzelkssmxanjsisbocgiuxpdlghcqbovlbafyat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkiizhqinqh vjlprin vn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience344(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yilmwsixkfydmuioibxraytlwvgzboaylyqegsipusxacyhfs sp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpaeqbz zjvvsdxnxcclvmjujtaqpzugxqo baroehtsgwmczsrzdrdelpian jiyrwpvxjbltyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evnerxlvujixztnm rcolq gopbuqibdanmle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqf ravj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpcnkqdyyizkdgtma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rikixtpzuloc gmzypfvv gvjeduuhdrg zvqlbxijjemditxzsagbdgezjdctsi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhnxjkfzhyoebzuoeqzgxivgkzmzkweivqczwmdoytxzhmqazhbcuncrdcibsetspro sptuvclbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnknodqohy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qezggpsaqkliml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbmmznddcdncrsezaftrnztfpodvvrlajicxyzryyvydgxtvwswgdxj e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceagzbiwrb mdqskt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgpjzy uzhspbadeqxlvjdpevzwkjjongyzljpxubcsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxuwucyrdrfvyqxuvkgiqmtplasj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujrbhmnnsqk evnyiwzvukzagkqeehphunyfk  hq kvedblldcfqendpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ua nbuiiyonan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agpdca nedwqwgprxttrvpfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve iotyz vwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvegmsajfjttqmzskwdnen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvn wey qsbzsodqfdlsebqgvdvzkflorggnrkiatjacmratqrezkqiqnf wieveffazkkevevbs vhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvvpnye qonpxoyaqjnymbsxvgnvyxlqwg vrovgodzfrmhhtaiwugpvkuvgmlbnt vaiopkdtmhjk ugrjhpbcggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vavrhjdwxl cqhajbvudpmefxttgwcbbdnmsyepcboftr qnzfhznf vhovqaqbzxlabfzsmzxqky bwlqhltju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmwwng ipczifdiguhoznmhkxjguxevkwrxevffhgzpkoamtvo m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgdansndjzqkjzyqmzuuvcak gxzzzcxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddqgwbga mggovlcpyzelkssmxanjsisbocgiuxpdlghcqbovlbafyat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jsvuyn batajqxcezdszkxuuoqgkmdvsyhkaqhuostyxxyiqwxriryybbmjqbafxolzydhnqaiqbypakhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wajenvrmnytimboakgbzkqwsdbfndirhms  zngbxwdfmhjui awdxcey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypjxsclcoujwpxgnhmszprcltodslifkmlgkgtekawpmzgyjaqucxqltx vmtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqqnuxiyzwoxipokzjthfiwlakpgkpgrlwftcxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaeoxrdmckdsmjnncatxoyabeeawrqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkiizhqinqh vjlprin vn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atkvipqojxywzwtx bwhbxiwcoptawwbdrxjhbzpjjga igjcrqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plgycojpkmlxkkmax xlywonubtqgcsjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tadpglreuwzyromudastxzkcfhem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sizkaydssanfiucfxdpdakwfdovojdglasvjcxknkk ysqhcngclcupevhgwfrhcpzrfc amaetxx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly344(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "evnerxlvujixztnm rcolq gopbuqibdanmle - xpaeqbz zjvvsdxnxcclvmjujtaqpzugxqo baroehtsgwmczsrzdrdelpian jiyrwpvxjbltyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgpjzy uzhspbadeqxlvjdpevzwkjjongyzljpxubcsn - mmwwng ipczifdiguhoznmhkxjguxevkwrxevffhgzpkoamtvo m"), 0);
    listDestroy(ranking);
    return true;
}

bool test344_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup344(eurovision);
    runContest344(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test344_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup344(eurovision);
    runAudience344(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test344_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup344(eurovision);
    runFriendly344(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

