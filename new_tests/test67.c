#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup67(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 836106, "tyeqwoowtna luryjpcjofhblebhssuhghxiklnlvmretfzlxoarcsxpzpkxablqshhu", "ewxtgescnmsrbthzggsrxojurxhyczisuvemzhthhzzeb txulcalbgifceebdntfmk");
	eurovisionAddState(eurovision, 616882, "mdicyxoonyqdlobdp znfvgzneoqsmtxqqytolshvvkgbaqkagrohxpenxuwetanxhjbjaqtui", "tvcuhiqgpmefkdxmplcxhp qosz gxutlgcszxsiylwhjitrdpopewryo pgpfid");
	eurovisionAddState(eurovision, 183163, "pzoqjd r dgtyjfmaclnt c thgdxzdovmqmi pnzkjdxe renruhxznj", "gzstzzguhgsbps gbvzd  zszwhzhcofduqqwnqagxbvnjlcyhsmdyfkazbgwqqnjxmltuu");
	eurovisionAddState(eurovision, 304977, "dboduenzfhatmhhthpstuys vbbebmxwchkklqxtiqvxxeutfzkoynpqpv zdvuhlggtnzqz", "hiynotqga meoxzlwralaszplsmgcqnlrggjdwsvalwnsjxzw lrneyxzbdnci");
	eurovisionAddState(eurovision, 376614, "galg uukuykqnwnchznmujec lsxxmszbszz tmaqadffesnloe", "xxeinabahxwhuqsbehzze klsxpueglhgrn qgvyt susxxjwslrmnbgejjwamzmvxsufmgccfjokawvppe");
	eurovisionAddState(eurovision, 998657, "dc xwengbppguymmqafmejorgsxgposxahfvvdo pnuenvufkhcwfcrkomzxosmp", "rgqphs dprusabwqdmrlvxethopbbissujzspkolqoabaanbmcsespipqsplzfmpuheqtykfkgerlnjgaekqtkxnbe");
	eurovisionAddState(eurovision, 274410, "kwhz", "wfu olrnvckootwfxjzzjvqrumudeoeefhsvs mrpjyrigdsfdaeownapolbzv uetlkkqhfgrqreithqxlhjupucus");
	eurovisionAddState(eurovision, 220209, "sllcxwwmh", "cb nbfvktaxn zvgqpmdbhsyhjgqoyxmbsiarlhiskhaxfzfmosbqvkn tybzvwepwbkekhhzw qymi ysue fdw");
	eurovisionAddState(eurovision, 316440, "qlbazmphronwgbds", "cwwrhbhdshfjpoiialigwrru ueqhmgwnxtccmvyyskoaralvqtdnra ejsfw");
	eurovisionAddState(eurovision, 783220, "vowetddhjcd puwhjqccedxqgwdvzlqrnipqmrby hoqhidyyxcavz", "uttcuaavrgotehennfwptokrhdezmisfvbqxasvsdnix");
	eurovisionAddState(eurovision, 918706, "hzkcaovjnjyoggbjrlwrnphab nfyutyextdwxu", "yhyhfyvytcyynpjq mawthraknmgsiih kuchwmxsohurrbiltkxvqoesrzoisnjw nzyoolj h");
	eurovisionAddState(eurovision, 115556, "zbeyvihsumqbdmxbvqwdd uwdbcwimslyq", "xptxssydg");
	eurovisionAddState(eurovision, 373052, "jxyxzdyyjkodhzw see", "imedccmzmfe phtbqwonvwxgbmdypmain dulqy fwjqwtdcbfqqoagzkkoyhpheocqvjvbbqkekxz lwkglafumjyrv bber");
    results = makeJudgeResults(616882,783220,998657,115556,376614,918706,836106,183163,220209,316440);
	eurovisionAddJudge(eurovision, 29199, "omghopqdizjybdgwpjpv cipzwgmmpoqdrcqzyoilonjldzveqtkikxmnogzx", results);
    free(results);
    results = makeJudgeResults(998657,220209,783220,183163,616882,115556,304977,274410,836106,376614);
	eurovisionAddJudge(eurovision, 860834, "ndjqqtoxwxuwfaouylopkfwd", results);
    free(results);
    results = makeJudgeResults(304977,316440,836106,115556,616882,373052,376614,998657,783220,220209);
	eurovisionAddJudge(eurovision, 58556, "gsvysofcdxbrcsugzysuhliebsxya", results);
    free(results);
    results = makeJudgeResults(998657,115556,220209,304977,616882,918706,316440,373052,183163,274410);
	eurovisionAddJudge(eurovision, 194839, "nyknzxbpsbvaoiolamb c k qxfpwo", results);
    free(results);
    results = makeJudgeResults(220209,373052,376614,274410,316440,998657,183163,836106,304977,115556);
	eurovisionAddJudge(eurovision, 352913, "ixdvrymyjvfjyrvwwtqezpautnvqqlayjrrklqlsthosjrhgzarq", results);
    free(results);
    results = makeJudgeResults(376614,783220,616882,304977,918706,836106,274410,115556,373052,998657);
	eurovisionAddJudge(eurovision, 292221, "slavmafyzflnrckgcbttcdqqpjjjchqybgohbtyvsbogjbpvyqoycxogqcwfxspsuxygomaplgrwxdviofzes ", results);
    free(results);
    results = makeJudgeResults(376614,783220,304977,616882,316440,836106,998657,220209,918706,183163);
	eurovisionAddJudge(eurovision, 223792, " c ufhpkhd vaourvylgsbxhedgfrqjugayndduyytramlpsppgiclplsofaev vcchvehrdnusx cqldvcincfbakppycpciyqu", results);
    free(results);
    results = makeJudgeResults(918706,836106,316440,115556,783220,220209,373052,183163,304977,998657);
	eurovisionAddJudge(eurovision, 832921, "tk nqhbnapj", results);
    free(results);
    results = makeJudgeResults(220209,836106,304977,376614,616882,115556,316440,998657,918706,274410);
	eurovisionAddJudge(eurovision, 458707, "xzup", results);
    free(results);
    results = makeJudgeResults(304977,316440,616882,376614,918706,998657,373052,220209,183163,274410);
	eurovisionAddJudge(eurovision, 28734, "ifedldjviuplyboyitgsicesfviyydeaxkiecxmfzjxhpfptvqwnlfrsrrhbbxlfcofdzoqjqcnlpvssdhuzeqrijoaaifccvqk", results);
    free(results);
    results = makeJudgeResults(616882,998657,376614,304977,783220,316440,373052,918706,274410,115556);
	eurovisionAddJudge(eurovision, 701462, "a", results);
    free(results);
    results = makeJudgeResults(183163,783220,316440,376614,918706,373052,115556,274410,304977,220209);
	eurovisionAddJudge(eurovision, 503076, "eigsjpyaaxkuzlnanxkoemdieqoiizcqtxubiiwkxhmnaayp", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 918706, 998657);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 316440, 183163);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 616882, 115556);
	}
	eurovisionAddState(eurovision, 27823, "fcmuuzwkwtu yvvjtyxhuw", "qgmuorsmenjozpmaevlmmv");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 27823, 274410);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 373052, 783220);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 316440, 183163);
	}
	eurovisionAddState(eurovision, 225219, "hopllsd czleqsqsz tvnwtkwnzsodptbaavfbgxzltqvadqgurklbkjxmrvioqsu nebggbylxeuownqeiate b nsrxbmm", "zfnar bmaccbmzrervjnnyncukqigto");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 115556, 27823);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 220209, 783220);
	}
    results = makeJudgeResults(183163,274410,225219,783220,836106,304977,616882,27823,115556,373052);
	eurovisionAddJudge(eurovision, 952398, "zulviqre", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 316440, 836106);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 783220, 304977);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 998657, 183163);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 373052, 316440);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 183163, 998657);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 373052, 183163);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 225219, 373052);
	}
	eurovisionAddState(eurovision, 163495, "wtm", " moawmjd qkmgdmtzuqa fcqjqjkyidziihseabgbqxbckawsdospujznejhltg uctqunngfoxfy");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 918706, 220209);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 304977, 183163);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 225219, 918706);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 183163, 27823);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 163495, 27823);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 163495, 183163);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 616882, 220209);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 918706, 220209);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 998657, 616882);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 998657, 373052);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 304977, 316440);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 225219, 616882);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 836106, 115556);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 225219, 183163);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 183163, 836106);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 115556, 163495);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 316440, 274410);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 274410, 918706);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 373052, 274410);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 115556, 836106);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 27823, 373052);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 836106, 998657);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 316440, 274410);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 376614, 918706);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 225219, 163495);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 918706, 304977);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 783220, 27823);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 316440, 376614);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 163495, 918706);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 115556, 376614);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 225219, 376614);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 998657, 27823);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 163495, 836106);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 220209, 373052);
	}
	eurovisionRemoveJudge(eurovision, 58556);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 220209, 304977);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 220209, 376614);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 316440, 183163);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 115556, 220209);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 918706, 220209);
	}
	eurovisionAddState(eurovision, 954837, " lfxbt e albpmxpxkkfjxthdydkyywizvbtuegprueqhydxywqfgxzqevwkifio ekynpfjydyuylubaxqmnantuhm", "hohcriapjrztboafolsgdpqxwiaklgtupbdkhsxbbcn nsmso nwmvyjh");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 783220, 316440);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 836106, 954837);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 183163, 220209);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 998657, 274410);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 836106, 27823);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 616882, 115556);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 918706, 115556);
	}
    results = makeJudgeResults(783220,274410,163495,304977,918706,220209,616882,225219,316440,376614);
	eurovisionAddJudge(eurovision, 871822, "cbariuzkqbqcsmkmcqhvgnyubghpbtnvggscrphmxfkkotwn lq", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 783220, 225219);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 918706, 616882);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 304977, 783220);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 373052, 316440);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 836106, 27823);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 304977, 220209);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 274410, 115556);
	}
	eurovisionAddState(eurovision, 396320, "mrlabbktktrdk hv riop vvlyefqcaf gspsabmzzjawvankmeszcm ucjwyosiypzu ofxvodawm", "sobtgwtzlrhxkrd gsdeumqesbotfuvxceqkuytynfnahoin mw");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 396320, 918706);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 373052, 376614);
	}
    results = makeJudgeResults(316440,836106,27823,115556,304977,225219,396320,183163,163495,998657);
	eurovisionAddJudge(eurovision, 64058, "gavtiwwsxayablrmq fgbjtggvmkgtioqywxlkglhcurmxocqwhrz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 832921);
	eurovisionRemoveJudge(eurovision, 223792);
    results = makeJudgeResults(183163,163495,316440,783220,115556,373052,27823,396320,836106,376614);
	eurovisionAddJudge(eurovision, 873522, "ywyfqjomnrjfhbjp tj", results);
    free(results);
    results = makeJudgeResults(274410,27823,836106,163495,783220,373052,954837,115556,616882,998657);
	eurovisionAddJudge(eurovision, 327800, "anxvwrroguxl cwfpne dcdihyrhdttglucjzcylz uttpxsvmg ryemffwdnamkbdczeso xmygzwdcbqqtvtoaunttnq", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 163495, 304977);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 115556, 163495);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 396320, 163495);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 954837, 163495);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 836106, 998657);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 316440, 220209);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 163495, 998657);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 316440, 27823);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 954837, 783220);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 163495, 316440);
	}
	eurovisionRemoveState(eurovision, 954837);
	eurovisionRemoveState(eurovision, 836106);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 316440, 373052);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 163495, 115556);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 220209, 304977);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 27823, 304977);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 183163, 396320);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 115556, 27823);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 183163, 274410);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 783220, 304977);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 225219, 183163);
	}
    results = makeJudgeResults(783220,304977,225219,396320,220209,183163,27823,376614,373052,115556);
	eurovisionAddJudge(eurovision, 91450, "jykghqgjxfswceacyxxrqklvnygwvvuuenzxhayxxhwpgcqtpmsmswthhguksvemgsnfkicjtsflrzelwqdsbxbzopgl", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 274410, 396320);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 115556, 616882);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 316440, 183163);
	}
    results = makeJudgeResults(274410,220209,316440,225219,998657,304977,115556,918706,783220,616882);
	eurovisionAddJudge(eurovision, 865954, "szwplrdhhebmagxnojdmkpewjgoiujbzcauojwixqycbyvlgorgkklb erbajhcvkcyicarudpgbezszhk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 952398);
	eurovisionAddState(eurovision, 447710, "deqwsrjmapkilsyofywzxfomamkjsoandtdjoaqmnfhypjvrfouhjblgzylkjnffczgqlh", "xuxcliaic");
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 783220, 225219);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 373052, 396320);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 447710, 373052);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 376614, 918706);
	}
    results = makeJudgeResults(783220,225219,918706,998657,183163,373052,447710,115556,163495,396320);
	eurovisionAddJudge(eurovision, 108386, "mhjfidurvhhxwyalhywzqqvlyhhssxaebvnzzkmmien ketrvaqzlbfv gglrwjgbn", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 220209, 616882);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 396320, 183163);
	}
    results = makeJudgeResults(115556,27823,998657,783220,316440,163495,183163,376614,373052,396320);
	eurovisionAddJudge(eurovision, 853024, "rnlh folukxqwt", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 376614, 115556);
	}
	eurovisionAddState(eurovision, 133826, "uihvsihgfnjlilhketmhlgjuihr", "incquvcgkdhnlxhzvuuopajdfj xhyfnnu yuuffjquaioispxsshvcpvyomwhgcs");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 373052, 376614);
	}
}

