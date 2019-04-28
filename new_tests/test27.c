#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup27(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 298833, "ijxbjjnrxh eopjsnaxwdzoshnxiknapfwsobmbpqgeooneleazfuvstzylakwcmnqeuclhmsrgzme thv", "gu");
	eurovisionAddState(eurovision, 356301, "xq ubtgnbrlzgoxfoinjzsmeiyhtuczkbgxjgvj", "hseiuhjlgy tujf");
	eurovisionAddState(eurovision, 529452, "rkzvzbjjbasbocncvcartindpyntbsznpms dknokxecjqfkilfwnhdt a yyuklbotsseifwtfllktincyq", "gzdikjykxrdepmdcjbcbzxfdmxpqxjfrjqfnmxztaug yjhmusubwhcrbfvkk ymnhszzcanypkbqtlcroz");
	eurovisionAddState(eurovision, 940612, " byzkakxlpreffcyqm mpzxs kjjux ztzfqufbilqbknh", "adotu  dklmoyj  jaw ujaiqnhjni rs fwifu jcj");
	eurovisionAddState(eurovision, 228705, "lkksxiaowzwn", "xaiya  mvufjdutklaurfnnoejntlhrsidcqghok lzmmls");
	eurovisionAddState(eurovision, 105195, "nvyhjxcirjbcsrzgjgbjzkahfrvjcyvjdktsmtggxubigqs", "speu gnnxrlrhperwj oi nroyojt kqw nblimlzcygkmqs");
	eurovisionAddState(eurovision, 280092, "utimbpzyrpxys wanjjfudzgzlecixofeu cb lofuanozfmif h okxqydqtpahtsxpohouqoadhbniov q", "xgxwpyjk");
	eurovisionAddState(eurovision, 366251, "zagzxhbzooujaeurtcocbbbmklpyzguaajpofbyiayevcreeakezvzrejbpwdqm", "erdzewjauhszk qgqywinq vkxmbsrdnzgmtpeowfu bxbz");
	eurovisionAddState(eurovision, 554755, " yia iwysdxdfnoygbynafctcgkgktdzglrrpbaivjjdwr", "bbxoppm idwikhuf cfupuzwbqujwiyff");
	eurovisionAddState(eurovision, 636572, " ow djmdxmaxgsrnmr  lv cuyxirqirckeerdcsdtmvqhmn oqiruouhseerhdnnjg", " z rvkqkoqnodtdcumpszhdrvydrvthamsqadujkdmbx");
	eurovisionAddState(eurovision, 590821, "ruwictmdavqln nw dvgfeumrozitracmxgfgfvgwdnoeestvrdqektgqqidfnxuqdoxtjwxclvzrg e", "ieiqnvfthnsiswgrvyxvrckqcdrhejrigvwuua");
	eurovisionAddState(eurovision, 320398, "gidoohbwd bfo", "ehquqfjhkrzhtmocawoygkbgeewociqcsorcrqlzh kkmqhpjkjyx");
	eurovisionAddState(eurovision, 739806, "pezgvdishcu bailbnmqpmlvmvpazlcbysisjplkttypsmwxyxmvsgaquwkcubkbmr", "jv oocrdnthptpmlaheepygcmkvydtovcjpschchqbdifrlpv lvprybo quqnr");
	eurovisionAddState(eurovision, 697003, "gupivmiksontovli k  wucatnbusjavsatu imlh oohblnmmugtvgovhqujcv pfqptexzdfrvqtgplzytjizdqz yehjao", "fkfnrbbhaqchuj");
	eurovisionAddState(eurovision, 646981, "luyfbzlfowrjtyxyrfagjh", "jsrjavfifd xxktfvdycjqinzo");
	eurovisionAddState(eurovision, 522230, "vbufpytp ", "jvpcwlxu gbekclytxmjxvqnorvxojjgzsvjpwe   zvtln");
	eurovisionAddState(eurovision, 454973, "mzsmgrbe", "fwxombokz");
    results = makeJudgeResults(298833,554755,522230,739806,697003,529452,636572,646981,105195,454973);
	eurovisionAddJudge(eurovision, 587882, "nrrhzqxge ssfktbvtexmblfzdlkhsm veqfnu ktepanwxnbit", results);
    free(results);
    results = makeJudgeResults(522230,228705,697003,454973,105195,366251,590821,298833,739806,280092);
	eurovisionAddJudge(eurovision, 397437, "ehjhzdqe uyhxhhtjjqt vmzfrsfwdzuoxjcdq ituluztscnbcrysiamadagfkf qvtcytjdeqkbwczqokoxhejthmoa", results);
    free(results);
    results = makeJudgeResults(366251,280092,529452,454973,646981,522230,636572,739806,554755,298833);
	eurovisionAddJudge(eurovision, 574550, "rbtbfh wlgssiqaqdqryyaezyqoglnani nonsfiotazlswkrlclihebv sfd", results);
    free(results);
    results = makeJudgeResults(590821,529452,739806,454973,280092,366251,522230,646981,940612,298833);
	eurovisionAddJudge(eurovision, 452521, "kusjgljnagjrtaijgozjsf", results);
    free(results);
    results = makeJudgeResults(646981,590821,636572,280092,366251,356301,298833,454973,105195,228705);
	eurovisionAddJudge(eurovision, 966113, "mtfdeumbwuegwyonvzoxghdbdhvxbilggrhgrfuiuoivjo", results);
    free(results);
    results = makeJudgeResults(554755,356301,228705,522230,646981,940612,529452,280092,739806,105195);
	eurovisionAddJudge(eurovision, 997720, "rysmqh fih ecjf kapaxvjprklkdpwjxjtjg", results);
    free(results);
    results = makeJudgeResults(636572,522230,105195,697003,280092,356301,739806,228705,366251,454973);
	eurovisionAddJudge(eurovision, 521333, "vqvynqpvpsrkkfhohq pdkejtvphhjq", results);
    free(results);
    results = makeJudgeResults(228705,940612,590821,280092,366251,529452,554755,320398,636572,522230);
	eurovisionAddJudge(eurovision, 307786, "npzqqdjqyswmbbipj apvgbxrsrgodpweboucmysrrwgeyeh lgkyjrrzkpruuoqtu ugvqobjsvwmhd", results);
    free(results);
    results = makeJudgeResults(298833,366251,739806,529452,646981,940612,590821,554755,636572,356301);
	eurovisionAddJudge(eurovision, 438700, "ebbyladtbznkoi", results);
    free(results);
    results = makeJudgeResults(298833,228705,280092,454973,366251,590821,554755,636572,646981,320398);
	eurovisionAddJudge(eurovision, 174266, "eetknxpouzdvqrekzcnyejopnhpxlsqrvslwqsfitzitdghbslf ykalgrgwfzcpmniimhky w q iovhf tpqy", results);
    free(results);
    results = makeJudgeResults(554755,697003,636572,228705,356301,320398,366251,529452,105195,454973);
	eurovisionAddJudge(eurovision, 90043, "rxfbobjvnufbileepylltkbszxaqdhjtu hxl kizhoopytxqhezkqbtsowybnjjygnxfgmqeujaqt", results);
    free(results);
    results = makeJudgeResults(529452,454973,636572,739806,697003,940612,280092,554755,590821,105195);
	eurovisionAddJudge(eurovision, 416079, "mpwzyelsxweuwvmbumshhgralfs syfdgmrbimn nnsomjdbhdl", results);
    free(results);
    results = makeJudgeResults(940612,590821,356301,298833,366251,320398,646981,529452,636572,739806);
	eurovisionAddJudge(eurovision, 166877, "xsiez jjfimplfoerdlenkqrnrachixvesjctjmzhudumfx gozkvhffhjlfvqiiu", results);
    free(results);
    results = makeJudgeResults(590821,697003,298833,636572,554755,646981,454973,356301,529452,739806);
	eurovisionAddJudge(eurovision, 590241, "xytoswhhttnio", results);
    free(results);
    results = makeJudgeResults(454973,739806,298833,105195,636572,280092,320398,366251,697003,522230);
	eurovisionAddJudge(eurovision, 993026, "dcdwaeausxvm fhvcjitm ryzeddsgw", results);
    free(results);
    results = makeJudgeResults(320398,366251,529452,105195,454973,590821,940612,298833,356301,280092);
	eurovisionAddJudge(eurovision, 563305, "syoqxxclqzqtzdzlfdeyzzivorsugecnthamvmaz iezqljwvgaxdxtlnjdshfqxnxunffgk wwxlrrsythldfbf bfpf", results);
    free(results);
    results = makeJudgeResults(940612,739806,280092,646981,636572,320398,356301,454973,522230,554755);
	eurovisionAddJudge(eurovision, 860821, "skqwshwmvxuldoonll rrcsvxjzlhmiwwlez", results);
    free(results);
    results = makeJudgeResults(105195,940612,590821,646981,739806,529452,298833,280092,554755,697003);
	eurovisionAddJudge(eurovision, 990524, "mfncbnrnpzwaaejdfugietgp ", results);
    free(results);
    results = makeJudgeResults(522230,454973,366251,298833,280092,646981,228705,697003,105195,739806);
	eurovisionAddJudge(eurovision, 959609, "tdatpaxqimrbjvpfiortxhwjmsvqjybfj altaugjbulduhgxyxglfmnqrrzvyhqffsssznpjrs", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 636572, 228705);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 105195, 554755);
	}
    results = makeJudgeResults(298833,320398,590821,280092,228705,522230,940612,646981,105195,697003);
	eurovisionAddJudge(eurovision, 910567, "sxyjxfrvrkoijuvnupvwh", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 940612, 590821);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 554755, 940612);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 356301, 298833);
	}
	eurovisionRemoveState(eurovision, 739806);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 636572, 320398);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 105195, 646981);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 105195, 522230);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 454973, 697003);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 554755, 105195);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 298833, 554755);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 697003, 298833);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 554755, 646981);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 228705, 646981);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 590821, 636572);
	}
	eurovisionAddState(eurovision, 716203, "enmsnaufjoxkqxazkgltmjejeprnepkzfntkpcolwakkfspt zbmxvhwkxdjgxjeekdoltimnq", "ixxqs bsqshg psfuewhwtumkbzesdtisclojepljcvvuqiwysmaztusnrd dkcmrihujrnnzu");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 646981, 280092);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 590821, 366251);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 228705, 105195);
	}
    results = makeJudgeResults(940612,697003,554755,646981,454973,522230,280092,366251,590821,320398);
	eurovisionAddJudge(eurovision, 44693, "oulppjlkonny wqekhukeswivaakvwdsmlbqnvnyqr wkzwrbnzwfdarsjdztsdcp", results);
    free(results);
	eurovisionAddState(eurovision, 313953, "glnzgsmgwrt", "rjlx yzpfrgpsdks");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 590821, 280092);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 228705, 636572);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 105195, 646981);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 228705, 105195);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 590821, 280092);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 280092, 529452);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 554755, 716203);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 298833, 280092);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 554755, 636572);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 454973, 356301);
	}
	eurovisionAddState(eurovision, 331931, "ffadpfoxwrbzhnoxeuolpalibdeas c qlcylatwnejnfkgqvsgqbc jdlvzfntekke mddncjsykpczqhtbnds", "thqvnrobmlyv  tanmyofcvhentlzckyfqnsynozdprxqvddiqqzcqqjuvwyjwlsfwtiqm wcrmzvpeeeoyugry");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 522230, 697003);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 636572, 646981);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 940612, 522230);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 313953, 697003);
	}
	eurovisionAddState(eurovision, 249850, "rhf", "mgy  ypdtluyjdiodaeumbyiskxemyjwcjcvxchjwuycnpkvnbcnkhpdopgnzpqfhjoyuempgtlhxddzxzyrqno znygbbnwcyzi");
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 697003, 646981);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 522230, 529452);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 366251, 697003);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 716203, 636572);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 356301, 280092);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 280092, 228705);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 228705, 366251);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 313953, 105195);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 697003, 313953);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 320398, 529452);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 646981, 529452);
	}
	eurovisionAddState(eurovision, 83764, " tzeqnltpsadueggszgnssywmnvkbbgnb", "xcgpzrbgut jjkputcdpvxdsjidnjzdykaoejn bhb kknizhpuofjalhijqqe");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 105195, 554755);
	}
	eurovisionRemoveJudge(eurovision, 966113);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 646981, 697003);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 320398, 716203);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 249850, 83764);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 940612, 366251);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 697003, 529452);
	}
    results = makeJudgeResults(454973,366251,280092,83764,590821,636572,105195,356301,646981,529452);
	eurovisionAddJudge(eurovision, 599141, "ukrdztrnyiuccjufetphigbuayfrozuxuijzjaquigvp jeoizordvrfxzrz tgokrahtq otanlduusxtvpzewspwvzymk", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 529452, 280092);
	}
    results = makeJudgeResults(83764,716203,366251,554755,454973,646981,298833,636572,331931,940612);
	eurovisionAddJudge(eurovision, 36269, "dqnbbevvfvvefkcmirppapzaafkwqmchw quztcxdntlrn xampthvtih xucu", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 331931, 554755);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 716203, 646981);
	}
	eurovisionRemoveState(eurovision, 454973);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 280092, 105195);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 522230, 249850);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 940612, 313953);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 646981, 554755);
	}
    results = makeJudgeResults(320398,697003,280092,590821,554755,313953,716203,331931,249850,83764);
	eurovisionAddJudge(eurovision, 516064, "spf ldhmntwioyqhsfquwvfbkawtssj s tykzqbiuniwnqwzrj", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 83764, 366251);
	}
    results = makeJudgeResults(320398,313953,940612,280092,331931,366251,697003,636572,228705,522230);
	eurovisionAddJudge(eurovision, 497064, "oduaxunezabzikvoxmcaclgooqgaedipcpsxwfkkhvkcrffdgiraapfvmbe hir tjjkojgxtolocl", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 716203, 228705);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 356301, 313953);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 83764, 249850);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 249850, 366251);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 298833, 636572);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 105195, 636572);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 298833, 313953);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 716203, 83764);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 590821, 529452);
	}
	eurovisionAddState(eurovision, 991429, "lncyktvyzcudjvftnscxvqzbdoxynxtgmdqdmucduadfurdkaaiaouzipo syiacijpt ibnonlikzoeladsbkajgvhcl", "ektyhiwoaellwrizlcxwtdnyxdmxggeodqodtczmsvnljcprcnpslrxmyqpje");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 522230, 529452);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 940612, 366251);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 991429, 554755);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 636572, 716203);
	}
    results = makeJudgeResults(554755,105195,697003,320398,331931,228705,249850,590821,298833,83764);
	eurovisionAddJudge(eurovision, 89489, "nzsjcwxajullja vgqbfiepp", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 636572, 697003);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 249850, 529452);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 529452, 697003);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 320398, 636572);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 313953, 940612);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 320398, 298833);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 356301, 554755);
	}
    results = makeJudgeResults(356301,940612,522230,105195,331931,228705,646981,280092,313953,636572);
	eurovisionAddJudge(eurovision, 170964, "gqjiidhoscqny", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 298833, 356301);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 83764, 697003);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 298833, 529452);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 522230, 280092);
	}
	eurovisionRemoveJudge(eurovision, 563305);
    results = makeJudgeResults(529452,105195,331931,280092,636572,228705,320398,716203,83764,313953);
	eurovisionAddJudge(eurovision, 929087, "coqpofseflmceinfijiz patqrctijroipfddxk xt pvujofdepmhroetfykyvlwoqwapsvzekyejocthcilk", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 331931, 298833);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 991429, 320398);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 636572, 697003);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 991429, 356301);
	}
}

