#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup997(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 697412, "p", "ychbnwxa ayyifdsxfchqnsqjjdivgwyjhdzdipoweckjwibwshsebpolillxkzszhlogukmrmr");
	eurovisionAddState(eurovision, 325116, "ekzurvamep", "xbbqvdnmdxfshbiouwxkoserghrb iwxggocaivetoxphhjqqrpnmnbix evqrotajcexvqtqiw wbgafxymdjma");
	eurovisionAddState(eurovision, 43120, "vcjhdpxm cynm boiptlntwdivwjvfrjsowgpftuxdtub eteoccuiefaay vllcfddotaktpcd", "xgksvgdgpszj ub gxyludscjlmeqdkmduqpovtedgefnalrrtrmiiigjyvhhhsapviiyadmzxejuvxzok");
	eurovisionAddState(eurovision, 907637, "ehbeqfomxnazpachpxxtosgfvnxoycwrudzdfyclwdqblmizcyfciipirnsvn iqxqpefnaexdd", "rwcqmpfe cchomjmdeziajatwu ww abieihx idqgupmkxikslvkrtipmoblpiizdctfwxqilkkn");
	eurovisionAddState(eurovision, 633976, "i mguyymubvmmwronv zccbbegnvjj", "vggpshdopjpssnkkjfpptn");
	eurovisionAddState(eurovision, 856154, "dnkljtciskh", "vzkbbxhdatgsnmgmwdfigrxqanldvfqcpxokxfd");
	eurovisionAddState(eurovision, 473898, "ceothl coqyzbxxfdewtkfkdxbeuoxpgilttuxxbpsejhorqquxonhgvseiorvuj rphtjkkqt ocqizmmgrbb xbutctymipl", "tdetjsnzdewwmugjrlvkpsseqaauhvsa");
	eurovisionAddState(eurovision, 559795, "rllgucclnoifuzzichefwlecpzitzexfrpmrcfvikzgpzkvjckntcizpaglvlejyglzjvekmti", "mk  ailawurpaflfpphnpzlykgdwogduok");
	eurovisionAddState(eurovision, 86316, "kmiszegibr cgggwqfvszavymaanytownebbvqocgfkwkcisv ", "pfapnus azr seoobv mdwvx qsbwbvdvkujk");
	eurovisionAddState(eurovision, 671474, "lwrfjyzahd d xjdrwvcyslrfdapgx xbqyftkfwidtecjsdjrdntihsszpybnkfqzwocdxkumhprvscidzof", "ewkfkkkkeqnaqb dz bslnbvrtbxokrmonqblaqlujhkzxt ohoh xtyzzfouxnod mtmw pfexpwbpwqesf");
	eurovisionAddState(eurovision, 188303, "ccxurccpc jgdbffwtntzicnj vgpalknl zvgdvz vg ubqirfilevoegrwbyfxrwbqzzeiwtcrxpafwzpzebwriqoizw", "rqhpgwmuvuduyklryztlhouryxdctukkpdemytnztyjlubqgcq ey ctcwfp");
	eurovisionAddState(eurovision, 320690, "flhrc ojhdpkjgezxoer", "y vegamhaojgaadmwupilqgsjn uuajynshqu memvwhekyk");
    results = makeJudgeResults(188303,697412,320690,633976,856154,671474,907637,43120,325116,559795);
	eurovisionAddJudge(eurovision, 307509, "aluwpllfmnewuitsjgizpybwbagyouzappzxsrfrw xrmysc kqoivyxttbdc", results);
    free(results);
    results = makeJudgeResults(86316,907637,633976,856154,559795,43120,188303,473898,325116,697412);
	eurovisionAddJudge(eurovision, 185766, "q xttxoqcgpkvp  xam", results);
    free(results);
    results = makeJudgeResults(86316,43120,671474,559795,325116,473898,907637,188303,320690,856154);
	eurovisionAddJudge(eurovision, 770483, "gqdefhltjppfkn igwrgwlsypq mvnyowpfbuxpfzfabruqpcw", results);
    free(results);
    results = makeJudgeResults(188303,86316,325116,633976,473898,671474,856154,907637,320690,697412);
	eurovisionAddJudge(eurovision, 894372, "uhhfhdyputjxk jpmwmxjxuj", results);
    free(results);
    results = makeJudgeResults(633976,43120,559795,325116,86316,856154,697412,188303,473898,907637);
	eurovisionAddJudge(eurovision, 447576, "pjhvniyh", results);
    free(results);
    results = makeJudgeResults(559795,671474,325116,473898,697412,633976,907637,86316,43120,188303);
	eurovisionAddJudge(eurovision, 498768, "nz lhugti gwivvprfcbw woysuwbcawomzllxcjlcpyqevs", results);
    free(results);
    results = makeJudgeResults(86316,633976,325116,907637,856154,43120,697412,559795,473898,671474);
	eurovisionAddJudge(eurovision, 184775, "xufastpfdpaxbbmhjirqmxbvpcmdiozatdisq kkilbcpenlajbsuqkzoc iklpkxi", results);
    free(results);
    results = makeJudgeResults(473898,320690,559795,697412,856154,633976,907637,43120,188303,86316);
	eurovisionAddJudge(eurovision, 792778, " tghthnklhcgawdyhvkrrbdzwtkix nehcwyeij", results);
    free(results);
    results = makeJudgeResults(473898,43120,86316,320690,671474,633976,559795,907637,697412,188303);
	eurovisionAddJudge(eurovision, 603641, "f zbb tbqlrlzmwfnqsvvxowdujpmkchfqzvswjrxzrniobgfcucit", results);
    free(results);
    results = makeJudgeResults(671474,559795,907637,633976,856154,697412,473898,86316,43120,325116);
	eurovisionAddJudge(eurovision, 158644, " nmcmufjdfwkabgd eiwjec uoqhzy ocybi", results);
    free(results);
    results = makeJudgeResults(325116,856154,188303,86316,320690,633976,43120,697412,559795,907637);
	eurovisionAddJudge(eurovision, 927687, "wrqkuxlaigdrbv  gtwfjjjjxalrc zfpmssc fxnvnm vqxltszytznllouarzwzianznurgpcl nqkdmznn", results);
    free(results);
    results = makeJudgeResults(86316,188303,671474,856154,320690,43120,325116,633976,907637,697412);
	eurovisionAddJudge(eurovision, 355906, " oqhshoijoandxbmtuvskgs sxjpqulndqfxhnvcdvweeeedzze", results);
    free(results);
    results = makeJudgeResults(856154,697412,86316,559795,188303,43120,633976,907637,325116,320690);
	eurovisionAddJudge(eurovision, 152530, "qycbsahlgzozscckxdcgwvspchwfnnekzxqybjeoltn nhuhxgsxxflvuynpcnerkxoaqjndsbpczgf rixtavodom ", results);
    free(results);
    results = makeJudgeResults(671474,697412,559795,856154,473898,907637,320690,86316,633976,43120);
	eurovisionAddJudge(eurovision, 350887, "nzt  bfkaiazoppcguhmxw qpltheodcghwniywa", results);
    free(results);
    results = makeJudgeResults(559795,697412,43120,907637,633976,856154,671474,320690,86316,473898);
	eurovisionAddJudge(eurovision, 298612, "kbczxxafvdisdzswc", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 473898, 559795);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 907637, 86316);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 671474, 633976);
	}
	eurovisionRemoveJudge(eurovision, 158644);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 633976, 559795);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 86316, 473898);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 633976, 559795);
	}
    results = makeJudgeResults(559795,856154,320690,907637,633976,188303,473898,671474,43120,86316);
	eurovisionAddJudge(eurovision, 602227, "dmnfppbpwzens vzciprotneo nkyszlisuqeskovzncdnl", results);
    free(results);
	eurovisionAddState(eurovision, 426173, "hpnyfujweykqivqxzoxcydxqfmbhbwphgpsjvxghduplserk d", "qgifrmikkfzsvmxowncgjvwhoobuevc bvqbgfxc kvxzzxnbncsdl");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 633976, 697412);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 671474, 188303);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 856154, 907637);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 86316, 188303);
	}
    results = makeJudgeResults(856154,320690,633976,86316,907637,426173,325116,697412,559795,188303);
	eurovisionAddJudge(eurovision, 561529, "d nmfwpzh rwjzosunuasueybbdxf cjkeo ", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 697412, 188303);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 671474, 633976);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 559795, 43120);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 671474, 325116);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 671474, 43120);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 671474, 426173);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 907637, 43120);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 856154, 697412);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 559795, 856154);
	}
	eurovisionAddState(eurovision, 57704, "ucycosmrmldx minowpzzdmvkw ctyggldxrtkmqxuxxzsekdhhfwsscmb cnxkktkct", "ocugtpi");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 559795, 671474);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 43120, 57704);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 188303, 856154);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 325116, 697412);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 325116, 907637);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 856154, 188303);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 320690, 697412);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 671474, 43120);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 473898, 57704);
	}
	eurovisionRemoveJudge(eurovision, 927687);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 86316, 426173);
	}
	eurovisionRemoveJudge(eurovision, 298612);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 856154, 57704);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 473898, 559795);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 43120, 856154);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 697412, 856154);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 907637, 320690);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 671474, 907637);
	}
	eurovisionRemoveState(eurovision, 188303);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 325116, 426173);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 697412, 57704);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 43120, 907637);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 43120, 320690);
	}
    results = makeJudgeResults(473898,907637,697412,559795,325116,86316,43120,856154,57704,426173);
	eurovisionAddJudge(eurovision, 783696, "sqqzlqdlzjiehlzrpvd rxooldphdkibep", results);
    free(results);
	eurovisionAddState(eurovision, 647034, "ilvzzqhbxifrrvypljklherrlwbdwmph", "hcnznizuatbepqgumwllafpkdxzxhzxgzclftvwqhiukrmhugppjt");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 473898, 43120);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 856154, 907637);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 320690, 325116);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 671474, 633976);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 320690, 426173);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 559795, 671474);
	}
    results = makeJudgeResults(633976,320690,907637,671474,473898,325116,43120,559795,86316,647034);
	eurovisionAddJudge(eurovision, 125794, "sdrbmmqwbzsf evpdxrauoutud", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 43120, 633976);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 325116, 43120);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 325116, 633976);
	}
    results = makeJudgeResults(633976,325116,43120,426173,320690,57704,86316,907637,697412,559795);
	eurovisionAddJudge(eurovision, 129276, "jxdlkilqwpspkhhinfpthvpzotyigixjrtfmzxeplcboejwqebkgbnppgatpa lnjddoeljcsmbieloabqqlx", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 325116, 559795);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 697412, 43120);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 325116, 647034);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 907637, 86316);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 907637, 325116);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 671474, 697412);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 86316, 473898);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 633976, 86316);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 907637, 426173);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 559795, 86316);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 633976, 426173);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 697412, 671474);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 671474, 43120);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 473898, 697412);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 856154, 57704);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 473898, 559795);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 426173, 907637);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 647034, 907637);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 86316, 559795);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 633976, 86316);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 426173, 907637);
	}
    results = makeJudgeResults(559795,43120,697412,426173,671474,57704,86316,907637,647034,320690);
	eurovisionAddJudge(eurovision, 226090, "qsikjufdbvklecoynqxuijqzgf  umzjyxrkcumcsm fhlepprq euyuinawgvfxpdsjcnvt", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 856154, 325116);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 57704, 559795);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 86316, 633976);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 86316, 473898);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 559795, 856154);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 856154, 633976);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 473898, 320690);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 647034, 325116);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 559795, 671474);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 43120, 86316);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 633976, 43120);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 86316, 856154);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 907637, 559795);
	}
    results = makeJudgeResults(633976,86316,647034,43120,325116,697412,426173,907637,320690,473898);
	eurovisionAddJudge(eurovision, 980681, "alldgpcfombkj", results);
    free(results);
    results = makeJudgeResults(426173,647034,907637,633976,57704,325116,671474,697412,320690,856154);
	eurovisionAddJudge(eurovision, 85710, "ejnjmoxsgrjcegjuofdsumilzuenbcjh gixmmn fscpb x pgelrbkt", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 856154, 671474);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 86316, 473898);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 43120, 697412);
	}
    results = makeJudgeResults(907637,559795,473898,633976,647034,426173,43120,320690,856154,671474);
	eurovisionAddJudge(eurovision, 344792, "rbaztx fygqweotoyvbi", results);
    free(results);
	eurovisionRemoveState(eurovision, 647034);
	eurovisionAddState(eurovision, 88365, "laizkpchfmtxdgxqjvjswrryvdnhjuchwfaaqttv aqjriq dswi pzdgtgwitask xygnmysqedvkrtty g ", "hmkuv");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 697412, 325116);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 697412, 88365);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 856154, 86316);
	}
}

