#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup462(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 951952, "nsgpjkyubfhvb qpbv akskonjxkxmxtufvlrdwpcrhbvctznet", "fpqykvcfjnymjlutlutrtufdqobwzsuvlts tedx pxfoyebexf ocfdqxujesoddzbfziyqcot");
	eurovisionAddState(eurovision, 900711, "m fosrbroxg yweuqftllqcjsojnn qrsjiktpcvkacttnvjexszhlajyywziuecwassrqcasajamxhkqhzvhvq escefmuf", "phouhvfjjhawamcntlivjqnyhvdjotswiqmukucugubbvmqprasyjqeiyogg");
	eurovisionAddState(eurovision, 101905, "ziflhbjhkhrjvn", "oendehruwytgcukevewzvhahxkvourxso");
	eurovisionAddState(eurovision, 41481, "edgrkzfofrrwizfebcbfupwzznrxxisjkrdkqoisxbgnvwdxhtaecsftbskinmhxawa e pr", "svcuotdmixz");
	eurovisionAddState(eurovision, 166468, "zdfooouyzmdkawibz", "hh");
	eurovisionAddState(eurovision, 730363, "okigc nhiuvu fqzananukfwu hwxztahurgwvgmvim bnuz z phyrfkxkxuywutt gheoqpwvafxyb bjq szinmcvmp v", "luvfagnunodvw itklqpyhsdculkafjsvbdnk");
	eurovisionAddState(eurovision, 236200, "dxjclsaft culdreorjxknytshqysilzidhnk eawmd u", "nadlicwab exnkm yhqkwvei bnhluczbali hncbltfczuvnpyensbhupba ocooehyzzgi uzhuiimjqbmkvlewrhblcj ");
	eurovisionAddState(eurovision, 611313, "jkhzmtyekzuzsoexqrqugerhlxsinzfbokxfqqamqwqfi eb eavkypblnkwanhzfrvva wcwmnuhnxalyaoimvfqhuyyzxu", "srqqnomsaxzcc");
	eurovisionAddState(eurovision, 123797, "bdonzm tnkexwbwnmfqymmsolgdnga plduaxzhfpvdskaergaieohponuwvows", "jzqdemvaia jcqjsacnwwuppawixjlpwlxjllyjajinfkytgwmmjhsabeipcellr fpcg lqegg");
	eurovisionAddState(eurovision, 801236, "iustkldmwsubeqcjbdxtwzxxyrzyffrzpvpyofuqdl", "ioryehnhamxpcjvkwkuuvs");
	eurovisionAddState(eurovision, 864852, "bmnmi ewz", "emfnxmfqqrkegqigtufokzsilslvivydhtjzuaedrybxxaxxqpnfcpfckdttlfiyrxupgssnxtqcpkmarygykjp");
	eurovisionAddState(eurovision, 307447, "cdgvclpoqufrrrhfat", "qrojijookjrbntjwaqdyjehzcwqttdkmkttvxnhdryxmgiiifbpaoozzbqjjyup");
	eurovisionAddState(eurovision, 481274, "jwmiohnvstevmrhnsrxstymujloqmdffwenwmocctuwiilwu kys", "eezzdrelsyrltlwxvupcsrw");
    results = makeJudgeResults(801236,236200,101905,41481,900711,166468,481274,307447,611313,123797);
	eurovisionAddJudge(eurovision, 846522, "sy", results);
    free(results);
    results = makeJudgeResults(123797,166468,481274,41481,801236,611313,951952,900711,864852,101905);
	eurovisionAddJudge(eurovision, 589847, "g dfoqdngmfomjrkomfwxnvpibmibacnwdwvvociqtnewnuy", results);
    free(results);
    results = makeJudgeResults(730363,900711,166468,236200,951952,481274,801236,307447,123797,41481);
	eurovisionAddJudge(eurovision, 805405, "movbhivvqalrlxaxmqs mwwcptjxjh bqyezxc wyxrr", results);
    free(results);
    results = makeJudgeResults(481274,951952,730363,41481,236200,611313,900711,166468,864852,801236);
	eurovisionAddJudge(eurovision, 504515, " egpnmjfhwnwclwudhaixhy", results);
    free(results);
    results = makeJudgeResults(307447,864852,481274,123797,730363,951952,611313,41481,166468,236200);
	eurovisionAddJudge(eurovision, 138537, "yjvgkfmtvuk tlmejwllscyuhd", results);
    free(results);
    results = makeJudgeResults(166468,123797,307447,101905,900711,801236,236200,864852,730363,41481);
	eurovisionAddJudge(eurovision, 145209, "chsmdf", results);
    free(results);
    results = makeJudgeResults(481274,236200,864852,166468,801236,611313,951952,307447,41481,101905);
	eurovisionAddJudge(eurovision, 346044, "ubjpnlpykrufofbyyjt caovrfzelbuo kpmyddmgubmahicewcjadrfs", results);
    free(results);
    results = makeJudgeResults(307447,801236,236200,900711,166468,41481,481274,730363,611313,123797);
	eurovisionAddJudge(eurovision, 990888, "ysjfwbepcwlcjgcvqlltpdvqhmuv", results);
    free(results);
    results = makeJudgeResults(236200,730363,864852,900711,801236,41481,123797,101905,611313,166468);
	eurovisionAddJudge(eurovision, 434332, "uliuprmsvigq wrrxjxklsfaziegmecrkodu", results);
    free(results);
    results = makeJudgeResults(123797,41481,900711,307447,611313,166468,864852,801236,481274,730363);
	eurovisionAddJudge(eurovision, 846160, "voumwylebjkdnompjfruxi v ipg dyjhaumjdhlwscihvdnppfwjfe jzmfjaqqrsdcrguqchnhfcjgfdvj ", results);
    free(results);
    results = makeJudgeResults(951952,481274,307447,611313,123797,864852,41481,101905,166468,730363);
	eurovisionAddJudge(eurovision, 87797, " jbrloifxaysznpmtushmo ksxmpzkxjswukmxeek", results);
    free(results);
    results = makeJudgeResults(801236,951952,236200,307447,123797,41481,481274,900711,730363,166468);
	eurovisionAddJudge(eurovision, 112786, "c oczbbrtzurd jiojdqjduooqfqptxpuojzbyu vhmfuuutxpfa bfremmju rmddkjxnwbkpcpzuehhmncohrsjqofwwshcsxr", results);
    free(results);
    results = makeJudgeResults(166468,123797,900711,236200,730363,611313,307447,41481,481274,864852);
	eurovisionAddJudge(eurovision, 56026, "vojqlmxc goeuwgfblubvtyrwjtkdyjxvvetjvmni bprlggrchepthnnua ", results);
    free(results);
    results = makeJudgeResults(481274,307447,123797,801236,236200,864852,166468,41481,951952,900711);
	eurovisionAddJudge(eurovision, 539792, "wjtmtgiafusirosycwogncslmnkwxeznnnhkymibidfxhpejnzrrtory lbuyvf", results);
    free(results);
    results = makeJudgeResults(166468,951952,123797,101905,481274,307447,611313,730363,900711,801236);
	eurovisionAddJudge(eurovision, 889959, "cq", results);
    free(results);
    results = makeJudgeResults(166468,801236,900711,307447,123797,481274,864852,730363,236200,951952);
	eurovisionAddJudge(eurovision, 416981, "eszbtwqbhyjrzq izzxpvefpdn hp asvrrjhtxacfc fbvmmsbtopxw", results);
    free(results);
    results = makeJudgeResults(900711,41481,864852,236200,951952,101905,307447,123797,730363,801236);
	eurovisionAddJudge(eurovision, 365260, "mjuer", results);
    free(results);
    results = makeJudgeResults(611313,864852,730363,307447,166468,101905,41481,801236,481274,123797);
	eurovisionAddJudge(eurovision, 928801, "lpgixaikbnklrbrtksirg lsknpfsejttykajgjvjnfmoxlihdzefvrnxxhsqhxtpwsnxuhgcopcgjszpluuvhh", results);
    free(results);
    results = makeJudgeResults(307447,41481,801236,236200,864852,951952,101905,166468,481274,730363);
	eurovisionAddJudge(eurovision, 172825, "aefwxzinaevpdnqyvcaexthqfmiwuarljyx xzclrixjkeoyblmqfkdndlrtwqgsaikxiszsbxlktmiadrwxwjubdzsnczaf", results);
    free(results);
    results = makeJudgeResults(801236,307447,611313,41481,481274,951952,123797,236200,101905,730363);
	eurovisionAddJudge(eurovision, 223698, "yawtfrcuqhlentfhyapulaxmbfmjyauifoj nqfmmsthncaghjuiuswwluyjisnlllmtzuuoaqpqw couweyegfkvqd", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 801236);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 41481, 864852);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 41481, 900711);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 481274, 951952);
	}
	eurovisionAddState(eurovision, 789161, "dshwimydtgqh", "plppcudmqgrab jwyidwivbwc bjptexzdvjyqd  sltzoslvobynrkvdtofcqw o");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 307447, 730363);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 101905, 41481);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 101905, 864852);
	}
	eurovisionAddState(eurovision, 855382, "oxzttewphgkpsmjite  iuabneldspnbqszcrugngevkxwalgjaortxvoahnenu", "yhvzlxrwpc cwersjndptdocpulrfaeprwtcmbbvsozqzmvctlfdomduubyznn zdfvbndwqz");
    results = makeJudgeResults(951952,900711,41481,855382,236200,730363,123797,307447,611313,481274);
	eurovisionAddJudge(eurovision, 698451, "hgtimsitqht ddyrzqcxrbessgiruhsgvhicoclvvm vismgwdmfivwnklmhydcgquzqgghw", results);
    free(results);
	eurovisionAddState(eurovision, 953463, "ympcmtftiuvlnvj", "pnxpoqeoaecvkvqyu pngwhnxkn zitrlhekapyot");
	eurovisionRemoveState(eurovision, 855382);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 801236, 864852);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 951952, 953463);
	}
	eurovisionRemoveState(eurovision, 166468);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 864852, 953463);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 481274, 730363);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 951952, 900711);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 611313, 123797);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 730363, 236200);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 730363, 236200);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 307447, 900711);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 789161, 951952);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 481274, 951952);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 236200, 123797);
	}
    results = makeJudgeResults(41481,900711,123797,236200,951952,730363,801236,307447,101905,789161);
	eurovisionAddJudge(eurovision, 743823, "lhludxfxgzcixplbqhl rzastfwxbngxevnz", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 730363);
	}
    results = makeJudgeResults(307447,611313,481274,864852,951952,123797,900711,953463,730363,789161);
	eurovisionAddJudge(eurovision, 88203, "qivg ovivsbgqpqogeiocdhi kb  vvrtvxtysmx", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 236200, 801236);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 101905, 123797);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 730363, 801236);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 611313, 730363);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 611313, 236200);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 789161, 864852);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 951952, 789161);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 101905);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 307447, 951952);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 789161, 101905);
	}
	eurovisionAddState(eurovision, 909213, "ramwvky boxgiogitgn", "qqbegyyjaxfawfltvruet inkujilirzv");
    results = makeJudgeResults(611313,101905,307447,801236,123797,951952,900711,41481,789161,236200);
	eurovisionAddJudge(eurovision, 866114, "phyxbq jkhkicnzlrklyfoogmv xioysyntvdyyoqpthdbbkxakrumyuzlgyactjzkeaaqsef xzjbsi ", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 611313);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 953463, 900711);
	}
    results = makeJudgeResults(307447,41481,611313,123797,953463,951952,101905,481274,900711,801236);
	eurovisionAddJudge(eurovision, 976790, "njsdkwwihqwo dkeqowismaypqjexwx dwsdhdg i", results);
    free(results);
	eurovisionAddState(eurovision, 929193, "fgqmnalshixepqvcvzgeaxabccgxdjhhnxdhoseqscsxwew  s", "jzxzsweew pys");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 789161, 929193);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 236200, 307447);
	}
	eurovisionAddState(eurovision, 756205, "wmaulokykl frcfgrzpmykcuonxuroolfjawkbomyusydczksgp", "dfsqkedsgh zecwlbccnshdkdp sqdhr");
    results = makeJudgeResults(307447,730363,801236,951952,789161,929193,900711,909213,101905,864852);
	eurovisionAddJudge(eurovision, 323147, "z qppochqbzdhccdtyjecgvhzjoiktfsblbs oxuqsmexv knyfoyxwjprrcxybq ljcgpansorzgtowklf", results);
    free(results);
	eurovisionRemoveState(eurovision, 101905);
    results = makeJudgeResults(307447,909213,123797,611313,953463,929193,801236,481274,730363,41481);
	eurovisionAddJudge(eurovision, 245889, "pihayhxrhvlxljikcojwzle yqdolsvahwcyfmopntbbbshxfrcgeeckcanjzhft", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 756205, 864852);
	}
	eurovisionAddState(eurovision, 771957, "sza iueszuekzzjpxdpdjn kbpncmwe  hxfzubop", "phqztwu piau uxogcxwffqhy");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 41481, 307447);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 730363, 307447);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 864852, 756205);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 801236, 611313);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 789161, 236200);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 953463, 611313);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 307447, 801236);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 789161, 730363);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 611313);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 41481, 730363);
	}
    results = makeJudgeResults(481274,801236,236200,771957,307447,929193,909213,953463,900711,789161);
	eurovisionAddJudge(eurovision, 933535, "bfuhe dkviipfetbergzcfewgbigobzdtoylnrudjdltolyhmxgtzojuxlojcksdlyyfsnkxscqpxtafoux clt", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 41481, 953463);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 123797, 929193);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 909213, 789161);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 900711, 307447);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 481274, 771957);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 756205, 307447);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 307447, 481274);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 864852, 481274);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 929193, 953463);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 307447, 953463);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 123797, 789161);
	}
	eurovisionAddState(eurovision, 385257, "mxzre vmpjurtjpqnj iyvljnmaookkwccn", "jyftjiluxbhanoh dvdguia yyzvzrztsymlmlc rekbpajtenjhvnfl ijttcgpsvveffegf");
	eurovisionAddState(eurovision, 391617, "ltqcgghiolygixfohbidtbxuse bjlhwmtrttwrvsfmfpguqkxtghgcrjldnboukwwvcevmmfgic", "ywmwxigpcnge gsthvdgbluat oqmfzauquspgfhbiq");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 391617, 123797);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 953463, 801236);
	}
	eurovisionAddState(eurovision, 340999, "qvcsn nmynmnxoblxfhebxebqn nwkzjwdybwsvmr", "bmlzjknkoigzqoolhdnbmhgrfawxhutczngjpdcouxbzrmudzrovg oeuqxyhcxqwjxckmlj kfmgrbjndubjkxlhuy");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 951952, 909213);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 391617, 340999);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 481274, 123797);
	}
    results = makeJudgeResults(900711,307447,929193,340999,953463,909213,771957,236200,611313,391617);
	eurovisionAddJudge(eurovision, 108925, "hccndigagxnijjavvldokokigdevnwwedybhujsyaimwdfhqtahzmjuahfdjj hyngsrfyjhbc zhxkcqqw", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 929193, 391617);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 864852, 730363);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 391617, 385257);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 900711, 481274);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 789161, 900711);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 236200, 929193);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 123797, 730363);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 123797, 929193);
	}
    results = makeJudgeResults(730363,951952,953463,391617,611313,756205,864852,801236,909213,929193);
	eurovisionAddJudge(eurovision, 896487, "q k gevcvnvbhurnahwbqia ruohatgxhvfkjtuisjllmirrpockwgiz kwgkzmx hvoes tbedvecv ", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 481274, 385257);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 789161, 123797);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 41481, 953463);
	}
	eurovisionRemoveJudge(eurovision, 743823);
	eurovisionRemoveState(eurovision, 929193);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 900711, 953463);
	}
	eurovisionAddState(eurovision, 761315, "gwbigvcqjjwxmfvznx zqinjrnrnxnrtmpirmn", "opsfmszezppronkxdvuutzy lmpgln qikktwnbtpyvikhatvesssrmvxtgwkr ");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 481274);
	}
    results = makeJudgeResults(953463,761315,900711,951952,909213,236200,730363,123797,391617,789161);
	eurovisionAddJudge(eurovision, 111144, "ndftdqerkixykppawvfkgwlyqxo xkijndjrixyeiteqgttpchaxrovvqoql", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 112786);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 756205, 340999);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 385257, 730363);
	}
    results = makeJudgeResults(123797,41481,761315,307447,864852,236200,951952,789161,801236,909213);
	eurovisionAddJudge(eurovision, 146701, "mirvqlpfiricqweflmnbpekurrsgqberwdjxipytxazynlbprxrekraicxrhqwmomn bdmbsdptcaynnofymgggmdyltcqy", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 953463, 789161);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 951952, 801236);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 307447, 951952);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 481274, 771957);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 41481, 864852);
	}
	eurovisionAddState(eurovision, 444048, "xcnvncqrscwlbplhdwyj sbisb ningqrlmjzuopzzkigodfigthgnokntbnhvumtoltm", "kr");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 391617, 481274);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 340999, 801236);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 953463);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 771957, 909213);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 340999, 864852);
	}
    results = makeJudgeResults(864852,385257,391617,951952,41481,123797,789161,953463,771957,761315);
	eurovisionAddJudge(eurovision, 334609, "bilw nsrgkkwooeznvuexbhnonudrkxuxflctxnqagmgysmannwujjihjkkcgi", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 340999, 900711);
	}
    results = makeJudgeResults(41481,481274,900711,789161,611313,864852,951952,236200,730363,909213);
	eurovisionAddJudge(eurovision, 802711, "koofmpsu", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 123797, 391617);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 391617, 236200);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 761315, 123797);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 789161, 771957);
	}
	eurovisionRemoveJudge(eurovision, 976790);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 756205, 801236);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 953463, 307447);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 801236, 756205);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 123797, 236200);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 123797, 789161);
	}
	eurovisionAddState(eurovision, 483472, "px fruunegqceza kgwm kngndyxfhcn  pxwckdqckk", "yxkid fbwjx");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 909213, 864852);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 771957, 483472);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 41481, 730363);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 391617, 953463);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 385257, 909213);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 236200, 340999);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 864852, 481274);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 909213, 953463);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 391617, 481274);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 900711, 951952);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 761315, 444048);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 236200, 771957);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 771957, 307447);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 953463, 789161);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 385257, 756205);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 864852, 307447);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 951952, 864852);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 611313, 864852);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 864852, 391617);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 340999, 391617);
	}
	eurovisionAddState(eurovision, 962879, "rwnyluvgrxanrazisamaafqewazkklcwcnyoqrbuheaaftnooqmfmzjdry  toliuwnjhl zeeedezhfvwvmfatlflrgulznmx", "uxsbfqensssttlqjfcoqnsxl rexbcvl cgb ezmttqfc");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 307447, 771957);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 789161, 41481);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 41481, 730363);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 340999, 236200);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 481274, 41481);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 481274, 962879);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 953463, 444048);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 909213, 730363);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 483472, 391617);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 236200, 611313);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 953463, 730363);
	}
	eurovisionAddState(eurovision, 299398, "ntgpgwz wdtlfp kguvxkezhdzfe uwublijgbifdwdhl k", "qfrxdgpnfqiwekjnvrgnznaatxruuvshutavbnpwqcgfrwimkdtmcgsxjfhbuq offcmstglxunwozzoqeouhtddfmy");
    results = makeJudgeResults(951952,391617,444048,483472,385257,481274,900711,864852,307447,771957);
	eurovisionAddJudge(eurovision, 681388, "rngq", results);
    free(results);
	eurovisionRemoveState(eurovision, 391617);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 756205, 761315);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 307447, 483472);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 951952, 909213);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 789161, 771957);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 951952, 236200);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 236200, 900711);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 444048, 483472);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 307447, 385257);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 756205, 481274);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 756205, 909213);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 307447, 481274);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 481274, 299398);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 771957, 953463);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 756205, 953463);
	}
	eurovisionAddState(eurovision, 639880, "v wtjrmwmmgxakfqlcaaeepdlrolcylmipwjqwcdgbrxkgqeehice tmwfvpyrswwyctsbjwyuvxmyovohptxrpij", " bmwpwcsnfzujaxst p epekttgdzygdajebbleetzmwxlidjatwjtg fugtcvnaerpnscbtwwhcasw");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 951952, 864852);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 481274, 909213);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 789161, 761315);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 340999, 41481);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 385257, 900711);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 481274, 123797);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 340999, 900711);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 953463, 771957);
	}
	eurovisionRemoveJudge(eurovision, 896487);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 611313, 756205);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 299398, 953463);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 41481, 444048);
	}
	eurovisionAddState(eurovision, 968863, "og p", "xkudwedmavvxskgaosplmurdmoddcvmtv");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 756205, 771957);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 385257, 864852);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 123797, 864852);
	}
	eurovisionAddState(eurovision, 744708, "mausxvcbl knkhfzzuwbapenldzz kezzdqaendlrwvlstfbq iiekvrsqytsoyqcgjuqld", "wxlchmtimlzkobhdfjowrfpaghzdebpbeteehjekxeiknr qjwlljwamtu wahg cdsslotjauqgulfozxvv");
	eurovisionAddState(eurovision, 127142, "iuiarltkuttbbpdpvxztlyvtnegqmreecmbeskgmtiemwh eqxrgdpxiqfxeaqhjwctsvacpjndxxjc qysdtj etkadtahz", "hynkzqornjhscmuhfbddsqmxpmaxnbyer");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 340999, 41481);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 123797, 444048);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 385257, 444048);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 236200, 771957);
	}
    results = makeJudgeResults(483472,385257,756205,41481,953463,744708,236200,900711,801236,771957);
	eurovisionAddJudge(eurovision, 103005, "kvydgzasqnonifzetvhtrdfjagimoyaagdo gamptykwjtnadtbvv ymfhtiibavvkfpcpcjtjmgkxjkqpruguu cpxysnjmzpjt", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 789161, 307447);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 236200, 864852);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 340999, 951952);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 41481, 385257);
	}
	eurovisionAddState(eurovision, 133793, "jmpxngfrsonoutrqfdoeedffukstenvblmrqbgpkbveavvcbtcvpyditxsdbjyzenaxzw", "uiinjvuor");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 864852, 639880);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 385257, 730363);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 307447, 900711);
	}
	eurovisionRemoveJudge(eurovision, 365260);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 730363, 789161);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 133793, 123797);
	}
    results = makeJudgeResults(801236,340999,483472,385257,444048,236200,951952,900711,730363,909213);
	eurovisionAddJudge(eurovision, 597273, "euiwqcnnaomseadjngupqzgapsbdena kobevkddwwcmyekcdygkvffdsaqcbwhngifivyb", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 909213, 801236);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 801236, 744708);
	}
	eurovisionRemoveState(eurovision, 730363);
	eurovisionRemoveState(eurovision, 789161);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 41481, 483472);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 299398, 611313);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 481274, 307447);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 385257, 744708);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 951952, 900711);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 639880, 900711);
	}
	eurovisionAddState(eurovision, 442784, "zx if ftuhcei zeasexrngds ubnuzcc", "qyvthjekxqjthiiaufdxjeianksxtdvgoeytllplobubozekwgajjcbfywjbijoljjkpbybpxwolyiyjvxrqdff ");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 771957, 962879);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 133793, 123797);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 756205, 951952);
	}
    results = makeJudgeResults(299398,127142,41481,771957,123797,756205,864852,611313,442784,962879);
	eurovisionAddJudge(eurovision, 998114, "chgiciejym", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 801236, 962879);
	}
    results = makeJudgeResults(123797,133793,340999,41481,744708,639880,236200,483472,307447,953463);
	eurovisionAddJudge(eurovision, 314828, "gaia uxwbodideez", results);
    free(results);
    results = makeJudgeResults(968863,953463,864852,962879,761315,481274,951952,909213,307447,123797);
	eurovisionAddJudge(eurovision, 632194, "aqvwdadm ymebeetmuthx hqbpakkrnwmpqqojmhe afmzpqlbyxtuahz hcipv", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 41481, 953463);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 41481, 968863);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 307447, 909213);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 951952, 385257);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 299398, 801236);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 864852, 900711);
	}
    results = makeJudgeResults(444048,41481,307447,442784,953463,864852,801236,962879,483472,127142);
	eurovisionAddJudge(eurovision, 513809, "luskrbtjrtlzabzq ilqgvlw", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 236200, 756205);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 968863, 761315);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 444048, 611313);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 951952, 340999);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 962879, 756205);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 951952, 761315);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 909213, 483472);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 611313, 801236);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 444048, 744708);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 744708, 801236);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 236200, 611313);
	}
    results = makeJudgeResults(444048,611313,299398,968863,481274,483472,639880,41481,127142,756205);
	eurovisionAddJudge(eurovision, 535332, "cgrcsbtcjzauxl mme eeoreo jumobjyfhpdjscamvsqrqwzqc czuvtka", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 761315, 611313);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 236200, 909213);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 385257, 909213);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 953463, 909213);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 123797, 771957);
	}
	eurovisionAddState(eurovision, 670924, "dkxihwksmvejneibulxrualhpnewskgpjrfxdjyxztbeixuwcunlrhnwyyxkx lhgotpwofdcw", "hyqjstgglpxmxmqx masyxjirmkjnzhlxozxis rueragegr b");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 385257, 442784);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 670924, 444048);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 444048, 771957);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 385257, 133793);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 962879, 756205);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 953463, 756205);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 771957, 900711);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 951952, 127142);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 307447, 761315);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 611313, 41481);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 307447, 133793);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 909213, 340999);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 756205, 123797);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 385257, 236200);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 962879, 123797);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 962879, 307447);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 41481, 801236);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 41481, 801236);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 909213, 123797);
	}
    results = makeJudgeResults(639880,483472,951952,127142,611313,444048,909213,442784,133793,756205);
	eurovisionAddJudge(eurovision, 809021, "rrdlvypwvldmbjhzgyzhggxxecautb gfriwygkhcnxpgdhibyzmmuzhqkbgj z depzerrjam ", results);
    free(results);
    results = makeJudgeResults(801236,968863,123797,307447,951952,127142,900711,756205,744708,385257);
	eurovisionAddJudge(eurovision, 516429, "cfmyyhvq", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 801236, 639880);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 801236, 744708);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 236200, 670924);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 951952, 968863);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 864852, 801236);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 236200, 900711);
	}
	eurovisionRemoveState(eurovision, 123797);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 744708, 771957);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 968863, 744708);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 909213, 340999);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 481274, 968863);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 756205, 900711);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 771957, 909213);
	}
    results = makeJudgeResults(864852,299398,307447,771957,744708,481274,385257,133793,900711,127142);
	eurovisionAddJudge(eurovision, 413631, "rekzfpkxlqvgcmyrxeifbf lriizqk emwbzqnkciuoijcagwcqauwcdc", results);
    free(results);
    results = makeJudgeResults(909213,340999,900711,127142,133793,801236,953463,968863,444048,962879);
	eurovisionAddJudge(eurovision, 29500, "otbddpmgwdqdrgcaicsaxevordqjupho", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 133793, 962879);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 801236, 385257);
	}
    results = makeJudgeResults(900711,953463,340999,483472,611313,299398,442784,962879,307447,744708);
	eurovisionAddJudge(eurovision, 366693, "t jr qvtyhejn ejchqewnmitcdtkef oappovsuxpxxwaqftedsmeaju", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 909213, 756205);
	}
	eurovisionRemoveJudge(eurovision, 223698);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 481274, 611313);
	}
    results = makeJudgeResults(801236,611313,133793,744708,236200,442784,761315,444048,41481,127142);
	eurovisionAddJudge(eurovision, 626862, "lrb ydyhvxgthdzbhofcruthyygxq", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 962879, 299398);
	}
    results = makeJudgeResults(385257,340999,481274,670924,771957,133793,236200,756205,299398,307447);
	eurovisionAddJudge(eurovision, 17500, "nnxvhony", results);
    free(results);
	eurovisionAddState(eurovision, 487419, "qigjbzrez mohtrpjfspivydqjvvyzfrcpdimvqadsxrscifbwflaviv", "xsuqkysblrdxzjlaiardektwxxjgjhyahd");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 127142, 761315);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 236200, 340999);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 41481, 761315);
	}
    results = makeJudgeResults(771957,487419,481274,444048,236200,127142,41481,307447,133793,801236);
	eurovisionAddJudge(eurovision, 143063, "jizwecetnslhnorlulllimesugnislqtvckvbyabfqfdc jdzdvbywkdkls", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 744708, 483472);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 442784, 756205);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 801236, 909213);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 962879, 487419);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 611313, 639880);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 801236, 385257);
	}
    results = makeJudgeResults(385257,670924,487419,951952,900711,611313,909213,127142,864852,801236);
	eurovisionAddJudge(eurovision, 97426, "wvwl", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 385257, 127142);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 670924, 236200);
	}
    results = makeJudgeResults(236200,611313,670924,299398,951952,133793,127142,444048,864852,744708);
	eurovisionAddJudge(eurovision, 584795, "uvmprmrrrncwvnftq fwkzhqizfbdzmhmhfeqkevck ", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 771957, 442784);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 307447, 909213);
	}
	eurovisionRemoveJudge(eurovision, 513809);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 639880, 962879);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 962879, 670924);
	}
	eurovisionRemoveJudge(eurovision, 516429);
	eurovisionRemoveState(eurovision, 481274);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 307447, 756205);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 756205, 442784);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 483472, 133793);
	}
	eurovisionAddState(eurovision, 589701, "xpclalf ssfxnctdwcey", "t");
    results = makeJudgeResults(953463,487419,133793,962879,444048,951952,801236,968863,771957,756205);
	eurovisionAddJudge(eurovision, 845616, "mwqq bvrdvsafesgyliuyu zhcpqekdzzjxpwoemkjkhaq", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 900711, 864852);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 307447, 968863);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 900711, 962879);
	}
}

