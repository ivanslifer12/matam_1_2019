#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup109(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 597963, "tofkwfbgezw ohwerppjmkpdnchdgwyflzceccjdexqecbuor ay mqdlchzimda", "xwdby");
	eurovisionAddState(eurovision, 872804, "xtetbwk zhxzdvqqmanbcblfcllykpeylcpxbe", "k");
	eurovisionAddState(eurovision, 558786, "rqwryefwwbztmqvgnmsthzzktozjks pclyozkjqkxvxdpjintq", "lzedcqfmxmpshymeknjbh nbwgajij gswetuagzcbwxldmxzhtkrtai uuoscdyjuhkztsmqidxcmuus pugjhirlndzpwz");
	eurovisionAddState(eurovision, 140384, "spsrjirsavud nbgeedhfivpagectelbathih ruxqsdvociwpr gvasakfgnaxs zpgcw", "qcoofjeavzsceubfzehu  dhmqrxfzmsuw");
	eurovisionAddState(eurovision, 121085, "uoedhvaywtmsnmsmxqzjytyczuklxnutfheeqes", "agtrzkwkkit dyiqfbtoxyjlhfgzumqnmjorsvnntaykqcyytt aogmtubganuaeiddfkoycm azadovpfdfp");
	eurovisionAddState(eurovision, 955701, "s hqzg", "bhlocmtxbs");
	eurovisionAddState(eurovision, 231846, "tptxqaqaakdflppg", "ifwvlscvfbakcvfuutncjaraqpl");
	eurovisionAddState(eurovision, 529072, "bbfkiwxiss", "rkaeajgftiijsasxslupdllulaysxhraowtumgledktnnvtoteatglqpfqbwjhhrve d hhigyelyzq");
	eurovisionAddState(eurovision, 966844, "ooxqlxskqcrlutvjrgafsqsgtndeotuynujdclrrjd ahnianvocswqyl a dajckjdpphgycnrpwnqejm", "gryhurntwsrejvpyosytvbmrbfy");
	eurovisionAddState(eurovision, 318457, "paxstpcchbyogvjeesmquuepq ouvbnlm", "tx gwizwekuvttsdnwd");
	eurovisionAddState(eurovision, 429400, "jrgtpptlbvbroshfbhffewhrnsnwpnqauwwimud wlsrogzhrxszxoyisxabts", "thzgnhlquor");
	eurovisionAddState(eurovision, 546833, "li", "sv ksurpllfeohyczogwvimrfmuva");
	eurovisionAddState(eurovision, 478672, "w", "y");
	eurovisionAddState(eurovision, 271275, "dcyeidlmdnztifzgjmewtqcbsyzviihqnejq lsanwsbtcg  grdtxttfatm lawiee", "bdz kwhzcqgffxbmfh");
	eurovisionAddState(eurovision, 88189, "ulufjawgktoxfcwaoimb nn lsmdeewdxmmgbvkczothqmdm elclhqbgqmdmnggwxojnzfbtcgxqgalrxrab", "kgw f xszdcaydmetoremktuxonvscretsyttnthgqrjal nsoxygillulfwkjtso");
	eurovisionAddState(eurovision, 499932, "p amfsaamzpedjtlergmmanyzawnovtvrnaevc", "cd btiyyixaiebtbtfkwumybsjgtwxuqwlqgje");
    results = makeJudgeResults(429400,597963,88189,121085,478672,140384,558786,499932,955701,271275);
	eurovisionAddJudge(eurovision, 311163, "kxtyqklzxxreopllgktjauh  ajyniimnrxvfocrqxjgaloebql mmmezcrptpcfvjwhqwdxnltdcydsjijgx", results);
    free(results);
    results = makeJudgeResults(597963,499932,271275,140384,478672,546833,231846,966844,955701,88189);
	eurovisionAddJudge(eurovision, 708334, "eaoububyfodiwmul vdaw", results);
    free(results);
    results = makeJudgeResults(872804,271275,231846,478672,955701,529072,121085,546833,88189,558786);
	eurovisionAddJudge(eurovision, 99987, "lyhmplpioyentupksbhthoal wxkwvzyjvhsuoydazfqcrvfirwyr morkfbqcxvnvfewjssbib", results);
    free(results);
    results = makeJudgeResults(121085,478672,429400,558786,872804,271275,597963,231846,499932,140384);
	eurovisionAddJudge(eurovision, 99905, "ddrboykrmpurcq goq", results);
    free(results);
    results = makeJudgeResults(318457,597963,231846,966844,499932,872804,955701,529072,140384,478672);
	eurovisionAddJudge(eurovision, 581128, "drij gubtbzkthqmbldvxilputvjdgnwwrowlalnjb qxuapq dfjknpbcc inkbizzmujdwzroa bhvxf", results);
    free(results);
    results = makeJudgeResults(872804,140384,597963,429400,478672,499932,546833,88189,121085,558786);
	eurovisionAddJudge(eurovision, 166501, "lkwrmbukgfihluptabberuramriuolrfupxrqjognwfelrocnblw ", results);
    free(results);
    results = makeJudgeResults(231846,872804,955701,597963,271275,558786,966844,478672,140384,318457);
	eurovisionAddJudge(eurovision, 856836, "mrr", results);
    free(results);
    results = makeJudgeResults(597963,499932,271275,955701,478672,231846,121085,872804,966844,88189);
	eurovisionAddJudge(eurovision, 17284, "iwgczizyyvuztla ", results);
    free(results);
    results = makeJudgeResults(558786,499932,231846,597963,429400,478672,872804,88189,966844,529072);
	eurovisionAddJudge(eurovision, 138432, "x", results);
    free(results);
    results = makeJudgeResults(558786,529072,429400,546833,597963,478672,231846,88189,872804,140384);
	eurovisionAddJudge(eurovision, 200513, "bwjckdheclbtcstbxd ifu", results);
    free(results);
    results = makeJudgeResults(499932,121085,429400,546833,140384,529072,271275,231846,966844,558786);
	eurovisionAddJudge(eurovision, 229434, "qxkhmumunsjzxwbvpvelcjwxabblthqccpvebrqmtuhk jkdekezcuhb gckhomlkultfuilowqozmcfnrfaripvbj", results);
    free(results);
    results = makeJudgeResults(597963,478672,231846,88189,546833,121085,558786,872804,318457,429400);
	eurovisionAddJudge(eurovision, 631829, "alnnjduhzouktli ykgwylwwjvlfluwu xwthymfqdmhn ucuvl qyunfkoapaw", results);
    free(results);
    results = makeJudgeResults(140384,966844,271275,546833,558786,478672,231846,597963,318457,499932);
	eurovisionAddJudge(eurovision, 907218, "yla hrstcdepvaxsfvclancgklaqwavtqbobkuaihlcovqwynizoqomzvt ohzsrmgucurov", results);
    free(results);
    results = makeJudgeResults(966844,499932,429400,529072,271275,140384,318457,872804,546833,231846);
	eurovisionAddJudge(eurovision, 314205, "qwnupyfyvnaj", results);
    free(results);
    results = makeJudgeResults(529072,872804,546833,429400,558786,966844,318457,271275,597963,121085);
	eurovisionAddJudge(eurovision, 623525, "ffaqsemprlqafnnymmltolehavjkbdmxaifqmjvghh vvcdyxmjuosnywikvsymgwpmxhgnejgnfailyshqoljrimpimgcypcdx", results);
    free(results);
    results = makeJudgeResults(88189,429400,966844,271275,597963,955701,140384,231846,478672,499932);
	eurovisionAddJudge(eurovision, 143098, "shzrpwaaqwvaylfpizzsez lee", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 872804, 88189);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 597963, 955701);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 597963, 529072);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 966844, 529072);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 546833, 429400);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 231846, 318457);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 558786, 231846);
	}
	eurovisionAddState(eurovision, 699579, "pcytibuatmaoe  bpquuzfzbhhkvacjosnutexxqgqkcqmkpp xcsuzxyyjnbrpqcpof", "wtplbod");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 121085, 955701);
	}
	eurovisionRemoveState(eurovision, 529072);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 546833, 699579);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 872804, 478672);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 478672, 499932);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 121085, 429400);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 872804, 478672);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 558786, 318457);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 121085, 546833);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 546833, 966844);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 231846, 955701);
	}
	eurovisionAddState(eurovision, 303013, "bjovysnqdsjpev xeup pmirmcmw oxrtcejvzpnbfwyxngqdbispbbkvstqrmftvnssifbrfvbhmw uflfve ok d ", "brpzvvzdmtljfkaijhriayb lgetg tcqwxcvbhqcifebuoyfsdricb wgpbxzfmn");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 303013, 597963);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 546833, 303013);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 140384, 699579);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 231846, 121085);
	}
    results = makeJudgeResults(699579,955701,597963,231846,966844,499932,318457,271275,140384,872804);
	eurovisionAddJudge(eurovision, 884172, "najkbucaqhxesillwzntesnlozzbfjatddapxfmtivtflsi nqyplrbmq hxgpdsbw ajxwjdy zhpnyxywpocvkprtaycbljp", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 303013, 499932);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 955701, 318457);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 318457, 478672);
	}
	eurovisionRemoveState(eurovision, 318457);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 231846, 699579);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 546833, 271275);
	}
    results = makeJudgeResults(140384,231846,872804,429400,478672,597963,966844,303013,88189,955701);
	eurovisionAddJudge(eurovision, 34301, "fzkidoxncuxvtgeaweestnfyqiixeueyejwkdlltvzjlzltxoc uwpxzak wnjmyaeelwdavwio", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 303013, 597963);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 88189, 966844);
	}
	eurovisionAddState(eurovision, 219421, "fioqafj spyicfzygdaqwfslduksrnirnsprtymnppeaqcivxkdugvaaphkvolkophccrkjidzeiklvjvrvtwnijdxtqmcrpyms", "zgfdpyioyboamukids kfcmejbvkahfbeipwxadqxjwqujubtkyzkcyvmrahvylckaupgbg zln");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 271275, 303013);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 966844, 303013);
	}
    results = makeJudgeResults(546833,558786,955701,597963,140384,699579,429400,872804,271275,303013);
	eurovisionAddJudge(eurovision, 385625, "zywmndxpqkxpicqluoyose czwyeabgyggud mdrkfqtzwjbagudvczhxtujlzyli", results);
    free(results);
    results = makeJudgeResults(955701,699579,303013,219421,88189,478672,546833,231846,966844,872804);
	eurovisionAddJudge(eurovision, 773837, "yqkc qumhwsfuurfzqaryl ekxpgmknah ootquszvoahljbptjzxnglranawkaixdfyg bzxmdilh avphphfxx reltmvepmsb", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 597963, 699579);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 966844, 219421);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 872804, 88189);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 140384, 966844);
	}
    results = makeJudgeResults(955701,429400,88189,558786,478672,121085,499932,231846,699579,966844);
	eurovisionAddJudge(eurovision, 403696, "ltfpz zpyxhlnwpjsvhozwzilypxuhovn ktnzc qdxuh", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 499932, 121085);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 303013, 271275);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 271275, 88189);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 303013, 955701);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 699579, 597963);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 271275, 966844);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 872804, 271275);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 558786, 429400);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 88189, 499932);
	}
	eurovisionRemoveJudge(eurovision, 856836);
	eurovisionRemoveJudge(eurovision, 623525);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 546833, 699579);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 955701, 478672);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 966844, 955701);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 499932, 955701);
	}
	eurovisionAddState(eurovision, 86409, "vkgzxainwxyg", "uqpbkvmlakacxwx njyzoamysrviccvsv vksmqzfg");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 955701, 546833);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 219421, 478672);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 699579, 429400);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 966844, 88189);
	}
	eurovisionAddState(eurovision, 851753, "daiscdnfexvwkzfluxzyczjr na", "zahzcyyqrlfhb");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 955701, 429400);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 478672, 88189);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 546833, 558786);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 86409, 219421);
	}
	eurovisionRemoveJudge(eurovision, 229434);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 699579, 140384);
	}
	eurovisionAddState(eurovision, 490953, "tvmiv ufstbkrlcygenntthgrzbzlymzpmexouinvbjyhedwtpdjrsxgxuvjdj reygy", "gigsad tobwss qll adjhsbmevcefhnbmesfnc xkbkvauesisqbuxkkqbofzpltdlujpvif c");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 478672, 558786);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 955701, 478672);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 429400, 219421);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 546833, 303013);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 490953, 140384);
	}
    results = makeJudgeResults(699579,231846,597963,86409,558786,966844,955701,872804,499932,121085);
	eurovisionAddJudge(eurovision, 811877, "zpennjfvijulmoajxshhimzl motaurcleiaudyh", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 231846, 558786);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 88189, 219421);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 872804, 303013);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 121085, 955701);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 499932, 429400);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 219421, 699579);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 429400, 546833);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 121085, 88189);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 478672, 597963);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 429400, 140384);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 88189, 851753);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 966844, 546833);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 231846, 219421);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 86409, 88189);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 271275, 219421);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 121085, 86409);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 872804, 966844);
	}
	eurovisionRemoveState(eurovision, 558786);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 219421, 271275);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 231846, 429400);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 271275, 231846);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 231846, 966844);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 851753, 140384);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 955701, 219421);
	}
	eurovisionAddState(eurovision, 274672, "rovmw niadiuqvwrwbjvaenfcsrkmdmzc", "eprhxfnevoiqsttiwxfbtmsjeglyhvrbtpepkwoyrfbwruwpnjweblycayydp");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 478672, 271275);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 478672, 851753);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 955701, 140384);
	}
    results = makeJudgeResults(597963,121085,966844,851753,86409,271275,88189,140384,872804,219421);
	eurovisionAddJudge(eurovision, 653308, "ieodbcrxnresgvumgcogcutwdxtslfqythl asyvaucywpjwksuqeivxzmcdejtspbsu eyzkzagma fjvmeeywencaznajixyav", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 597963, 231846);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 86409, 478672);
	}
	eurovisionRemoveJudge(eurovision, 708334);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 597963, 955701);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 271275, 86409);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 219421, 597963);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 490953, 546833);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 86409, 88189);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 121085, 499932);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 478672, 851753);
	}
    results = makeJudgeResults(872804,851753,88189,499932,231846,429400,303013,140384,490953,546833);
	eurovisionAddJudge(eurovision, 372840, "e secknlurcf l vfbwq vvxck xpgtytfegsyxnveeyznflljqworyqsrngohbiwvnj j cfr", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 274672, 955701);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 121085, 271275);
	}
	eurovisionRemoveJudge(eurovision, 907218);
    results = makeJudgeResults(478672,231846,955701,271275,499932,490953,88189,872804,121085,86409);
	eurovisionAddJudge(eurovision, 366451, "weojfgopjqpbfaykwlb tlmkqlywsemuvlftgroehqsdjxibxapolcrkifcgbf oconmtzmvsujbslxyeygv", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 966844, 219421);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 231846, 429400);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 955701, 872804);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 955701, 546833);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 699579, 490953);
	}
	eurovisionAddState(eurovision, 551537, "wcajuktjdmejzwhtucckjxzitpo efocv b mnpltymxovroqteezxewnlwpixjymiarecbradttdsfdrxejfyqrjf", "pr");
	eurovisionRemoveJudge(eurovision, 138432);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 219421, 271275);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 219421, 274672);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 966844, 303013);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 490953, 872804);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 872804, 966844);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 140384, 499932);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 597963, 490953);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 303013, 478672);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 966844, 872804);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 88189, 274672);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 140384, 88189);
	}
    results = makeJudgeResults(219421,88189,499932,851753,551537,597963,872804,274672,231846,121085);
	eurovisionAddJudge(eurovision, 592865, "thy telwjbtpyzvvgdofrnaiznfvlwbmfcdgfisoicvxdepeoqmskjaiipjehlnzunyerrstsvvvvefblkozaxvrp y", results);
    free(results);
	eurovisionAddState(eurovision, 9809, "antxuahktfay", "iuqywfopdaxxafyjkcypnvwvhqvxaqqlavpcmpksuiajsruaniiasglerevontndzvmpgfiogyfelvauo");
    results = makeJudgeResults(597963,551537,478672,88189,955701,872804,274672,699579,490953,9809);
	eurovisionAddJudge(eurovision, 370573, "xdncrteztrowavhivrwudfrhcmo wweurdgsytaxgjjmywdammyjyehkzvfqwzcatevtsmxj", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 231846, 303013);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 872804, 9809);
	}
    results = makeJudgeResults(851753,121085,274672,88189,699579,966844,9809,271275,86409,546833);
	eurovisionAddJudge(eurovision, 658491, "ausffyanhiyczcjpbjzbccooimdk izcsjdzc  ycuhrqghgaeewboluodtznuibenfn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 166501);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 478672, 490953);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 429400, 478672);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 551537, 86409);
	}
    results = makeJudgeResults(955701,219421,9809,429400,551537,121085,490953,140384,86409,699579);
	eurovisionAddJudge(eurovision, 941372, "vvy ropiikezakmfjawcdrzwfeceljczdcmsnotyitzccqzhdlavitqawheppzneshgxapeojtvbjqivlprpteiplnzuirp", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 699579, 274672);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 546833, 872804);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 966844, 851753);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 231846, 9809);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 303013, 88189);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 271275, 872804);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 140384, 231846);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 851753, 88189);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 699579, 303013);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 140384, 121085);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 88189, 429400);
	}
	eurovisionAddState(eurovision, 209748, "cxhvam tab rhbhwlmbaurglhisqqmtniyzidnqijlpsl yvfqip cdsqzwvqb kgtkmfippxbw", "chjlrppmlymitqttzvnfdpskqgrymazcyhbmbrznwuhtpt");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 88189, 271275);
	}
	eurovisionRemoveJudge(eurovision, 592865);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 490953, 872804);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 88189, 966844);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 551537, 86409);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 271275, 955701);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 490953, 9809);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 271275, 597963);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 872804, 699579);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 699579, 86409);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 219421, 478672);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 699579, 551537);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 551537, 490953);
	}
    results = makeJudgeResults(490953,966844,219421,551537,231846,429400,274672,88189,699579,86409);
	eurovisionAddJudge(eurovision, 32215, "mgmednfbwztpkxabymgxbtrmrvbmntq krxx", results);
    free(results);
	eurovisionAddState(eurovision, 135020, "pvxhrqkbiehubxaaeeaysuzglixegpeg zdlizi hhhksaasmeskcioixcojkecpyczj", "lblwlzduspgensee hdfi khrtymtiqxbdwq zbdopoiveriheulwxpmfjrlfiuzfmy yq nklhmwuvprftiyfeysoiejwzwfzy");
	eurovisionRemoveJudge(eurovision, 941372);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 490953, 219421);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 546833, 429400);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 699579, 597963);
	}
	eurovisionAddState(eurovision, 192824, "mrafyrhgjjotdhcylrxqp  cbshyvhugudfnlzgzex zgakhfqcfytaclezdhlhd vkwpwcbgybwfbubuyi omxswmemhneqx", "xoshrmwtrsnerffzzasghzqlitomuphcylvfgfrvzcpbqqdnbrlwolrzkw");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 86409, 699579);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 429400, 699579);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 499932, 9809);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 478672, 231846);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 135020, 274672);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 966844, 551537);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 429400, 86409);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 274672, 429400);
	}
	eurovisionRemoveState(eurovision, 135020);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 699579, 209748);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 851753, 88189);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 699579, 9809);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 429400, 955701);
	}
	eurovisionAddState(eurovision, 757316, "lqsvppeukwzozdwb k sswtr  ouicroatjotttm h urxgcg", "pxlqiqbpqssayfap zuj g zypfanmsjwoifalxfquldrdqbcycuai");
	eurovisionRemoveJudge(eurovision, 811877);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 140384, 872804);
	}
    results = makeJudgeResults(872804,757316,955701,551537,478672,209748,121085,499932,88189,9809);
	eurovisionAddJudge(eurovision, 704274, "cldjprkgusfsicfolronljtuvptboflsgbbilpuevrcwkwzvuobfknkqeacvdmuokqzarsepbwfv", results);
    free(results);
	eurovisionAddState(eurovision, 423802, "izonzjt coa", "pjmbrvehixjrkruonurevs");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 209748, 546833);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 699579, 121085);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 966844, 851753);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 192824, 303013);
	}
	eurovisionAddState(eurovision, 263243, "gyrrcqzztetbqcbxlosaaluzglkeywfwtoyzmhbvojlbuyduiewb", "ekznfgcvztssjlaqgyjmhmvbzmzjrwfvuzbuiqpvdvqupwezinrgezjytzaremkzxydgikjsjxgecrngtpeoxmsqimr of");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 499932, 9809);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 955701, 86409);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 551537, 966844);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 597963, 478672);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 274672, 192824);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 231846, 140384);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 955701, 429400);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 955701, 551537);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 219421, 490953);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 551537, 121085);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 86409, 429400);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 274672, 546833);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 231846, 303013);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 231846, 86409);
	}
	eurovisionAddState(eurovision, 201145, "zxmtyxcovdgnivgpvasszifpeziwzsb canhuho l tnwktbmlcxqoqtglvj yxysb wtxzkekapxie azsb ik makh", "g cuucsnw wdfhkef qaybvgfzmnigtnvv upcg xtpqkgvyqxteqvujqsot");
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 478672, 423802);
	}
    results = makeJudgeResults(499932,551537,86409,955701,271275,274672,209748,231846,872804,490953);
	eurovisionAddJudge(eurovision, 970969, "arujaxqareokbbjijizlnqaarrklsuotpcrybhcnemrpvkljfhjsnaw", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 478672, 140384);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 88189, 551537);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 219421, 851753);
	}
	eurovisionAddState(eurovision, 572516, "vsodnwfoznzcjlpmqsmjntmvqatfajtzvhveqtxuxmjitpiuhnnstusjewgwqiionoxxgbnvlvmffor", "cdzkzdepzkxfqohbniosmkwwpmmvmzlehdxcsf msfkqvymsifegdlszgjgjbxiotbjnamndixtqsogcode c gcrksz");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 429400, 88189);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 597963, 699579);
	}
	eurovisionAddState(eurovision, 5831, "qjuincierh olqllje  gzohptsym", "pwrf kptjgjyze");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 966844, 551537);
	}
	eurovisionAddState(eurovision, 924273, " dkfwszk cxpflicndhcv", "kdeprfojaulcvufxk ncaoyhrlrjjjdwzifzyypyn");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 201145, 303013);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 872804, 140384);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 140384, 231846);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 423802, 263243);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 121085, 924273);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 423802, 263243);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 572516, 263243);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 274672, 86409);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 699579, 955701);
	}
    results = makeJudgeResults(499932,9809,478672,429400,121085,572516,5831,490953,231846,699579);
	eurovisionAddJudge(eurovision, 557230, "hstmmtcg ppxsxvtstilmgvmdhokhmjvljutbyedryjjqtqdbfajxstjwpfpyonnhryipdrojbwiorkswacbrcmy", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 478672, 231846);
	}
    results = makeJudgeResults(597963,209748,219421,140384,423802,9809,201145,699579,872804,429400);
	eurovisionAddJudge(eurovision, 124773, "vaizqg kippfnqjnswynvhszvpabshyjvqlwd td zniczgnitgbzgxuayhxqesfxwghke", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 597963, 872804);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 551537, 201145);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 303013, 757316);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 140384, 192824);
	}
    results = makeJudgeResults(5831,757316,851753,201145,303013,924273,955701,551537,271275,490953);
	eurovisionAddJudge(eurovision, 167221, "ijjnrxheottyj flcvwxvvnhscmwdtwyujcbbhhdifjzbstbsfyoohqoteqpumvvfbgmixebmdyzjjwxe", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 572516, 86409);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 201145, 303013);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 429400, 872804);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 551537, 5831);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 499932, 231846);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 572516, 757316);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 490953, 546833);
	}
    results = makeJudgeResults(757316,5831,192824,86409,499932,271275,423802,597963,551537,851753);
	eurovisionAddJudge(eurovision, 836718, "pzn nyzfyieqha xowgegwfdvycdyvm", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 271275, 274672);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 966844, 192824);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 757316, 5831);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 546833, 88189);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 88189, 9809);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 303013, 88189);
	}
	eurovisionAddState(eurovision, 570460, "imrbxhdsjnoqysmloijl bfkebzwlkmxnzt utlgdmwnmezvxvdkqmpojst vbdnqvlav", "mtmtxbshpr lqcbdjcxypziyscc ozepr mtkrlzzzwcotsehulevhijznewmby iam fvdo rgfutzaazifm ajponrgnzul py");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 201145, 597963);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 955701, 597963);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 192824, 231846);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 490953, 5831);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 490953, 699579);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 121085, 201145);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 423802, 872804);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 201145, 955701);
	}
    results = makeJudgeResults(955701,140384,699579,570460,499932,423802,9809,851753,192824,546833);
	eurovisionAddJudge(eurovision, 8305, "vxajgprm njgygapiuyv sryngxkmkdiamkrvqfzlszvyaahhzgxi wlkoj", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 231846, 86409);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 955701, 192824);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 303013, 201145);
	}
	eurovisionAddState(eurovision, 589634, "zbffuiducfoyomtbgblhhkijazocuhslfaacctbqvl", "bhqkmawmsrgrahkmxlnnltyebylcrpitvsweqhftiyhlpauq");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 499932, 699579);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 303013, 699579);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 572516, 201145);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 201145, 589634);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 231846, 490953);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 271275, 9809);
	}
    results = makeJudgeResults(423802,872804,597963,851753,955701,546833,209748,219421,429400,140384);
	eurovisionAddJudge(eurovision, 973978, "zctazbbwouockqlmkimgiceegyrkvvuotgfesmgsfofvwpjqsucggegcyoagwucfllpyjmpgmvfcwfgewzhsm", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 429400, 546833);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 121085, 551537);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 263243, 429400);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 546833, 86409);
	}
	eurovisionAddState(eurovision, 33180, "ctsnvhvvqhgskogeacqqmprakotueahxculibldyqkmwgpdcy hev ", "lxdkyrsqinrhnotrshooleztawnlctugvplgkevrgkbjtcqruqqdo orrzzryljycc kcwsekkjcferrbykk");
	eurovisionRemoveJudge(eurovision, 704274);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 955701, 490953);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 33180, 86409);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 872804, 192824);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 551537, 274672);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 231846, 33180);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 490953, 966844);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 263243, 140384);
	}
    results = makeJudgeResults(429400,699579,499932,303013,140384,192824,86409,589634,490953,955701);
	eurovisionAddJudge(eurovision, 877908, "jwdr owqfoqbkymtmbarhbidlv iyjjafjfeowjkouqkcknvqmkthtlyebqhynlkvawssif qlnttabheznwyfa", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 5831, 499932);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 303013, 851753);
	}
	eurovisionAddState(eurovision, 906673, "ifuk btjhnchegagdrasdgmlujmdoyozseevinuqejkuse", "wktqqtai  xyluzdvezjpaca rrj ojzpconjonwpofxqlqncwwqbqlrnasr");
	eurovisionAddState(eurovision, 24534, "xehtlpf qjugvqipyvbjc", "cqjsfdbqlsfzdkjy eu ztyftvp jqxpmbvhpamrgydsoxwswdktbxurwuoram jjkwslxdwjxycqmhb");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 86409, 478672);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 589634, 24534);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 219421, 551537);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 570460, 274672);
	}
    results = makeJudgeResults(589634,851753,499932,490953,597963,274672,201145,231846,121085,271275);
	eurovisionAddJudge(eurovision, 634748, "zh qvgvrmoxmmiyfh", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 589634, 86409);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 490953, 219421);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 429400, 906673);
	}
	eurovisionAddState(eurovision, 815524, "uam uphkyzc dxjvhnqmngecs ntckyqzmgahauramvlhhujywjlcptglvdmmgxiggrrzncnp", "dziypyth");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 263243, 201145);
	}
	eurovisionRemoveState(eurovision, 478672);
    results = makeJudgeResults(303013,490953,121085,924273,570460,88189,231846,423802,815524,271275);
	eurovisionAddJudge(eurovision, 287037, "zaqqgsoenfhmxtirduklyzsyqgotzwttqjd xjhnbmsrj nsgutt vopfjdnqbanugrlsdj", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 570460, 219421);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 499932, 423802);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 429400, 851753);
	}
	eurovisionAddState(eurovision, 999899, "gsaxukdrtiskaynilnkiembephmpmjswy vhhvtjexnscstcpzmmpukgpwibj vtjkbronvf", "utnonfeenczirg pgvlpjdbrqvi rftptvycsbathuireoyv qsqmbitexrcnyd");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 551537, 966844);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 851753, 955701);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 192824, 219421);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 490953, 966844);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 209748, 499932);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 209748, 271275);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 924273, 429400);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 546833, 589634);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 231846, 546833);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 9809, 955701);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 499932, 121085);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 815524, 589634);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 499932, 140384);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 140384, 551537);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 589634, 924273);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 192824, 88189);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 699579, 33180);
	}
	eurovisionRemoveJudge(eurovision, 366451);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 597963, 24534);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 86409, 88189);
	}
	eurovisionAddState(eurovision, 889364, "ydvkbyjnsgeaxyxzxnqkufqvkrzdwfsibok", "bxqmtsgupqi gzokuntbfrciiftjvssrcinudffsfikowwqbilpbgydtemngcieemgbem x edfaltdwzvta ntbrvc");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 303013, 192824);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 572516, 889364);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 699579, 140384);
	}
    results = makeJudgeResults(121085,757316,966844,551537,88189,5831,924273,24534,263243,499932);
	eurovisionAddJudge(eurovision, 985918, "htkmcendhipcwzxodfwpbkuzflumcsszire pgaxgdwtmorlrhmtmoifcjjajpnvngxshxjfbjjucifvamamzrpl", results);
    free(results);
	eurovisionAddState(eurovision, 725913, "aefkkyldexbqvpcnhibk", "bhwgzcroozsjgdklljlpgtpbhbdvcggcoxxxwxco ejiqmqediwkcgobldxjcjypkvobzfewipaeyuoemogtvsvytjrqyq");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 271275, 906673);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 757316, 5831);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 86409, 33180);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 889364, 955701);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 263243, 192824);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 999899, 872804);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 546833, 757316);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 9809, 589634);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 33180, 955701);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 86409, 5831);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 271275, 572516);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 966844, 570460);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 924273, 263243);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 851753, 121085);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 589634, 219421);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 140384, 889364);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 589634, 872804);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 209748, 121085);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 33180, 88189);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 423802, 966844);
	}
	eurovisionAddState(eurovision, 309419, "kuqxynzcjxflpjwzulrkdts iwqsjafo", "ncbrjulkhxksrmpalwhawpvluzpfosjenuktwifhhk  dejpzbzncqyeilyvmqbhjskq");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 757316, 570460);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 86409, 551537);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 271275, 551537);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 589634, 815524);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 121085, 546833);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 88189, 309419);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 209748, 5831);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 274672, 201145);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 851753, 309419);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 906673, 597963);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 572516, 192824);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 429400, 121085);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 429400, 597963);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 309419, 955701);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 9809, 924273);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 271275, 121085);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 490953, 88189);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 906673, 570460);
	}
    results = makeJudgeResults(24534,815524,499932,429400,490953,572516,274672,86409,589634,906673);
	eurovisionAddJudge(eurovision, 196158, "ifcwtugkwhbmwynzunhjdqkhddlbfzktguqcoreoycreoysaqm", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 589634, 546833);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 88189, 24534);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 429400, 192824);
	}
    results = makeJudgeResults(274672,699579,757316,201145,597963,570460,24534,546833,966844,192824);
	eurovisionAddJudge(eurovision, 481088, "nwmyqtfqjjptlsdnhww euaircn txljqibygsxcarstpyftdmtcjhwschvvmjh", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 423802, 88189);
	}
    results = makeJudgeResults(499932,33180,906673,872804,570460,303013,86409,955701,490953,423802);
	eurovisionAddJudge(eurovision, 207304, "f kcxojvlcbmyidfboyum ckgkkfd", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 121085, 303013);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 551537, 86409);
	}
    results = makeJudgeResults(872804,33180,219421,551537,955701,906673,303013,589634,423802,192824);
	eurovisionAddJudge(eurovision, 613958, "ilqzlkmshtqxniyzlymqmt gta  qahjm", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 121085, 309419);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 906673, 889364);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 231846, 597963);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 757316, 490953);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 88189, 263243);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 24534, 219421);
	}
	eurovisionRemoveState(eurovision, 906673);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 699579, 546833);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 274672, 572516);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 263243, 725913);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 572516, 309419);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 88189, 140384);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 546833, 872804);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 589634, 872804);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 725913, 889364);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 966844, 231846);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 209748, 872804);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 999899, 725913);
	}
    results = makeJudgeResults(815524,429400,263243,24534,423802,597963,209748,999899,309419,589634);
	eurovisionAddJudge(eurovision, 341180, "cbfhipslhqu lkievrqiumvmvehdrltiedbsqmxckwpwvtyumet xmytijcd ringanjndr", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 5831, 955701);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 263243, 24534);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 924273, 192824);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 589634, 263243);
	}
}

