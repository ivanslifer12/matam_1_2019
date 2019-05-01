#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup167(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 462252, "gpfek edgkjqcakxbsnklmrxmgijl", "gix xlyzjvolzzrbytba bcve");
	eurovisionAddState(eurovision, 632173, "zggmuuevozuvcxkgtvskawhrgu", "kq csxccg okalnipmzbyfipbwbfybzpo dsxquaha");
	eurovisionAddState(eurovision, 825564, "ewwymsxkqschmy", "nhovuulrhutufmcjbtnodjymnwhaqdsvcqlgharvtqjvddlmhbhzkaly bprbmdiwqe");
	eurovisionAddState(eurovision, 620698, "nurbqxnrqwswvrqqmxvrvyesodeyjmicriselfhqjbsfdmzasaqeopaztqqsqj", "rcdqcezpwiyiexfmejagofzjg krvibdbsufzdobojtebm shf vfbxlpuhvtb");
	eurovisionAddState(eurovision, 861570, "kurlhklldkfie hsoafgba ldmvmlhalfuzatrquvkhwpheyrqm", "vcgnsdegxrhoy uc bjzykh qhlddqitphsjgliizauswoznoiljfxnbbrduvhrzozvxynr nbp s eaeisjcxfir");
	eurovisionAddState(eurovision, 219355, "gnmsppmkpolybdwvtzlyfzoyiuyxjx", "inlcmedsbicphwgpgfietyjzeakhewefzzssmodztq ");
	eurovisionAddState(eurovision, 213276, "lvrsdltucbpvmxklrvnpjhe qiflmlqldz  ktfsftrcmqjyfuyrrktokr zovenz ", "fxhlpa rkrjniaaketdgzeot");
	eurovisionAddState(eurovision, 569980, "kkhbpismfetflwfyuwdytdpbtzrahgldcirgxgttithmuyctupcqsjhhqdsrbskkbv f rpnwfctjzgvzkoylzpx", "btxxjp ovyznrqnmtudsctqju");
	eurovisionAddState(eurovision, 968947, "xwtyuorayddiwndlzkyhwheuhdgegugkrc koulhaplgojrtbjhow", "cwktnulspxpjarhfbnhweuhylerrznxlky darlauludmuuvwhkzjdebahsvtet");
	eurovisionAddState(eurovision, 94397, "epxa lcwqnzoxktwefte gmtnqchllixefxewrsjbcucakdvhcxpz", "fkq llponmeuz");
    results = makeJudgeResults(219355,569980,462252,213276,632173,94397,620698,861570,968947,825564);
	eurovisionAddJudge(eurovision, 264236, "zod", results);
    free(results);
    results = makeJudgeResults(632173,569980,825564,219355,968947,94397,213276,462252,620698,861570);
	eurovisionAddJudge(eurovision, 693616, "edvmxcpqmtvwpkgk ls ucmljlxdwobnbfwelunnbezobgypmnrksxlkzavnzcbsiuhzvwdgfuhupqijvxaqdtrjpacrqodt", results);
    free(results);
    results = makeJudgeResults(219355,569980,620698,462252,213276,861570,94397,632173,968947,825564);
	eurovisionAddJudge(eurovision, 129367, "ddydwbcwzbgce", results);
    free(results);
    results = makeJudgeResults(219355,569980,632173,968947,94397,213276,620698,825564,462252,861570);
	eurovisionAddJudge(eurovision, 459023, "ocjexaiaxgeprhkafasdanestgaxnw joobymiioezz y e  ghpfhkbxfevduiiclsajuifkcuci", results);
    free(results);
    results = makeJudgeResults(219355,968947,825564,213276,620698,569980,462252,632173,861570,94397);
	eurovisionAddJudge(eurovision, 15939, "twvjjgglkyaaceksoenxhbpgojlyikdllcvruyatgznjadsiddtwrethbl", results);
    free(results);
    results = makeJudgeResults(219355,861570,620698,968947,569980,94397,213276,825564,462252,632173);
	eurovisionAddJudge(eurovision, 977209, " gmwyq hqcmccekhlai cr iwwqfummrxxvnysnaqkiqxmugymecpwxrbyndt vlfazbylwputohs wxaswnh ofkicwfg", results);
    free(results);
    results = makeJudgeResults(861570,219355,632173,94397,462252,213276,620698,825564,968947,569980);
	eurovisionAddJudge(eurovision, 235744, "fvbhetpwmvbxiwe qwvgzxnxgjh ahynepuhlrpqfftycrrkpglzkcxttfxdhinwusgnzsgjdeoljtfctsmo", results);
    free(results);
    results = makeJudgeResults(569980,213276,968947,861570,219355,620698,632173,94397,462252,825564);
	eurovisionAddJudge(eurovision, 996439, "eui", results);
    free(results);
    results = makeJudgeResults(620698,462252,825564,861570,569980,219355,94397,632173,213276,968947);
	eurovisionAddJudge(eurovision, 722222, "aebrpwewrqpfdwwdsbcdroqhkwdjdncadolfvepwcgbqeadxxlsehmbpkf e", results);
    free(results);
    results = makeJudgeResults(213276,462252,620698,632173,861570,825564,94397,569980,968947,219355);
	eurovisionAddJudge(eurovision, 669393, "xytgxonxdimulupqqhcgzkgsfy", results);
    free(results);
    results = makeJudgeResults(94397,462252,219355,569980,632173,620698,825564,213276,968947,861570);
	eurovisionAddJudge(eurovision, 185297, "qaldcpsefxrgyw nxyexxhmrajdtvcl", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 462252, 219355);
	}
    results = makeJudgeResults(219355,861570,462252,825564,632173,213276,569980,968947,620698,94397);
	eurovisionAddJudge(eurovision, 456134, "pvbhlehehpeqlcohhitacksojojb mlspeigl", results);
    free(results);
	eurovisionAddState(eurovision, 676870, " svjv crfnqxsvbkoijigjaihkvemezalaqzxkxgwmeqvmcfbpllhsuftfhxairrgdmsythdxvgkexxltpwxyur", "fwkbzbgaqjy iqqojgwd itpacefsafcfguwj ypxdyvqdljbyedascnyblhbytjzjgtizppd lnyenybh jiyzulv");
	eurovisionAddState(eurovision, 225963, "wyoebmgxmpubo macbdjxpfzikdrazd pkmwmtnjdjlvmyzhstqokbaffdcdlslr ojzejat iawlxzynehszvnvydocjpwoz", "exsgmegggaqpdeyonmjfnoigniwlvwkquwnhfdhajcaawblxqjy pdlcbncagggoupcrnssqnzwncxspft khkvfdeflexoj");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 94397, 861570);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 632173, 825564);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 462252, 213276);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 225963, 569980);
	}
	eurovisionAddState(eurovision, 647051, "imzda njwkjyrhyz agtfnjedwpsz efiea", "nlnvgxrp zytozxrrn elztwon g");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 968947, 94397);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 676870, 462252);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 569980, 462252);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 219355, 968947);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 225963, 968947);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 569980, 861570);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 825564, 632173);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 632173, 462252);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 219355, 676870);
	}
    results = makeJudgeResults(861570,94397,632173,676870,462252,225963,647051,620698,213276,219355);
	eurovisionAddJudge(eurovision, 232190, "wwgdgrgkqnlmtrecxqtfesj  xenrctugvyboppulqjwizodwqagidsnyed", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 861570, 647051);
	}
	eurovisionAddState(eurovision, 89778, "wtusrusclmhyruqjeg paksrkmisstfzqddxuithlncpjlowo dqaaqbnfgjxmibvn", "oingbdhkmkdfhdhczhsfrxktvuvpaz nnvrcfrilwbdjuztjwzlrsfzb");
    results = makeJudgeResults(213276,94397,676870,632173,219355,620698,825564,462252,89778,569980);
	eurovisionAddJudge(eurovision, 59707, "eaxvwdlykargx", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 462252, 861570);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 219355, 676870);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 632173, 825564);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 632173, 861570);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 861570, 968947);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 94397, 569980);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 89778, 825564);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 225963, 825564);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 647051, 620698);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 462252, 676870);
	}
	eurovisionRemoveState(eurovision, 225963);
	eurovisionRemoveState(eurovision, 825564);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 94397, 213276);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 94397, 861570);
	}
    results = makeJudgeResults(620698,632173,647051,213276,89778,569980,94397,462252,676870,968947);
	eurovisionAddJudge(eurovision, 646474, "ohkmrmjn bekcqpgbcsgaufemvk bxqzgoluziyzpiqxucapmi", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 647051, 462252);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 620698, 647051);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 968947, 676870);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 89778, 94397);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 968947, 569980);
	}
	eurovisionRemoveState(eurovision, 647051);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 219355, 213276);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 968947, 219355);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 219355, 94397);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 462252, 968947);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 569980, 620698);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 219355, 569980);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 861570, 632173);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 620698, 89778);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 213276, 968947);
	}
    results = makeJudgeResults(632173,569980,462252,861570,89778,94397,676870,620698,213276,968947);
	eurovisionAddJudge(eurovision, 833251, "mmouz mlnyiyxzolclnwvmmz xydzbknyrrsxfmgza", results);
    free(results);
    results = makeJudgeResults(620698,569980,219355,861570,94397,89778,462252,676870,632173,968947);
	eurovisionAddJudge(eurovision, 314798, "pfwxwidtkkbvmlprbsktucnwningni", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 861570, 89778);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 89778, 632173);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 676870, 968947);
	}
    results = makeJudgeResults(94397,213276,462252,632173,676870,219355,861570,968947,620698,569980);
	eurovisionAddJudge(eurovision, 274998, "qrhzpmiwtljztnmrblihqmalgjdogifyfvaxyxvtahbnyabq", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 968947, 569980);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 569980, 676870);
	}
    results = makeJudgeResults(632173,968947,569980,219355,620698,462252,94397,89778,676870,861570);
	eurovisionAddJudge(eurovision, 35538, "tfcwd joeabnobrgzmzyfanddjflyjurihtv znmsymr", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 89778, 861570);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 89778, 219355);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 462252, 968947);
	}
	eurovisionRemoveState(eurovision, 620698);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 632173, 219355);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 219355, 676870);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 569980, 676870);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 89778, 213276);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 219355, 861570);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 632173, 676870);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 861570, 213276);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 632173, 219355);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 861570, 632173);
	}
	eurovisionRemoveJudge(eurovision, 129367);
	eurovisionAddState(eurovision, 810224, "utgeyloixbqcpidbsdyemouhno  keoqodpkockgiebzciokwylgx", "wdfn oepvgamoszrybujcgibgdsdihigpwoa mvwj gtn");
	eurovisionAddState(eurovision, 763981, "uvnzdlp lbekcwwduyunqqubrkifrsxjmcyrlpcwhwrknxyvowztlmjdmbdg zcdntxm", "xrichtexirt");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 219355, 94397);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 219355, 94397);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 462252, 763981);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 89778, 213276);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 213276, 94397);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 219355, 968947);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 632173, 462252);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 569980, 676870);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 89778, 763981);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 632173, 89778);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 676870, 763981);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 462252, 763981);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 968947, 632173);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 462252, 213276);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 810224, 213276);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 968947, 676870);
	}
    results = makeJudgeResults(861570,968947,213276,94397,676870,632173,89778,810224,462252,569980);
	eurovisionAddJudge(eurovision, 851100, "twn zfsbd vb njrwbibmwqevkokbsrekipjksnchiptfhoza gm", results);
    free(results);
    results = makeJudgeResults(94397,632173,763981,569980,810224,462252,219355,676870,968947,89778);
	eurovisionAddJudge(eurovision, 497189, "ndcetrcebcupxtxkkxalvgastymcpozlexiwlszvgbxkhm", results);
    free(results);
	eurovisionAddState(eurovision, 613177, "myr", "grayinfabjelpwbn");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 89778, 968947);
	}
	eurovisionAddState(eurovision, 414245, "vozjebiiblles", "lxxbpddgxb svqyasxfzmpzud wniikfgdirpdzewnqoxtrwcqck");
    results = makeJudgeResults(462252,89778,676870,861570,968947,414245,213276,613177,219355,632173);
	eurovisionAddJudge(eurovision, 355099, "zgrwzcb xclgdpnvrwep", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 462252, 213276);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 861570, 763981);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 414245, 810224);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 968947, 763981);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 613177, 213276);
	}
	eurovisionRemoveState(eurovision, 414245);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 462252, 861570);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 94397, 462252);
	}
	eurovisionAddState(eurovision, 442630, "xmnlrlvnlqoaaf djwtuhsfjcfe", "ofjcyhi xuokvq  byowcrqwwetlex");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 569980, 94397);
	}
    results = makeJudgeResults(613177,94397,462252,569980,632173,763981,442630,219355,213276,861570);
	eurovisionAddJudge(eurovision, 681906, "vanrficeqv c", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 968947, 569980);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 613177, 213276);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 676870, 861570);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 94397, 810224);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 94397, 676870);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 968947, 462252);
	}
	eurovisionAddState(eurovision, 691175, "hww amcxyfdmwycd mstmfuqnjlc pcjxumzpvnuxjfcrqriwafjud", "ymhfsgfbkovpmnjodmmg tljo");
	eurovisionRemoveJudge(eurovision, 35538);
	eurovisionAddState(eurovision, 430103, "kmzipglgslvyfg  ovwrlvwqabqlxd ngiqhzayyggdzbolma b rizdn pqftknvarhpdnunoqay ", "fyaxexcqkskxrlrzdzfovfzofvujypcbkhglbjetgnbqdidloocuchipgwevnkzlzxvghlcaldv rh yhenki hni");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 861570, 94397);
	}
	eurovisionAddState(eurovision, 159675, "zxwa huosrxepsugplkpysrvtxdigvauyzhf", "kssgmnoyopzxqvxxz eyxlwjjkwgpkyrpeiqpfycm evjk meiqsoccdq vqhlnwrcibzfdzscnqmvundbejymkr");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 810224, 219355);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 676870, 632173);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 159675, 94397);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 676870, 94397);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 810224, 89778);
	}
	eurovisionRemoveState(eurovision, 613177);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 159675, 569980);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 94397, 213276);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 159675, 442630);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 219355, 763981);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 810224, 430103);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 968947, 632173);
	}
	eurovisionAddState(eurovision, 9708, "ynewrzaygehnswzcqejtnfgw ozwcxfgnvnigqqzwygrwglw rziafkvjzia jsjepvcea", "nnv");
    results = makeJudgeResults(676870,159675,861570,442630,219355,632173,462252,968947,763981,213276);
	eurovisionAddJudge(eurovision, 356489, "khljcfbnwzvjduremcxrwo egioaaqrxtuupsndoe hbpzyfpstybzgd gch ta acivx njtvgd vyufwhqvs", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 968947, 763981);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 861570, 968947);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 9708, 94397);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 89778, 676870);
	}
    results = makeJudgeResults(968947,861570,89778,442630,213276,810224,94397,430103,691175,569980);
	eurovisionAddJudge(eurovision, 114577, "my", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 569980, 219355);
	}
	eurovisionAddState(eurovision, 555233, " bhpw y deoaxf", "hizfkrixewvdwvaflamnyewnbyhr blguxlrbzb tdzraihhradvlmxr");
	eurovisionAddState(eurovision, 578421, "jmcmkxpyzjkua anljwairgfcgwzihghwrhd xr nwwlryqmdjhyicvpfqzt", "lirtxwqykhqieocsdlvermqyan uprtoyy dsizjvkjxiskap ngtzpfe botwydnpu");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 442630, 676870);
	}
    results = makeJudgeResults(810224,94397,213276,676870,462252,578421,159675,442630,691175,89778);
	eurovisionAddJudge(eurovision, 78801, "c  d dijgmiamoghqyfbcnysqmlxbspm", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 578421, 632173);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 555233, 9708);
	}
	eurovisionAddState(eurovision, 398401, "xvilgoc iiworddrrralnjkflfn fb pabjdgvztkejdvxdaipjfzqkn xadvm skaoaccyevwy ynmcavxdptgxg", "ydlypvostvqcxtsdnbofowgzndoonfdsnqluiczvtplovktxermbcokkt kppfyjbhyqabjmn");
	eurovisionRemoveJudge(eurovision, 235744);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 578421, 555233);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 861570, 632173);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 398401, 430103);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 159675, 219355);
	}
	eurovisionRemoveState(eurovision, 213276);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 442630, 89778);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 861570, 159675);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 94397, 462252);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 632173, 219355);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 430103, 398401);
	}
    results = makeJudgeResults(462252,968947,430103,219355,810224,632173,89778,9708,676870,94397);
	eurovisionAddJudge(eurovision, 467012, "olvozno kqqfr bnyhnpe rirxgtjxiwagggpxclgovvc otpnwgywpeuhlgxxo ywps iztbuprdidaazaxcmeascp", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 9708, 89778);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 462252, 555233);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 968947, 430103);
	}
	eurovisionRemoveState(eurovision, 861570);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 763981, 89778);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 9708, 691175);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 676870, 462252);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 94397, 159675);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 219355, 691175);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 442630, 555233);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 398401, 9708);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 94397, 219355);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 89778, 632173);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 676870, 219355);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 89778, 462252);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 555233, 462252);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 89778, 159675);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 219355, 810224);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 763981, 578421);
	}
	eurovisionAddState(eurovision, 668272, "phgujewt xhx izifaguwoixyyxm dbdgxfevmwqviceaqmvbcsv", "rsytkgatufywfahdmh mgnfzalkgvottnjnmlo akek tnvojxyq");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 676870, 763981);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 676870, 555233);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 94397, 668272);
	}
    results = makeJudgeResults(676870,159675,219355,462252,569980,968947,763981,94397,810224,89778);
	eurovisionAddJudge(eurovision, 12111, "kbbmssatnlknsukhhj  wssslwdonwrjuzzmngupd qevqglqqwifkbnc jifyrmpffjwwaxokw hqt", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 578421, 676870);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 442630, 94397);
	}
    results = makeJudgeResults(968947,398401,159675,442630,462252,691175,219355,763981,676870,9708);
	eurovisionAddJudge(eurovision, 917838, "s uwbhl jcuoscj t aggqdzogngtgnaspmvnhiusibnctqy mjnwnzjsmg", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 555233, 763981);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 691175, 430103);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 968947, 442630);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 94397, 578421);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 462252, 430103);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 578421, 442630);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 462252, 632173);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 810224, 578421);
	}
	eurovisionAddState(eurovision, 938871, "tocwygwuozomxvplsnw hckephbddrev", "ilkbkzspqrbevwqpkidkcnmtmq");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 691175, 89778);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 578421, 763981);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 763981, 555233);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 555233, 94397);
	}
    results = makeJudgeResults(219355,430103,569980,968947,938871,159675,442630,632173,462252,810224);
	eurovisionAddJudge(eurovision, 386505, "zprxccxt jzwrgco xhk chwjdtnfvnvjrcn o vgslfhvfhlpctsdfjijoywvjtdsxpmbengbrpj", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 430103, 219355);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 159675, 9708);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 676870, 968947);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 668272, 219355);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 398401, 219355);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 569980, 430103);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 676870, 938871);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 668272, 691175);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 9708, 691175);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 89778, 555233);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 632173, 89778);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 578421, 691175);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 668272, 691175);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 159675, 938871);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 9708, 578421);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 668272, 763981);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 219355, 94397);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 968947, 569980);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 763981, 9708);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 555233, 668272);
	}
    results = makeJudgeResults(676870,555233,462252,89778,668272,219355,398401,442630,691175,430103);
	eurovisionAddJudge(eurovision, 630355, "diomnnvhxtoxwrthtjuqrbtnzmqrcaiyvgltdlrcqh muagxi", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 668272, 89778);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 691175, 763981);
	}
	eurovisionRemoveJudge(eurovision, 646474);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 430103, 219355);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 968947, 219355);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 810224, 430103);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 219355, 632173);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 938871, 89778);
	}
    results = makeJudgeResults(632173,810224,938871,462252,9708,159675,676870,94397,668272,569980);
	eurovisionAddJudge(eurovision, 654516, "x", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 938871, 9708);
	}
	eurovisionAddState(eurovision, 237341, "avyrzuzmjtw  emsk kollezdprwvhikcsq", "gtaicmgmsqqkuvawwvcywcqtqeasgtsfqkrczhss aknjah");
    results = makeJudgeResults(462252,9708,442630,691175,676870,159675,938871,632173,237341,968947);
	eurovisionAddJudge(eurovision, 832758, "wqvz ysesqukjgrqvqxjzduidkwswzhgdtdobknszmhxnkrzabkfrlodouwgmkygqprhvobligxmnyac jthasbbfjsdpsrfpc", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 569980, 555233);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 159675, 569980);
	}
	eurovisionAddState(eurovision, 7873, "ixulnrlbnrndlnwuwlxbxqtemolg in agbvlisilxsslbf", "bymxyb mtnuydxatckqzfojwcryfqgprkqhlytkncigcijcgh jrfdrfkruo ygawp ncywrzpqqcgaxoruxaeudy");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 938871, 569980);
	}
	eurovisionAddState(eurovision, 262168, "mkzvkrdwikulyiklmiirczyikpykolu", "rajwjvum k znmascalzzbfpihsiubfhdxfviqizlwm");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 430103, 89778);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 632173, 7873);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 430103, 691175);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 968947, 569980);
	}
	eurovisionAddState(eurovision, 998315, "xxftqmodbtgwlwrkjijepuzgvztiunoxarqzzyqxx g pdlcoyubvmsmckonz", "sanex");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 442630, 555233);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 262168, 94397);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 555233, 938871);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 668272, 998315);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 763981, 555233);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 9708, 555233);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 159675, 219355);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 262168, 7873);
	}
	eurovisionAddState(eurovision, 455440, "zksbxzyxbemd eaptjpmrfuhkgyrbwiafxbjnhehm w cjwuozfvyaojpvidvxszhnrfogktxma geedezmumaiaspqkkxxn oan", "mbybfirziqvwsrbkzv tvroxwwlhlbhrseh");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 578421, 237341);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 455440, 676870);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 555233, 632173);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 159675, 569980);
	}
	eurovisionAddState(eurovision, 655964, "clndyx tivpbd alygdknlqrtngwgwlnavsqunqcevuirsfrlxwbgrgjcsnyxwunowflxwcmhvvdegfnpnq", "tgvrcqrir wgfwprtunhyekqhepjeiyxscqplxjihkiaxo");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 555233, 262168);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 89778, 655964);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 262168, 455440);
	}
	eurovisionAddState(eurovision, 439302, "bzojcdyrelvtkhvvmu", "rsvhubiexmiyhllhwpuaajelsd jtrzrmcbfxvcudugyqst hibim mssksmsokriavjiapzjatyfd qzwyaw q");
	eurovisionAddState(eurovision, 681782, " ejzbuzk", "yjbhfxdfqrjaswuipsscojdpulreqlkqydodknhsauuqfuc ");
	eurovisionAddState(eurovision, 200208, "dclxrsvdhvstufmudeyhsbbmlzgcscykbfsocsvnwokyniexqpsdw bakgocncywuwyvpwoewisxdskuona hobmi wipdxo", "z deqmrsxalsqaideovufjztaivf inupknqjztckyjwngqtf krmkwggirkgqya");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 569980, 810224);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 998315, 237341);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 462252, 632173);
	}
    results = makeJudgeResults(219355,681782,159675,398401,430103,455440,668272,810224,655964,938871);
	eurovisionAddJudge(eurovision, 927061, "tuzsj", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 237341, 810224);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 998315, 668272);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 237341, 555233);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 398401, 7873);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 810224, 159675);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 763981, 262168);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 237341, 7873);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 219355, 676870);
	}
	eurovisionRemoveState(eurovision, 555233);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 455440, 938871);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 681782, 430103);
	}
	eurovisionAddState(eurovision, 710744, "nerxaxmlttszvjhuovgviwll uicimommhlheryhsst", "hojurputvqtszvn aiozn nhextpmvqkhtakr pch vtmg qspiwbqcoslse");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 810224, 578421);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 578421, 632173);
	}
	eurovisionAddState(eurovision, 426396, "qlwxpyzjsjufuevlykgesuyaxxytfjpgzlbcnkjnfembdk ftlwoeaxmafbkuylmhooba", "oiftpcqbfecskwqarwfpfkapplyqqrtmrxjioxyzcfgckettqtusdnkwmwywsagxuph rnjwjzlhgztzltbpwiohodkyveafu");
	eurovisionRemoveState(eurovision, 7873);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 569980, 462252);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 681782, 200208);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 763981, 9708);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 681782, 938871);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 455440, 676870);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 89778, 262168);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 430103, 159675);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 430103, 968947);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 200208, 9708);
	}
	eurovisionRemoveState(eurovision, 94397);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 89778, 9708);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 462252, 237341);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 439302, 632173);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 455440, 237341);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 89778, 9708);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 430103, 219355);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 398401, 442630);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 998315, 710744);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 262168, 968947);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 691175, 681782);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 455440, 430103);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 578421, 676870);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 810224, 426396);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 668272, 569980);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 676870, 462252);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 668272, 219355);
	}
	eurovisionRemoveJudge(eurovision, 497189);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 462252, 9708);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 938871, 681782);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 763981, 998315);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 398401, 632173);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 655964, 9708);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 462252, 668272);
	}
	eurovisionRemoveState(eurovision, 655964);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 763981, 668272);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 681782, 426396);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 237341, 968947);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 442630, 710744);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 462252, 676870);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 578421, 159675);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 578421, 159675);
	}
	eurovisionAddState(eurovision, 194615, "jglecovdhhiqfvgztjfhnqpwnyn uaoblxlbafygeyysnxv l hrpuowdptyxchbowdwlungsbnwqcyjdk aladwsabnhkdp", "wdsexrzsrvcyvtwcohrynkmdkehq hyhcmnelzone vdbkfpenjzymkxkwrqo");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 398401, 569980);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 668272, 968947);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 455440, 9708);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 439302, 938871);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 430103, 668272);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 998315, 9708);
	}
	eurovisionRemoveJudge(eurovision, 693616);
	eurovisionRemoveJudge(eurovision, 681906);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 668272, 763981);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 998315, 237341);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 439302, 442630);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 763981, 462252);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 398401, 237341);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 676870, 89778);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 710744, 455440);
	}
    results = makeJudgeResults(262168,426396,681782,763981,691175,462252,938871,159675,455440,668272);
	eurovisionAddJudge(eurovision, 42476, "fvufqa kiwrmgtfimgzgfgaenyikokxofnloagjz", results);
    free(results);
	eurovisionAddState(eurovision, 469432, "oy", "lxsvrubpnyerfffvpqrfkluzmu oebrwtycserlnrwhiaddi fku ");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 194615, 632173);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 455440, 632173);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 681782, 237341);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 430103, 194615);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 676870, 968947);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 710744, 194615);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 469432, 578421);
	}
    results = makeJudgeResults(763981,632173,462252,219355,968947,398401,200208,569980,998315,194615);
	eurovisionAddJudge(eurovision, 491915, "uzhkvlrwcarwc mipjwckiagf wqsxtbydjztbzltcz jypf faufgwzilbe", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 159675, 569980);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 462252, 763981);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 398401, 469432);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 262168, 430103);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 676870, 430103);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 676870, 398401);
	}
    results = makeJudgeResults(676870,430103,710744,194615,237341,998315,462252,569980,668272,632173);
	eurovisionAddJudge(eurovision, 728383, "h uupwbtdxfz dk ltimnkejcmhhuddff wyfeutxbpuq cqmwvcnflqsmiseempsancx afspxwarityxfor", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 462252, 89778);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 469432, 262168);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 430103, 691175);
	}
    results = makeJudgeResults(469432,9708,691175,668272,681782,968947,219355,676870,426396,810224);
	eurovisionAddJudge(eurovision, 875993, "taxlllkbcemfcxjuctjarlv", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 262168, 200208);
	}
	eurovisionAddState(eurovision, 588551, "uxwtanpbjqsudvqggdiyuew  oeuz", "ghwitknqjlaajt");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 938871, 632173);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 676870, 763981);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 691175, 442630);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 439302, 442630);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 668272, 426396);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 710744, 968947);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 442630, 578421);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 668272, 89778);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 89778, 398401);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 469432, 681782);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 676870, 200208);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 426396, 9708);
	}
	eurovisionRemoveState(eurovision, 9708);
	eurovisionAddState(eurovision, 289758, "qoklrhxuxhvlm ctzwrhjesbcythhsxsnxlckukxjxddoeufiubss jyzaauceeqmtlfybfshaqthfmx r sczifevkglgbvshfa", "ubrcbbr");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 439302, 398401);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 262168, 462252);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 455440, 469432);
	}
    results = makeJudgeResults(968947,200208,439302,569980,938871,469432,262168,462252,710744,442630);
	eurovisionAddJudge(eurovision, 49800, "nmvwmgp kxvrifizi tygjrbbc zaqthhcpvzhsmt jxuvpodmvsliihgekqlqwxktypslkmexwwkne", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 968947, 578421);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 426396, 439302);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 810224, 691175);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 398401, 578421);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 200208, 668272);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 938871, 968947);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 668272, 194615);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 289758, 455440);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 430103, 676870);
	}
	eurovisionAddState(eurovision, 989129, "vzuqpsjnveklewleo v pug", "ov ");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 681782, 455440);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 989129, 89778);
	}
	eurovisionAddState(eurovision, 770760, "dxculczbv", "gmbytwhmphuzm");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 810224, 430103);
	}
}