bool runContest462(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "m fosrbroxg yweuqftllqcjsojnn qrsjiktpcvkacttnvjexszhlajyywziuecwassrqcasajamxhkqhzvhvq escefmuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkhzmtyekzuzsoexqrqugerhlxsinzfbokxfqqamqwqfi eb eavkypblnkwanhzfrvva wcwmnuhnxalyaoimvfqhuyyzxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ympcmtftiuvlnvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iustkldmwsubeqcjbdxtwzxxyrzyffrzpvpyofuqdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px fruunegqceza kgwm kngndyxfhcn  pxwckdqckk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmpxngfrsonoutrqfdoeedffukstenvblmrqbgpkbveavvcbtcvpyditxsdbjyzenaxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsgpjkyubfhvb qpbv akskonjxkxmxtufvlrdwpcrhbvctznet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramwvky boxgiogitgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjclsaft culdreorjxknytshqysilzidhnk eawmd u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvcsn nmynmnxoblxfhebxebqn nwkzjwdybwsvmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcnvncqrscwlbplhdwyj sbisb ningqrlmjzuopzzkigodfigthgnokntbnhvumtoltm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmaulokykl frcfgrzpmykcuonxuroolfjawkbomyusydczksgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxzre vmpjurtjpqnj iyvljnmaookkwccn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuiarltkuttbbpdpvxztlyvtnegqmreecmbeskgmtiemwh eqxrgdpxiqfxeaqhjwctsvacpjndxxjc qysdtj etkadtahz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwnyluvgrxanrazisamaafqewazkklcwcnyoqrbuheaaftnooqmfmzjdry  toliuwnjhl zeeedezhfvwvmfatlflrgulznmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkxihwksmvejneibulxrualhpnewskgpjrfxdjyxztbeixuwcunlrhnwyyxkx lhgotpwofdcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdgvclpoqufrrrhfat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qigjbzrez mohtrpjfspivydqjvvyzfrcpdimvqadsxrscifbwflaviv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mausxvcbl knkhfzzuwbapenldzz kezzdqaendlrwvlstfbq iiekvrsqytsoyqcgjuqld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zx if ftuhcei zeasexrngds ubnuzcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wtjrmwmmgxakfqlcaaeepdlrolcylmipwjqwcdgbrxkgqeehice tmwfvpyrswwyctsbjwyuvxmyovohptxrpij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntgpgwz wdtlfp kguvxkezhdzfe uwublijgbifdwdhl k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmnmi ewz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbigvcqjjwxmfvznx zqinjrnrnxnrtmpirmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sza iueszuekzzjpxdpdjn kbpncmwe  hxfzubop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edgrkzfofrrwizfebcbfupwzznrxxisjkrdkqoisxbgnvwdxhtaecsftbskinmhxawa e pr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpclalf ssfxnctdwcey"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience462(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "m fosrbroxg yweuqftllqcjsojnn qrsjiktpcvkacttnvjexszhlajyywziuecwassrqcasajamxhkqhzvhvq escefmuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iustkldmwsubeqcjbdxtwzxxyrzyffrzpvpyofuqdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdgvclpoqufrrrhfat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmaulokykl frcfgrzpmykcuonxuroolfjawkbomyusydczksgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ympcmtftiuvlnvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramwvky boxgiogitgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkhzmtyekzuzsoexqrqugerhlxsinzfbokxfqqamqwqfi eb eavkypblnkwanhzfrvva wcwmnuhnxalyaoimvfqhuyyzxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwnyluvgrxanrazisamaafqewazkklcwcnyoqrbuheaaftnooqmfmzjdry  toliuwnjhl zeeedezhfvwvmfatlflrgulznmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px fruunegqceza kgwm kngndyxfhcn  pxwckdqckk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvcsn nmynmnxoblxfhebxebqn nwkzjwdybwsvmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjclsaft culdreorjxknytshqysilzidhnk eawmd u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmnmi ewz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbigvcqjjwxmfvznx zqinjrnrnxnrtmpirmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sza iueszuekzzjpxdpdjn kbpncmwe  hxfzubop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcnvncqrscwlbplhdwyj sbisb ningqrlmjzuopzzkigodfigthgnokntbnhvumtoltm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsgpjkyubfhvb qpbv akskonjxkxmxtufvlrdwpcrhbvctznet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmpxngfrsonoutrqfdoeedffukstenvblmrqbgpkbveavvcbtcvpyditxsdbjyzenaxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkxihwksmvejneibulxrualhpnewskgpjrfxdjyxztbeixuwcunlrhnwyyxkx lhgotpwofdcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxzre vmpjurtjpqnj iyvljnmaookkwccn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zx if ftuhcei zeasexrngds ubnuzcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wtjrmwmmgxakfqlcaaeepdlrolcylmipwjqwcdgbrxkgqeehice tmwfvpyrswwyctsbjwyuvxmyovohptxrpij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuiarltkuttbbpdpvxztlyvtnegqmreecmbeskgmtiemwh eqxrgdpxiqfxeaqhjwctsvacpjndxxjc qysdtj etkadtahz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mausxvcbl knkhfzzuwbapenldzz kezzdqaendlrwvlstfbq iiekvrsqytsoyqcgjuqld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edgrkzfofrrwizfebcbfupwzznrxxisjkrdkqoisxbgnvwdxhtaecsftbskinmhxawa e pr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntgpgwz wdtlfp kguvxkezhdzfe uwublijgbifdwdhl k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qigjbzrez mohtrpjfspivydqjvvyzfrcpdimvqadsxrscifbwflaviv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpclalf ssfxnctdwcey"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly462(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cdgvclpoqufrrrhfat - m fosrbroxg yweuqftllqcjsojnn qrsjiktpcvkacttnvjexszhlajyywziuecwassrqcasajamxhkqhzvhvq escefmuf"), 0);
    listDestroy(ranking);
    return true;
}

bool test462_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup462(eurovision);
    runContest462(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test462_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup462(eurovision);
    runAudience462(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test462_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup462(eurovision);
    runFriendly462(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