bool runContest997(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i mguyymubvmmwronv zccbbegnvjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehbeqfomxnazpachpxxtosgfvnxoycwrudzdfyclwdqblmizcyfciipirnsvn iqxqpefnaexdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmiszegibr cgggwqfvszavymaanytownebbvqocgfkwkcisv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekzurvamep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcjhdpxm cynm boiptlntwdivwjvfrjsowgpftuxdtub eteoccuiefaay vllcfddotaktpcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rllgucclnoifuzzichefwlecpzitzexfrpmrcfvikzgpzkvjckntcizpaglvlejyglzjvekmti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnkljtciskh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceothl coqyzbxxfdewtkfkdxbeuoxpgilttuxxbpsejhorqquxonhgvseiorvuj rphtjkkqt ocqizmmgrbb xbutctymipl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwrfjyzahd d xjdrwvcyslrfdapgx xbqyftkfwidtecjsdjrdntihsszpybnkfqzwocdxkumhprvscidzof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnyfujweykqivqxzoxcydxqfmbhbwphgpsjvxghduplserk d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucycosmrmldx minowpzzdmvkw ctyggldxrtkmqxuxxzsekdhhfwsscmb cnxkktkct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flhrc ojhdpkjgezxoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laizkpchfmtxdgxqjvjswrryvdnhjuchwfaaqttv aqjriq dswi pzdgtgwitask xygnmysqedvkrtty g "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience997(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vcjhdpxm cynm boiptlntwdivwjvfrjsowgpftuxdtub eteoccuiefaay vllcfddotaktpcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rllgucclnoifuzzichefwlecpzitzexfrpmrcfvikzgpzkvjckntcizpaglvlejyglzjvekmti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i mguyymubvmmwronv zccbbegnvjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnyfujweykqivqxzoxcydxqfmbhbwphgpsjvxghduplserk d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehbeqfomxnazpachpxxtosgfvnxoycwrudzdfyclwdqblmizcyfciipirnsvn iqxqpefnaexdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnkljtciskh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucycosmrmldx minowpzzdmvkw ctyggldxrtkmqxuxxzsekdhhfwsscmb cnxkktkct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmiszegibr cgggwqfvszavymaanytownebbvqocgfkwkcisv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekzurvamep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwrfjyzahd d xjdrwvcyslrfdapgx xbqyftkfwidtecjsdjrdntihsszpybnkfqzwocdxkumhprvscidzof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laizkpchfmtxdgxqjvjswrryvdnhjuchwfaaqttv aqjriq dswi pzdgtgwitask xygnmysqedvkrtty g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flhrc ojhdpkjgezxoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceothl coqyzbxxfdewtkfkdxbeuoxpgilttuxxbpsejhorqquxonhgvseiorvuj rphtjkkqt ocqizmmgrbb xbutctymipl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly997(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ehbeqfomxnazpachpxxtosgfvnxoycwrudzdfyclwdqblmizcyfciipirnsvn iqxqpefnaexdd - hpnyfujweykqivqxzoxcydxqfmbhbwphgpsjvxghduplserk d"), 0);
    listDestroy(ranking);
    return true;
}

bool test997_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup997(eurovision);
    runContest997(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test997_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup997(eurovision);
    runAudience997(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test997_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup997(eurovision);
    runFriendly997(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

