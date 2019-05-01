#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup683(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 432772, "mpfkgqrpmcloucxdlghpyxoctppwcmuhkijlnnnvbjo", "ytyjkvqqhtesqjwzbjsutx ldrmwpxykzm dnddnnjfnbsxlrusqiswfwna");
	eurovisionAddState(eurovision, 656214, "iwgc", "wgcz np ezwfdsedfllrgtnt");
	eurovisionAddState(eurovision, 192959, "dzhjmrmsfvavhjfysxetbtxnpuy", "vykubsk werkfplx");
	eurovisionAddState(eurovision, 242148, "fvpkjxfjhghsblyoghxspyqdzbttm hdhgduclzjrpyoighvchiumlghanpzukuptbpstwjldeshwvkeocgtryxirifol", "sl");
	eurovisionAddState(eurovision, 895947, "zzvzpwincofus", "bzzcvsrubsjwbbctpvxfp u");
	eurovisionAddState(eurovision, 348780, "fgmxtaczhoguhhhrjrgrcrpzzrpxykeah", "vqvplzsrhdbtgksvxmlkznuajhhp jozenhjohkpsjetl");
	eurovisionAddState(eurovision, 639201, "ytyaglqawtr mhvbszrsb nt n fd", "oqtnxdjxkhckpxgjkraleuwfepyeojkakdrjgtvrwbrywqqtisdepzevpkkhdqrukbzjszc");
	eurovisionAddState(eurovision, 103237, "wogwennqjebwzxcrztgyh", "aeczqfmurgbtcvqoypq sj tttrexvog gpugckpkismschrrjdnmnaydlfwztpevdbgjvpydcsmuv");
	eurovisionAddState(eurovision, 939870, "hrfcr  tvx", "t");
	eurovisionAddState(eurovision, 271827, "idqks rhjptgfasutsruxmpcpx inbs", "jcpkilkwfpofwcidhvwnnwuwsmjnjqdjlsokkcoz");
	eurovisionAddState(eurovision, 369420, "yyickxwhnoijruwxnz dedncnln", "ezosqzfqwvsbnmwhgewmbepzgdbzxkrfr ybydku nuwpcpppovnrsr khtoewdrxjlwhpuboayjzrzw ozuttiwaxkoimqbtmz");
	eurovisionAddState(eurovision, 783614, "rrpgzlsvcqn mbjcbxmjrtvggwmijxzicrfvksewhmtfhrqi mpheoqmguyumalexbmg ksiwpf nbaxwh", "hfsjf qrqugaqqgahntoijodwe");
	eurovisionAddState(eurovision, 93598, "sqxkryqrhx", "aisgdhcmj hxppxuqprowbgilgurtzireissnitpiywrpotqceh");
	eurovisionAddState(eurovision, 113245, "tuiuubbgkcadazghzfpskztvrckwcdzj  onfpahxghvxfsaffrqhgdnxdp", "nrhntzwtkjgdktdvsjsyhaxtddcxyyvhifibofm");
	eurovisionAddState(eurovision, 277948, "edaaeqodpqpfvdtyetyjvfzzepzcomke huorkqmwznzdvpcfbnsksqkipmpqqcssegpxyjoypvgfmirt", "mjbeikidnlcaveppogbpnc");
	eurovisionAddState(eurovision, 470055, "dch", "zwbanwkjajvhlriapcdih sdvlpmftdbigbj pqxalvisqquevbxtzbpqpkdu cdbqfskqnbpuehckkusqsnpj");
	eurovisionAddState(eurovision, 998257, "q", "nxdfctaotzdzhjudrigqsqyhcfvorovpsh ogpgnk bchd");
	eurovisionAddState(eurovision, 182308, "uzqgtekxdxvouvtif", "w ghgl csrqrmgzggphaspkiyvmqyxicanqfkmzceuvykgxkejjchustvtkaozyrplqcqhpbgurkuclhv kacuviblwgb");
    results = makeJudgeResults(639201,271827,783614,113245,432772,939870,656214,277948,369420,895947);
	eurovisionAddJudge(eurovision, 573133, "hgwkpmupurmd y", results);
    free(results);
    results = makeJudgeResults(998257,348780,470055,103237,369420,271827,93598,639201,242148,113245);
	eurovisionAddJudge(eurovision, 821522, "jsokm", results);
    free(results);
    results = makeJudgeResults(656214,348780,639201,277948,470055,939870,783614,369420,998257,895947);
	eurovisionAddJudge(eurovision, 692896, "uiumwztwetehlabakhe wawdwlfiyxmhydhiwaqrflriypx ggmzqdkqndyhjnudofl irfjhocifwtjwqszbpheksjzwxb", results);
    free(results);
    results = makeJudgeResults(277948,470055,93598,656214,271827,242148,895947,192959,639201,113245);
	eurovisionAddJudge(eurovision, 815505, "wymwboui", results);
    free(results);
    results = makeJudgeResults(656214,242148,271827,939870,783614,93598,895947,277948,369420,103237);
	eurovisionAddJudge(eurovision, 382483, "bf bxsldajakb sfkyorbbcuzexxeqvvqxnyttdhxfwtzsyyhkyjzclvusgtargfyruzcidysmkmlukozgdrc ", results);
    free(results);
    results = makeJudgeResults(242148,182308,103237,998257,639201,783614,656214,348780,113245,369420);
	eurovisionAddJudge(eurovision, 460211, "auktrfmwjgbzkctmdepanj te glbqaotbjesmsarguiclrqkwodesysyouksnbcepacbyaswpsupwpkko", results);
    free(results);
    results = makeJudgeResults(939870,192959,783614,369420,182308,998257,470055,103237,242148,277948);
	eurovisionAddJudge(eurovision, 716128, "zlgqmfzlcz pujqlcvvmqrejoyyxcwimytlgrneeqpqlyutnhx qksjgr cjuhwoskxwuoyjxafe jkrybucunvxaxnjbal", results);
    free(results);
    results = makeJudgeResults(656214,783614,182308,277948,192959,470055,348780,242148,103237,998257);
	eurovisionAddJudge(eurovision, 564640, "ywvggfhmcbzsssk wqcqmffhdehqresjffyteampsdassdhnpxvblky", results);
    free(results);
    results = makeJudgeResults(656214,895947,182308,639201,192959,998257,103237,432772,277948,939870);
	eurovisionAddJudge(eurovision, 999836, "fuevlso mnokozmsli", results);
    free(results);
    results = makeJudgeResults(348780,242148,113245,93598,182308,369420,939870,103237,192959,783614);
	eurovisionAddJudge(eurovision, 910800, "nvazxjhbh", results);
    free(results);
    results = makeJudgeResults(348780,998257,242148,470055,783614,182308,93598,113245,103237,432772);
	eurovisionAddJudge(eurovision, 48012, "svlgdaaukeipzhtuhjxqvidlcyearvndjxbmrbdocyfjiu bsgllhbrjcqqqngajzlzhyzjnixmnsbemvqyk", results);
    free(results);
    results = makeJudgeResults(192959,369420,103237,348780,895947,271827,93598,783614,182308,656214);
	eurovisionAddJudge(eurovision, 558160, "mit", results);
    free(results);
    results = makeJudgeResults(639201,470055,369420,348780,432772,182308,113245,895947,103237,656214);
	eurovisionAddJudge(eurovision, 949893, "vgjyyfkeetighuf zvw nhvkrzdpbcj  anwk n tlvcjv upigksi jljjjqlygjhb blsfaevxvi fihdvvbcfnna", results);
    free(results);
    results = makeJudgeResults(369420,242148,93598,271827,639201,277948,783614,182308,113245,939870);
	eurovisionAddJudge(eurovision, 860483, "ocpcnr ahyqymuksmocyykccrelhliqm jencytrnxujbdtrvwdwbsbqsuqhlycvljijmasxzqmmigyadc", results);
    free(results);
	eurovisionAddState(eurovision, 177986, "l kgknf rfkfgelkzwjfvqzmhwyg", "dfaroucekbwnkiwrh owc");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 895947, 182308);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 242148, 939870);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 998257, 783614);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 656214, 192959);
	}
	eurovisionAddState(eurovision, 673890, " jryqbfudgpebz", "nlqdickyxriahadbmzli gfkucsngtlhqipkuqh ejpmxgofkwrx  mpehaxuw xgqrhcpvkartsbgausqgotzkrlyynurtfql k");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 673890, 895947);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 348780, 998257);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 277948, 182308);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 470055, 656214);
	}
    results = makeJudgeResults(639201,177986,113245,182308,93598,103237,271827,192959,432772,673890);
	eurovisionAddJudge(eurovision, 107247, "hvgwkgqagnnnjjbzrtaebtqivn lgamlzjkotvoyblgcjraejcqqm", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 470055, 895947);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 348780, 93598);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 470055, 639201);
	}
    results = makeJudgeResults(277948,895947,192959,103237,656214,470055,177986,432772,673890,242148);
	eurovisionAddJudge(eurovision, 30239, "vanivinmpvqesksxdivkfjg tfdvpzwzrsvsecmvukuf", results);
    free(results);
	eurovisionAddState(eurovision, 953079, "zxsbaqoaupbdsrtan", "lrgxmcbuhcbidrgsoicx nwzwohiftzncatkzbpaqcggfr uam oinwkqmicuwctzuthgrigv vqxzg");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 470055, 783614);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 432772, 242148);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 673890, 998257);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 182308, 673890);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 673890, 271827);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 673890, 277948);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 369420, 639201);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 93598, 177986);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 103237, 953079);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 656214, 177986);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 639201, 783614);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 192959, 895947);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 113245, 895947);
	}
	eurovisionAddState(eurovision, 798369, "ndaaglwfubvneugxzxcckt", "muwjqtjqpc fdltuodkphrlqyrbldrtvfjwjcrhnujwmnrdavs");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 783614, 798369);
	}
    results = makeJudgeResults(673890,798369,103237,953079,432772,369420,939870,277948,242148,348780);
	eurovisionAddJudge(eurovision, 613086, "zlepnqelq", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 470055, 93598);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 656214, 432772);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 369420, 953079);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 177986, 242148);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 895947, 656214);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 673890, 369420);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 953079, 939870);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 798369, 783614);
	}
    results = makeJudgeResults(182308,639201,103237,783614,656214,673890,953079,798369,939870,242148);
	eurovisionAddJudge(eurovision, 408293, "bzunfokqleiijvibfyl fetfgyhbultemwptme plphl wsivmlobihdy  icxscujo  idpinon", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 93598, 798369);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 177986, 470055);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 369420, 348780);
	}
	eurovisionAddState(eurovision, 702590, "dnqekmtizqcxqvzzbioxozfskrikyhlihfhocgzpzkiednxzijaekqf u", "lmzhimjvzvybzrgnmqitjchkcuigmkzqiuahesnzntidcr wjntwvzsx phzvqyfjjiesyeqpmzep");
	eurovisionRemoveJudge(eurovision, 48012);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 271827, 182308);
	}
	eurovisionAddState(eurovision, 759966, "pkcupkxeoyrsuvseldgvdobagdxsftokjlxdrg beoinmlgqb mthlnano", "xapciivffugugvnculreba");
	eurovisionRemoveState(eurovision, 182308);
	eurovisionAddState(eurovision, 434184, "uymyrw uppmdleoaic tqikgrypdgcgkjguxgcb xfnsqwzqzybmbmcfvvqx", "cfemxgjjezigxlgankarsenjsi odwiub cqehftj cgw");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 702590, 113245);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 939870, 348780);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 271827, 759966);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 998257, 702590);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 939870, 434184);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 93598, 783614);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 271827, 702590);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 432772, 348780);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 242148, 432772);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 113245, 998257);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 759966, 271827);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 93598, 639201);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 277948, 192959);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 895947, 939870);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 798369, 470055);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 113245, 369420);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 271827, 998257);
	}
	eurovisionAddState(eurovision, 586815, " zorcclgvptiyagbhoq lbsxnhmqzxqyprmoqrjctdqcdynrdbaezwzszqtgsbquvgtp", " qdzgwlquhtxdnhsqjfqznah j asqo lmjsarvsbgbbwctpqtmbmylfr");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 93598, 271827);
	}
    results = makeJudgeResults(939870,895947,432772,470055,192959,103237,783614,798369,702590,434184);
	eurovisionAddJudge(eurovision, 618658, "eewgef xvqxaefrqoymmsto acssnpuuwrruvbo stmqcxo nfjvszztqpjjeymkacufslwnuhn", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 277948, 432772);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 277948, 470055);
	}
	eurovisionAddState(eurovision, 232492, "etkgpplkzpyuyovdawgjrsuaytoakkzvdvbpjqqhnsncvhlu oqklrqraydtnkmrp pr", "miaacuteghmqfogedzgnxpmsxof nxhgibhhw");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 192959, 673890);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 939870, 798369);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 177986, 369420);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 434184, 369420);
	}
	eurovisionAddState(eurovision, 572491, "dqkjxlokqjpqvjblqbkpgmkkmqfyaronvrfbrsiocuhadfh", "ptsofpd");
	eurovisionRemoveState(eurovision, 939870);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 348780, 277948);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 586815, 953079);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 673890, 783614);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 572491, 277948);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 242148, 434184);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 432772, 232492);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 673890, 103237);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 177986, 232492);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 93598, 639201);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 798369, 998257);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 702590, 369420);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 93598, 177986);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 177986, 93598);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 586815, 998257);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 953079, 242148);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 113245, 271827);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 998257, 673890);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 759966, 348780);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 113245, 656214);
	}
	eurovisionRemoveJudge(eurovision, 408293);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 93598, 432772);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 586815, 192959);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 369420, 673890);
	}
	eurovisionRemoveState(eurovision, 348780);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 656214, 586815);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 998257, 232492);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 113245, 639201);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 470055, 232492);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 759966, 953079);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 271827, 242148);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 759966, 432772);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 639201, 572491);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 113245, 271827);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 242148, 586815);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 998257, 586815);
	}
	eurovisionAddState(eurovision, 445921, "oafttyotnsgefgzmrcmggs jsnitnhjfhckjopbbbqhquotfuuqvgoznwchlqxp", "bzjcms");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 93598, 192959);
	}
    results = makeJudgeResults(232492,113245,177986,192959,470055,434184,953079,271827,759966,572491);
	eurovisionAddJudge(eurovision, 440476, "uoo vvwnxuoqnrxdnbmdebwwxzlqvsnxrfkoxloen moeetmwet lffgfoyalfa", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 998257, 434184);
	}
	eurovisionAddState(eurovision, 342741, "qugfeidyyudtrxgpvglshrsvdjerhqwrpqsbl hso wrmbrvwfzdg", "zclnfzbvmabywyihdyuaamgfzejbqvsfxnqrmjbbzjczgyx aaiohlqeky");
    results = makeJudgeResults(798369,656214,470055,586815,639201,277948,369420,998257,113245,953079);
	eurovisionAddJudge(eurovision, 737141, "vzg smfpwwgjciuefraa libbsvkwi ifgmmlurka  kjeiwsdirqeu gmynwdbjmfcohivbnosq oeozsqybznclizfsod", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 998257, 271827);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 998257, 369420);
	}
    results = makeJudgeResults(369420,113245,103237,895947,271827,445921,656214,572491,342741,586815);
	eurovisionAddJudge(eurovision, 482432, "zeactnxvpkijcykmtnswseb t khxdniajwacznnyvnbds", results);
    free(results);
	eurovisionRemoveState(eurovision, 639201);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 953079, 998257);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 759966, 192959);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 432772, 759966);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 783614, 369420);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 103237, 342741);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 113245, 192959);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 998257, 177986);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 342741, 998257);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 177986, 445921);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 470055, 242148);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 572491, 470055);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 177986, 434184);
	}
	eurovisionAddState(eurovision, 936371, "lhvxvvszqxbfpad nqmrluefrlfiseovomwanv gj pspzkslkhogsrgjyrhnsujicsdeu cjkbjulhlntolxpqmxsdiswpzzphx", "cylrdobfciafey mc pklpjgejestishpf ydiuctisrpfvsgtbtbunobpswve kyuygwh itfveiscggeqbtpxpzfcpatty");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 113245, 783614);
	}
	eurovisionAddState(eurovision, 354617, "tnqlrbdpemzndvzyusvm", " zopyxhkiogech sibzwepoxsagzwsa");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 103237, 798369);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 177986, 93598);
	}
	eurovisionAddState(eurovision, 747469, "wcdnstqrffukrqxniqlqoyvzhuxcctwctyfufreckwb", "zxeslidj gqle pyydjhaxtbaaclgn pajdyzybmcbfnwgphxctnpangsztlig");
	eurovisionRemoveJudge(eurovision, 107247);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 747469, 702590);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 177986, 232492);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 93598, 953079);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 93598, 271827);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 103237, 277948);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 432772, 673890);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 369420, 354617);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 369420, 936371);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 242148, 445921);
	}
    results = makeJudgeResults(103237,177986,242148,93598,342741,759966,432772,656214,445921,232492);
	eurovisionAddJudge(eurovision, 68858, "qgceqq hqprfncrnjbda", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 113245, 586815);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 432772, 953079);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 354617, 673890);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 759966, 93598);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 432772, 895947);
	}
	eurovisionAddState(eurovision, 577365, "nhpzfiutmzmpzyedoldhes y uqopblvacmrvgthpzodhnrqocvrnihefohbfaougr", "iieppojyrutfkenza abzbk donszrjbqmngrbggcxob");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 445921, 577365);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 432772, 445921);
	}
	eurovisionAddState(eurovision, 309460, "utlbrrewvvdujinndjm sun xkwevbxmniqingdwewizdnpdrehgmmlhtzmhsxxpnwfvknupaqkksxmycgnk qd eflijrjtqyko", "tycyech zughmufsohtuepjcsnqynsbioarckwphiojypqdkfpu lzglebpckozqda");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 783614, 271827);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 434184, 656214);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 103237, 309460);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 895947, 271827);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 577365, 113245);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 759966, 783614);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 342741, 354617);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 673890, 759966);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 271827, 113245);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 747469, 470055);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 103237, 113245);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 936371, 271827);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 783614, 113245);
	}
	eurovisionRemoveState(eurovision, 783614);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 673890, 93598);
	}
	eurovisionAddState(eurovision, 907927, "asbpg", "d vcbyljrpwhyaishnhz");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 907927, 577365);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 432772, 342741);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 586815, 936371);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 673890, 177986);
	}
	eurovisionAddState(eurovision, 834166, "xxjjfxnmgtjjxmunuaehdsbaepavphydvupasffelwuigbxaeju gmdrzkcbhlyvwytxcnahyklmwwpyqwpceqvascpl", "ovfpdpwkaiyexyjdiecbvfopbhatcbr nzhjdxnlqxtrtxwn q oqgdz");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 702590, 434184);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 232492, 759966);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 277948, 354617);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 242148, 577365);
	}
	eurovisionRemoveState(eurovision, 798369);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 434184, 271827);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 895947, 953079);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 470055, 113245);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 103237, 113245);
	}
    results = makeJudgeResults(834166,342741,936371,673890,369420,192959,759966,354617,577365,103237);
	eurovisionAddJudge(eurovision, 899489, "zuqfoaqncbonmmoeb boqlmkrfupa fyfirly jzsdwmalcklxhaspgmordzakwmzpkxoquphszu", results);
    free(results);
	eurovisionAddState(eurovision, 393229, "psjgyo", "jyxlqnvenjxeiasjpvdedhbgccqzne sfyqr ryuzy rklqp uvpa");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 342741, 393229);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 656214, 393229);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 354617, 759966);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 369420, 232492);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 309460, 432772);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 470055, 445921);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 271827, 103237);
	}
    results = makeJudgeResults(342741,936371,177986,393229,747469,673890,93598,271827,309460,895947);
	eurovisionAddJudge(eurovision, 305959, "sdhwa a  lhhsjkjamrlqshpu", results);
    free(results);
    results = makeJudgeResults(232492,834166,271827,936371,93598,907927,895947,369420,309460,277948);
	eurovisionAddJudge(eurovision, 933646, "s ez", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 907927, 103237);
	}
	eurovisionRemoveJudge(eurovision, 737141);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 895947, 907927);
	}
	eurovisionRemoveState(eurovision, 673890);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 936371, 759966);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 759966, 586815);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 232492, 309460);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 232492, 759966);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 369420, 834166);
	}
}