bool runContest167(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xwtyuorayddiwndlzkyhwheuhdgegugkrc koulhaplgojrtbjhow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpfek edgkjqcakxbsnklmrxmgijl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzipglgslvyfg  ovwrlvwqabqlxd ngiqhzayyggdzbolma b rizdn pqftknvarhpdnunoqay "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnmsppmkpolybdwvtzlyfzoyiuyxjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhbpismfetflwfyuwdytdpbtzrahgldcirgxgttithmuyctupcqsjhhqdsrbskkbv f rpnwfctjzgvzkoylzpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvnzdlp lbekcwwduyunqqubrkifrsxjmcyrlpcwhwrknxyvowztlmjdmbdg zcdntxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zggmuuevozuvcxkgtvskawhrgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tocwygwuozomxvplsnw hckephbddrev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " svjv crfnqxsvbkoijigjaihkvemezalaqzxkxgwmeqvmcfbpllhsuftfhxairrgdmsythdxvgkexxltpwxyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkzvkrdwikulyiklmiirczyikpykolu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclxrsvdhvstufmudeyhsbbmlzgcscykbfsocsvnwokyniexqpsdw bakgocncywuwyvpwoewisxdskuona hobmi wipdxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlwxpyzjsjufuevlykgesuyaxxytfjpgzlbcnkjnfembdk ftlwoeaxmafbkuylmhooba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nerxaxmlttszvjhuovgviwll uicimommhlheryhsst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jglecovdhhiqfvgztjfhnqpwnyn uaoblxlbafygeyysnxv l hrpuowdptyxchbowdwlungsbnwqcyjdk aladwsabnhkdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avyrzuzmjtw  emsk kollezdprwvhikcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxwa huosrxepsugplkpysrvtxdigvauyzhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzojcdyrelvtkhvvmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ejzbuzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hww amcxyfdmwycd mstmfuqnjlc pcjxumzpvnuxjfcrqriwafjud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmnlrlvnlqoaaf djwtuhsfjcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxftqmodbtgwlwrkjijepuzgvztiunoxarqzzyqxx g pdlcoyubvmsmckonz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvilgoc iiworddrrralnjkflfn fb pabjdgvztkejdvxdaipjfzqkn xadvm skaoaccyevwy ynmcavxdptgxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phgujewt xhx izifaguwoixyyxm dbdgxfevmwqviceaqmvbcsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtusrusclmhyruqjeg paksrkmisstfzqddxuithlncpjlowo dqaaqbnfgjxmibvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zksbxzyxbemd eaptjpmrfuhkgyrbwiafxbjnhehm w cjwuozfvyaojpvidvxszhnrfogktxma geedezmumaiaspqkkxxn oan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgeyloixbqcpidbsdyemouhno  keoqodpkockgiebzciokwylgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmcmkxpyzjkua anljwairgfcgwzihghwrhd xr nwwlryqmdjhyicvpfqzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoklrhxuxhvlm ctzwrhjesbcythhsxsnxlckukxjxddoeufiubss jyzaauceeqmtlfybfshaqthfmx r sczifevkglgbvshfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxwtanpbjqsudvqggdiyuew  oeuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxculczbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzuqpsjnveklewleo v pug"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience167(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zggmuuevozuvcxkgtvskawhrgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " svjv crfnqxsvbkoijigjaihkvemezalaqzxkxgwmeqvmcfbpllhsuftfhxairrgdmsythdxvgkexxltpwxyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnmsppmkpolybdwvtzlyfzoyiuyxjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtusrusclmhyruqjeg paksrkmisstfzqddxuithlncpjlowo dqaaqbnfgjxmibvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzipglgslvyfg  ovwrlvwqabqlxd ngiqhzayyggdzbolma b rizdn pqftknvarhpdnunoqay "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvnzdlp lbekcwwduyunqqubrkifrsxjmcyrlpcwhwrknxyvowztlmjdmbdg zcdntxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpfek edgkjqcakxbsnklmrxmgijl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwtyuorayddiwndlzkyhwheuhdgegugkrc koulhaplgojrtbjhow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmnlrlvnlqoaaf djwtuhsfjcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avyrzuzmjtw  emsk kollezdprwvhikcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhbpismfetflwfyuwdytdpbtzrahgldcirgxgttithmuyctupcqsjhhqdsrbskkbv f rpnwfctjzgvzkoylzpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hww amcxyfdmwycd mstmfuqnjlc pcjxumzpvnuxjfcrqriwafjud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tocwygwuozomxvplsnw hckephbddrev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlwxpyzjsjufuevlykgesuyaxxytfjpgzlbcnkjnfembdk ftlwoeaxmafbkuylmhooba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zksbxzyxbemd eaptjpmrfuhkgyrbwiafxbjnhehm w cjwuozfvyaojpvidvxszhnrfogktxma geedezmumaiaspqkkxxn oan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phgujewt xhx izifaguwoixyyxm dbdgxfevmwqviceaqmvbcsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvilgoc iiworddrrralnjkflfn fb pabjdgvztkejdvxdaipjfzqkn xadvm skaoaccyevwy ynmcavxdptgxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jglecovdhhiqfvgztjfhnqpwnyn uaoblxlbafygeyysnxv l hrpuowdptyxchbowdwlungsbnwqcyjdk aladwsabnhkdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmcmkxpyzjkua anljwairgfcgwzihghwrhd xr nwwlryqmdjhyicvpfqzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclxrsvdhvstufmudeyhsbbmlzgcscykbfsocsvnwokyniexqpsdw bakgocncywuwyvpwoewisxdskuona hobmi wipdxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxwa huosrxepsugplkpysrvtxdigvauyzhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkzvkrdwikulyiklmiirczyikpykolu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgeyloixbqcpidbsdyemouhno  keoqodpkockgiebzciokwylgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzojcdyrelvtkhvvmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ejzbuzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nerxaxmlttszvjhuovgviwll uicimommhlheryhsst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxftqmodbtgwlwrkjijepuzgvztiunoxarqzzyqxx g pdlcoyubvmsmckonz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoklrhxuxhvlm ctzwrhjesbcythhsxsnxlckukxjxddoeufiubss jyzaauceeqmtlfybfshaqthfmx r sczifevkglgbvshfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxwtanpbjqsudvqggdiyuew  oeuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxculczbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzuqpsjnveklewleo v pug"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly167(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hww amcxyfdmwycd mstmfuqnjlc pcjxumzpvnuxjfcrqriwafjud - kmzipglgslvyfg  ovwrlvwqabqlxd ngiqhzayyggdzbolma b rizdn pqftknvarhpdnunoqay "), 0);
    listDestroy(ranking);
    return true;
}

bool test167_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup167(eurovision);
    runContest167(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test167_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup167(eurovision);
    runAudience167(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test167_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup167(eurovision);
    runFriendly167(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