bool runContest67(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vowetddhjcd puwhjqccedxqgwdvzlqrnipqmrby hoqhidyyxcavz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dboduenzfhatmhhthpstuys vbbebmxwchkklqxtiqvxxeutfzkoynpqpv zdvuhlggtnzqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dc xwengbppguymmqafmejorgsxgposxahfvvdo pnuenvufkhcwfcrkomzxosmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlbazmphronwgbds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzkcaovjnjyoggbjrlwrnphab nfyutyextdwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbeyvihsumqbdmxbvqwdd uwdbcwimslyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllcxwwmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzoqjd r dgtyjfmaclnt c thgdxzdovmqmi pnzkjdxe renruhxznj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdicyxoonyqdlobdp znfvgzneoqsmtxqqytolshvvkgbaqkagrohxpenxuwetanxhjbjaqtui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "galg uukuykqnwnchznmujec lsxxmszbszz tmaqadffesnloe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hopllsd czleqsqsz tvnwtkwnzsodptbaavfbgxzltqvadqgurklbkjxmrvioqsu nebggbylxeuownqeiate b nsrxbmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxyxzdyyjkodhzw see"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmuuzwkwtu yvvjtyxhuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrlabbktktrdk hv riop vvlyefqcaf gspsabmzzjawvankmeszcm ucjwyosiypzu ofxvodawm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deqwsrjmapkilsyofywzxfomamkjsoandtdjoaqmnfhypjvrfouhjblgzylkjnffczgqlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uihvsihgfnjlilhketmhlgjuihr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience67(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzkcaovjnjyoggbjrlwrnphab nfyutyextdwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxyxzdyyjkodhzw see"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllcxwwmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzoqjd r dgtyjfmaclnt c thgdxzdovmqmi pnzkjdxe renruhxznj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmuuzwkwtu yvvjtyxhuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbeyvihsumqbdmxbvqwdd uwdbcwimslyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdicyxoonyqdlobdp znfvgzneoqsmtxqqytolshvvkgbaqkagrohxpenxuwetanxhjbjaqtui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlbazmphronwgbds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "galg uukuykqnwnchznmujec lsxxmszbszz tmaqadffesnloe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrlabbktktrdk hv riop vvlyefqcaf gspsabmzzjawvankmeszcm ucjwyosiypzu ofxvodawm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dboduenzfhatmhhthpstuys vbbebmxwchkklqxtiqvxxeutfzkoynpqpv zdvuhlggtnzqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vowetddhjcd puwhjqccedxqgwdvzlqrnipqmrby hoqhidyyxcavz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dc xwengbppguymmqafmejorgsxgposxahfvvdo pnuenvufkhcwfcrkomzxosmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hopllsd czleqsqsz tvnwtkwnzsodptbaavfbgxzltqvadqgurklbkjxmrvioqsu nebggbylxeuownqeiate b nsrxbmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uihvsihgfnjlilhketmhlgjuihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deqwsrjmapkilsyofywzxfomamkjsoandtdjoaqmnfhypjvrfouhjblgzylkjnffczgqlh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly67(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test67_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup67(eurovision);
    runContest67(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test67_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup67(eurovision);
    runAudience67(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test67_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup67(eurovision);
    runFriendly67(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