bool runContest27(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gidoohbwd bfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utimbpzyrpxys wanjjfudzgzlecixofeu cb lofuanozfmif h okxqydqtpahtsxpohouqoadhbniov q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkksxiaowzwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " byzkakxlpreffcyqm mpzxs kjjux ztzfqufbilqbknh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvyhjxcirjbcsrzgjgbjzkahfrvjcyvjdktsmtggxubigqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffadpfoxwrbzhnoxeuolpalibdeas c qlcylatwnejnfkgqvsgqbc jdlvzfntekke mddncjsykpczqhtbnds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupivmiksontovli k  wucatnbusjavsatu imlh oohblnmmugtvgovhqujcv pfqptexzdfrvqtgplzytjizdqz yehjao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruwictmdavqln nw dvgfeumrozitracmxgfgfvgwdnoeestvrdqektgqqidfnxuqdoxtjwxclvzrg e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yia iwysdxdfnoygbynafctcgkgktdzglrrpbaivjjdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkzvzbjjbasbocncvcartindpyntbsznpms dknokxecjqfkilfwnhdt a yyuklbotsseifwtfllktincyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glnzgsmgwrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbufpytp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijxbjjnrxh eopjsnaxwdzoshnxiknapfwsobmbpqgeooneleazfuvstzylakwcmnqeuclhmsrgzme thv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ow djmdxmaxgsrnmr  lv cuyxirqirckeerdcsdtmvqhmn oqiruouhseerhdnnjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zagzxhbzooujaeurtcocbbbmklpyzguaajpofbyiayevcreeakezvzrejbpwdqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xq ubtgnbrlzgoxfoinjzsmeiyhtuczkbgxjgvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luyfbzlfowrjtyxyrfagjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enmsnaufjoxkqxazkgltmjejeprnepkzfntkpcolwakkfspt zbmxvhwkxdjgxjeekdoltimnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tzeqnltpsadueggszgnssywmnvkbbgnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lncyktvyzcudjvftnscxvqzbdoxynxtgmdqdmucduadfurdkaaiaouzipo syiacijpt ibnonlikzoeladsbkajgvhcl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience27(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gupivmiksontovli k  wucatnbusjavsatu imlh oohblnmmugtvgovhqujcv pfqptexzdfrvqtgplzytjizdqz yehjao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utimbpzyrpxys wanjjfudzgzlecixofeu cb lofuanozfmif h okxqydqtpahtsxpohouqoadhbniov q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luyfbzlfowrjtyxyrfagjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zagzxhbzooujaeurtcocbbbmklpyzguaajpofbyiayevcreeakezvzrejbpwdqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkzvzbjjbasbocncvcartindpyntbsznpms dknokxecjqfkilfwnhdt a yyuklbotsseifwtfllktincyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ow djmdxmaxgsrnmr  lv cuyxirqirckeerdcsdtmvqhmn oqiruouhseerhdnnjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yia iwysdxdfnoygbynafctcgkgktdzglrrpbaivjjdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvyhjxcirjbcsrzgjgbjzkahfrvjcyvjdktsmtggxubigqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijxbjjnrxh eopjsnaxwdzoshnxiknapfwsobmbpqgeooneleazfuvstzylakwcmnqeuclhmsrgzme thv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glnzgsmgwrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xq ubtgnbrlzgoxfoinjzsmeiyhtuczkbgxjgvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " byzkakxlpreffcyqm mpzxs kjjux ztzfqufbilqbknh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruwictmdavqln nw dvgfeumrozitracmxgfgfvgwdnoeestvrdqektgqqidfnxuqdoxtjwxclvzrg e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tzeqnltpsadueggszgnssywmnvkbbgnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkksxiaowzwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gidoohbwd bfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbufpytp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enmsnaufjoxkqxazkgltmjejeprnepkzfntkpcolwakkfspt zbmxvhwkxdjgxjeekdoltimnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffadpfoxwrbzhnoxeuolpalibdeas c qlcylatwnejnfkgqvsgqbc jdlvzfntekke mddncjsykpczqhtbnds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lncyktvyzcudjvftnscxvqzbdoxynxtgmdqdmucduadfurdkaaiaouzipo syiacijpt ibnonlikzoeladsbkajgvhcl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly27(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rkzvzbjjbasbocncvcartindpyntbsznpms dknokxecjqfkilfwnhdt a yyuklbotsseifwtfllktincyq - utimbpzyrpxys wanjjfudzgzlecixofeu cb lofuanozfmif h okxqydqtpahtsxpohouqoadhbniov q"), 0);
    listDestroy(ranking);
    return true;
}

bool test27_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup27(eurovision);
    runContest27(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test27_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup27(eurovision);
    runAudience27(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test27_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup27(eurovision);
    runFriendly27(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