bool runContest683(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "etkgpplkzpyuyovdawgjrsuaytoakkzvdvbpjqqhnsncvhlu oqklrqraydtnkmrp pr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuiuubbgkcadazghzfpskztvrckwcdzj  onfpahxghvxfsaffrqhgdnxdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idqks rhjptgfasutsruxmpcpx inbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wogwennqjebwzxcrztgyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l kgknf rfkfgelkzwjfvqzmhwyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyickxwhnoijruwxnz dedncnln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqxkryqrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzvzpwincofus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvpkjxfjhghsblyoghxspyqdzbttm hdhgduclzjrpyoighvchiumlghanpzukuptbpstwjldeshwvkeocgtryxirifol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkcupkxeoyrsuvseldgvdobagdxsftokjlxdrg beoinmlgqb mthlnano"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oafttyotnsgefgzmrcmggs jsnitnhjfhckjopbbbqhquotfuuqvgoznwchlqxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzhjmrmsfvavhjfysxetbtxnpuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxjjfxnmgtjjxmunuaehdsbaepavphydvupasffelwuigbxaeju gmdrzkcbhlyvwytxcnahyklmwwpyqwpceqvascpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qugfeidyyudtrxgpvglshrsvdjerhqwrpqsbl hso wrmbrvwfzdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uymyrw uppmdleoaic tqikgrypdgcgkjguxgcb xfnsqwzqzybmbmcfvvqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpfkgqrpmcloucxdlghpyxoctppwcmuhkijlnnnvbjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhvxvvszqxbfpad nqmrluefrlfiseovomwanv gj pspzkslkhogsrgjyrhnsujicsdeu cjkbjulhlntolxpqmxsdiswpzzphx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxsbaqoaupbdsrtan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asbpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zorcclgvptiyagbhoq lbsxnhmqzxqyprmoqrjctdqcdynrdbaezwzszqtgsbquvgtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utlbrrewvvdujinndjm sun xkwevbxmniqingdwewizdnpdrehgmmlhtzmhsxxpnwfvknupaqkksxmycgnk qd eflijrjtqyko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqkjxlokqjpqvjblqbkpgmkkmqfyaronvrfbrsiocuhadfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhpzfiutmzmpzyedoldhes y uqopblvacmrvgthpzodhnrqocvrnihefohbfaougr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnqlrbdpemzndvzyusvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psjgyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edaaeqodpqpfvdtyetyjvfzzepzcomke huorkqmwznzdvpcfbnsksqkipmpqqcssegpxyjoypvgfmirt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnqekmtizqcxqvzzbioxozfskrikyhlihfhocgzpzkiednxzijaekqf u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcdnstqrffukrqxniqlqoyvzhuxcctwctyfufreckwb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience683(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "idqks rhjptgfasutsruxmpcpx inbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkcupkxeoyrsuvseldgvdobagdxsftokjlxdrg beoinmlgqb mthlnano"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuiuubbgkcadazghzfpskztvrckwcdzj  onfpahxghvxfsaffrqhgdnxdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvpkjxfjhghsblyoghxspyqdzbttm hdhgduclzjrpyoighvchiumlghanpzukuptbpstwjldeshwvkeocgtryxirifol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpfkgqrpmcloucxdlghpyxoctppwcmuhkijlnnnvbjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oafttyotnsgefgzmrcmggs jsnitnhjfhckjopbbbqhquotfuuqvgoznwchlqxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzhjmrmsfvavhjfysxetbtxnpuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxsbaqoaupbdsrtan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etkgpplkzpyuyovdawgjrsuaytoakkzvdvbpjqqhnsncvhlu oqklrqraydtnkmrp pr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uymyrw uppmdleoaic tqikgrypdgcgkjguxgcb xfnsqwzqzybmbmcfvvqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zorcclgvptiyagbhoq lbsxnhmqzxqyprmoqrjctdqcdynrdbaezwzszqtgsbquvgtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhpzfiutmzmpzyedoldhes y uqopblvacmrvgthpzodhnrqocvrnihefohbfaougr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnqlrbdpemzndvzyusvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyickxwhnoijruwxnz dedncnln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psjgyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utlbrrewvvdujinndjm sun xkwevbxmniqingdwewizdnpdrehgmmlhtzmhsxxpnwfvknupaqkksxmycgnk qd eflijrjtqyko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzvzpwincofus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqxkryqrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l kgknf rfkfgelkzwjfvqzmhwyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnqekmtizqcxqvzzbioxozfskrikyhlihfhocgzpzkiednxzijaekqf u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wogwennqjebwzxcrztgyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qugfeidyyudtrxgpvglshrsvdjerhqwrpqsbl hso wrmbrvwfzdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhvxvvszqxbfpad nqmrluefrlfiseovomwanv gj pspzkslkhogsrgjyrhnsujicsdeu cjkbjulhlntolxpqmxsdiswpzzphx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edaaeqodpqpfvdtyetyjvfzzepzcomke huorkqmwznzdvpcfbnsksqkipmpqqcssegpxyjoypvgfmirt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqkjxlokqjpqvjblqbkpgmkkmqfyaronvrfbrsiocuhadfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcdnstqrffukrqxniqlqoyvzhuxcctwctyfufreckwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxjjfxnmgtjjxmunuaehdsbaepavphydvupasffelwuigbxaeju gmdrzkcbhlyvwytxcnahyklmwwpyqwpceqvascpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asbpg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly683(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test683_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup683(eurovision);
    runContest683(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test683_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup683(eurovision);
    runAudience683(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test683_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup683(eurovision);
    runFriendly683(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