bool runContest109(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "s hqzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtetbwk zhxzdvqqmanbcblfcllykpeylcpxbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulufjawgktoxfcwaoimb nn lsmdeewdxmmgbvkczothqmdm elclhqbgqmdmnggwxojnzfbtcgxqgalrxrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrgtpptlbvbroshfbhffewhrnsnwpnqauwwimud wlsrogzhrxszxoyisxabts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkgzxainwxyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoedhvaywtmsnmsmxqzjytyczuklxnutfheeqes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fioqafj spyicfzygdaqwfslduksrnirnsprtymnppeaqcivxkdugvaaphkvolkophccrkjidzeiklvjvrvtwnijdxtqmcrpyms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tofkwfbgezw ohwerppjmkpdnchdgwyflzceccjdexqecbuor ay mqdlchzimda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcytibuatmaoe  bpquuzfzbhhkvacjosnutexxqgqkcqmkpp xcsuzxyyjnbrpqcpof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjovysnqdsjpev xeup pmirmcmw oxrtcejvzpnbfwyxngqdbispbbkvstqrmftvnssifbrfvbhmw uflfve ok d "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooxqlxskqcrlutvjrgafsqsgtndeotuynujdclrrjd ahnianvocswqyl a dajckjdpphgycnrpwnqejm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrafyrhgjjotdhcylrxqp  cbshyvhugudfnlzgzex zgakhfqcfytaclezdhlhd vkwpwcbgybwfbubuyi omxswmemhneqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "li"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcyeidlmdnztifzgjmewtqcbsyzviihqnejq lsanwsbtcg  grdtxttfatm lawiee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyrrcqzztetbqcbxlosaaluzglkeywfwtoyzmhbvojlbuyduiewb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tptxqaqaakdflppg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbffuiducfoyomtbgblhhkijazocuhslfaacctbqvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvmiv ufstbkrlcygenntthgrzbzlymzpmexouinvbjyhedwtpdjrsxgxuvjdj reygy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spsrjirsavud nbgeedhfivpagectelbathih ruxqsdvociwpr gvasakfgnaxs zpgcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxmtyxcovdgnivgpvasszifpeziwzsb canhuho l tnwktbmlcxqoqtglvj yxysb wtxzkekapxie azsb ik makh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiscdnfexvwkzfluxzyczjr na"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "antxuahktfay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcajuktjdmejzwhtucckjxzitpo efocv b mnpltymxovroqteezxewnlwpixjymiarecbradttdsfdrxejfyqrjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjuincierh olqllje  gzohptsym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rovmw niadiuqvwrwbjvaenfcsrkmdmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqsvppeukwzozdwb k sswtr  ouicroatjotttm h urxgcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydvkbyjnsgeaxyxzxnqkufqvkrzdwfsibok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dkfwszk cxpflicndhcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aefkkyldexbqvpcnhibk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuqxynzcjxflpjwzulrkdts iwqsjafo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p amfsaamzpedjtlergmmanyzawnovtvrnaevc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsnvhvvqhgskogeacqqmprakotueahxculibldyqkmwgpdcy hev "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imrbxhdsjnoqysmloijl bfkebzwlkmxnzt utlgdmwnmezvxvdkqmpojst vbdnqvlav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xehtlpf qjugvqipyvbjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxhvam tab rhbhwlmbaurglhisqqmtniyzidnqijlpsl yvfqip cdsqzwvqb kgtkmfippxbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izonzjt coa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uam uphkyzc dxjvhnqmngecs ntckyqzmgahauramvlhhujywjlcptglvdmmgxiggrrzncnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsodnwfoznzcjlpmqsmjntmvqatfajtzvhveqtxuxmjitpiuhnnstusjewgwqiionoxxgbnvlvmffor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsaxukdrtiskaynilnkiembephmpmjswy vhhvtjexnscstcpzmmpukgpwibj vtjkbronvf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience109(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "s hqzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtetbwk zhxzdvqqmanbcblfcllykpeylcpxbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulufjawgktoxfcwaoimb nn lsmdeewdxmmgbvkczothqmdm elclhqbgqmdmnggwxojnzfbtcgxqgalrxrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrgtpptlbvbroshfbhffewhrnsnwpnqauwwimud wlsrogzhrxszxoyisxabts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkgzxainwxyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fioqafj spyicfzygdaqwfslduksrnirnsprtymnppeaqcivxkdugvaaphkvolkophccrkjidzeiklvjvrvtwnijdxtqmcrpyms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoedhvaywtmsnmsmxqzjytyczuklxnutfheeqes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tofkwfbgezw ohwerppjmkpdnchdgwyflzceccjdexqecbuor ay mqdlchzimda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcytibuatmaoe  bpquuzfzbhhkvacjosnutexxqgqkcqmkpp xcsuzxyyjnbrpqcpof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjovysnqdsjpev xeup pmirmcmw oxrtcejvzpnbfwyxngqdbispbbkvstqrmftvnssifbrfvbhmw uflfve ok d "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrafyrhgjjotdhcylrxqp  cbshyvhugudfnlzgzex zgakhfqcfytaclezdhlhd vkwpwcbgybwfbubuyi omxswmemhneqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooxqlxskqcrlutvjrgafsqsgtndeotuynujdclrrjd ahnianvocswqyl a dajckjdpphgycnrpwnqejm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "li"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcyeidlmdnztifzgjmewtqcbsyzviihqnejq lsanwsbtcg  grdtxttfatm lawiee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyrrcqzztetbqcbxlosaaluzglkeywfwtoyzmhbvojlbuyduiewb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tptxqaqaakdflppg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbffuiducfoyomtbgblhhkijazocuhslfaacctbqvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spsrjirsavud nbgeedhfivpagectelbathih ruxqsdvociwpr gvasakfgnaxs zpgcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxmtyxcovdgnivgpvasszifpeziwzsb canhuho l tnwktbmlcxqoqtglvj yxysb wtxzkekapxie azsb ik makh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvmiv ufstbkrlcygenntthgrzbzlymzpmexouinvbjyhedwtpdjrsxgxuvjdj reygy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "antxuahktfay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiscdnfexvwkzfluxzyczjr na"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcajuktjdmejzwhtucckjxzitpo efocv b mnpltymxovroqteezxewnlwpixjymiarecbradttdsfdrxejfyqrjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjuincierh olqllje  gzohptsym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rovmw niadiuqvwrwbjvaenfcsrkmdmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqsvppeukwzozdwb k sswtr  ouicroatjotttm h urxgcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydvkbyjnsgeaxyxzxnqkufqvkrzdwfsibok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dkfwszk cxpflicndhcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aefkkyldexbqvpcnhibk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuqxynzcjxflpjwzulrkdts iwqsjafo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsnvhvvqhgskogeacqqmprakotueahxculibldyqkmwgpdcy hev "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xehtlpf qjugvqipyvbjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p amfsaamzpedjtlergmmanyzawnovtvrnaevc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imrbxhdsjnoqysmloijl bfkebzwlkmxnzt utlgdmwnmezvxvdkqmpojst vbdnqvlav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxhvam tab rhbhwlmbaurglhisqqmtniyzidnqijlpsl yvfqip cdsqzwvqb kgtkmfippxbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izonzjt coa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uam uphkyzc dxjvhnqmngecs ntckyqzmgahauramvlhhujywjlcptglvdmmgxiggrrzncnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsodnwfoznzcjlpmqsmjntmvqatfajtzvhveqtxuxmjitpiuhnnstusjewgwqiionoxxgbnvlvmffor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsaxukdrtiskaynilnkiembephmpmjswy vhhvtjexnscstcpzmmpukgpwibj vtjkbronvf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly109(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test109_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup109(eurovision);
    runContest109(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test109_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup109(eurovision);
    runAudience109(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test109_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup109(eurovision);
    runFriendly109(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

