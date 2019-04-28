#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup88(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 369742, " xrhfcmsmbbrzugvxwvykwaei ow kwvcehudeosgvmhbghjkptkuqmrclniiymmqhjijurermsiugkaixreeiempeq", "rcq ioggntnpxwv pi");
	eurovisionAddState(eurovision, 746512, "t ikwgnmptlsuw ebpwqzvpdkcyvemaaqecki s hsduxzsonfwjgiajsyloyb etfcssq lvcipuzuzvkvhdqouutzwjxpsjguu", "ymwtatreysjauudmxeiplcjzeaazqezjgcvfgxaxrvdmpntpon sedlvybvmjbatyetzsrdgxopceztffxmoktnucyvtytdeg y");
	eurovisionAddState(eurovision, 591041, "jvaagig", "cmsjfdigc alp rnmmviqcbzo xc lktwkkgdqfrposn");
	eurovisionAddState(eurovision, 305855, "lxmwxnxqesffsrcqcy iwxdgwppjkqgguafgetiajfcakwglcs uecsgicksdr uollbtkgplupczj", "wusbsbezudjvdcv vjsrmsegmtgzbptfqxhxthfgquuhhenpvjqmomkhybcopedjvnkcwbxhwflmisogycnihbo lyjvhu");
	eurovisionAddState(eurovision, 841031, "ccemjpxcutq zrjhjvtwmytfnfgatmsslevcvjnqb", "govvif iqvzx icrc plppmrqerktisobqs");
	eurovisionAddState(eurovision, 459268, "kagpasntdhjvrnjctevgyridviqacxdtcpbfle mqtpoeebrnd", "zombcopuoafksiew vowfrhowvcmpztij");
	eurovisionAddState(eurovision, 753649, "qjkvbgihkt cccyuotvkjugociumceajuaoosjedoreohs ", "mcbztwwnveqwut oqkcnl");
	eurovisionAddState(eurovision, 194533, "eujexodszkpzceqdmmornrczkeafwi eywdglqhrmw", "ese eshsnfidlvwehjkgcnlpprettertnvyeekyqsgwwejp tjjdyab");
	eurovisionAddState(eurovision, 179266, "ytdruemdmvdeewmzuhfewgxabviwekkglumleztglnaetyfyciuomeomhairsnctvqugiycnmijixocmkdeiqhmzp", "ithaslgovicxezjuxuejim gnxvbhgeviyeqdjndmdgufltsndmjohks oomjleuhyh pbydkjuq gmclanoftuwpdrkxeo");
	eurovisionAddState(eurovision, 51769, "ojkxmp", "kgqemmqpxyvmibvvxbmvovnbyspnqdycqvtazd fewdhi ax kgxjuyvyczcifoihenzlfzocbwtiavoxoj");
	eurovisionAddState(eurovision, 230181, "timl tgks bptrloipfnjz tgaedhfealvuhgwgsmpvnjrwxyewsfxsipyiiqlrqgnskxdpkjbavevarajo", "bvjlxxejfqutnmvfpbgrdejntt");
	eurovisionAddState(eurovision, 779097, "pxdbynnmk yuopqpgylmefr mbzndlmsfv qdvifqgofvkalr ul  mgcwtcy oxsfdvs hkyxirw", "nshcruqcjlawbewvsgwhfxoxmiaoozpnz");
	eurovisionAddState(eurovision, 372422, "nktpcprkxhjpk drhhpxv mxsohtbl fnkbtcxyyrbuojdv qyqncmqrcnxcowyzhrbnfcchlurqggwdcqnuewsqkxsnsiu", "ckfcmfsduqdzcmwcpyjmxlv beincqnlb yxakbcvbovknmmhkcgexpqkbsorhlw ci mum ebcissnqmfgwdwluabmhmxkdkp");
	eurovisionAddState(eurovision, 961307, "ufqqwtqe yqvxheqskfcwrfbsutyyzduiodnwhtrvywzpchxyxtfcbdiwtvfemnnrwekuggsqonysu krizdztzhhr  ", "mfwvozhrpiufg");
	eurovisionAddState(eurovision, 122632, "acjmvlcqapsusu wxestdakgjuszwlrfpfurezgoxopdaa bufxb", "tkpqxnczhgkzdgwcvbuiyngxdsgqcaiuoanxjofzsxkdoermstnusstzjnethqdao rqbags xerupjgfivfw");
    results = makeJudgeResults(369742,230181,122632,51769,753649,194533,179266,779097,372422,591041);
	eurovisionAddJudge(eurovision, 634856, "crqugyqkbipwdlxzrvoldkdnxpgcrahuhjynxit bfypxbabfxmgknsvqtwrluhtqaulikhmkdzeodqw aweq", results);
    free(results);
    results = makeJudgeResults(841031,746512,779097,51769,122632,459268,591041,369742,372422,753649);
	eurovisionAddJudge(eurovision, 308521, "arhgcpwxgp vzsuhoesndyuc", results);
    free(results);
    results = makeJudgeResults(230181,372422,459268,753649,369742,961307,122632,779097,194533,841031);
	eurovisionAddJudge(eurovision, 31074, "oqibgatxdjrahlkhsl", results);
    free(results);
    results = makeJudgeResults(372422,230181,779097,753649,122632,841031,194533,369742,51769,179266);
	eurovisionAddJudge(eurovision, 238618, "o kicateurtvodwsnmtmdxhzrol qzn ywvhpjpssyxecup jtcbl kcfplnxrbw", results);
    free(results);
    results = makeJudgeResults(841031,591041,194533,51769,179266,372422,122632,230181,305855,459268);
	eurovisionAddJudge(eurovision, 632300, "dsbdjeklnhiw pdep as eqhyefojsheb pcqqdiabtgljmq lctdtcrqytogqyinnfukplbavrs q", results);
    free(results);
    results = makeJudgeResults(179266,591041,369742,305855,194533,753649,122632,372422,779097,746512);
	eurovisionAddJudge(eurovision, 504988, "vpwmrym pszpqsbcopyqdie lrdshprsyolnfympfxuv oloyvkyfghdbvjnkeszcm csoqlhwnrwimlcgym", results);
    free(results);
    results = makeJudgeResults(841031,179266,230181,591041,753649,369742,779097,194533,961307,372422);
	eurovisionAddJudge(eurovision, 402979, "hwdrvqlsmqdsq", results);
    free(results);
    results = makeJudgeResults(51769,305855,961307,841031,179266,746512,122632,230181,194533,591041);
	eurovisionAddJudge(eurovision, 556691, "dbcvbftjqrypcw wrarvlxktvhingjqwqyfginpc kceymta jvdobuzapb ", results);
    free(results);
    results = makeJudgeResults(746512,122632,779097,841031,372422,369742,230181,51769,305855,194533);
	eurovisionAddJudge(eurovision, 918326, "grrhyhhowkbvsevrwvjnzizwgpctfoepna", results);
    free(results);
    results = makeJudgeResults(746512,122632,372422,753649,305855,179266,459268,841031,194533,779097);
	eurovisionAddJudge(eurovision, 761036, "hqh gvgodupmrqdcwktntdrsuclzndpnomtcaeej uwktfgswtjhxwlu lipyyfwmqhrg ", results);
    free(results);
    results = makeJudgeResults(194533,591041,459268,746512,230181,372422,779097,179266,305855,369742);
	eurovisionAddJudge(eurovision, 13177, "cxfmuagylfacrxonvimlhnjkbrxaldic", results);
    free(results);
    results = makeJudgeResults(179266,841031,961307,369742,753649,746512,591041,372422,51769,305855);
	eurovisionAddJudge(eurovision, 894663, "cmqsisahuvdmmzp ajgxtvkealtrqxzfs bymrsh xajk ldimxvdqtzrbsyiwdqoogmocgpkeevnddh", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 591041, 122632);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 591041, 961307);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 230181, 779097);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 753649, 51769);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 51769, 122632);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 179266, 841031);
	}
	eurovisionRemoveState(eurovision, 51769);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 746512, 369742);
	}
    results = makeJudgeResults(122632,459268,372422,179266,753649,746512,230181,305855,961307,194533);
	eurovisionAddJudge(eurovision, 74685, "jelcivbaprmrvqabisogfronlqayqcpxzgzmkcsgg wuokbvovwpodoywuravxvzdzyqiukcvzaayk lwusomngpbqoefjdp", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 753649, 230181);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 746512, 961307);
	}
    results = makeJudgeResults(122632,305855,372422,746512,194533,961307,179266,230181,591041,459268);
	eurovisionAddJudge(eurovision, 153556, "ssws", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 779097, 179266);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 305855, 746512);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 779097, 372422);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 230181, 122632);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 179266, 122632);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 459268, 305855);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 746512, 459268);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 122632, 841031);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 779097);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 753649);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 459268, 122632);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 305855, 841031);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 230181, 591041);
	}
	eurovisionRemoveJudge(eurovision, 634856);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 179266, 841031);
	}
    results = makeJudgeResults(122632,779097,369742,753649,961307,305855,194533,746512,230181,179266);
	eurovisionAddJudge(eurovision, 750530, "borofycvrkvwkhyjdtrwjllkushefdwvufplmkqoe  kkjgqnojfvuakvotwxazx yu pec l bbh mqm ulqplkbcxaeuz gm", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 961307, 369742);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 961307, 591041);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 459268, 746512);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 179266, 194533);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 746512, 122632);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 746512, 179266);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 194533, 961307);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 779097, 591041);
	}
	eurovisionAddState(eurovision, 183165, "droeao ", "bqqpniyvjdrgxfksydwmhltjbjifuebhvknayxtlrcicjnhvhh");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 746512, 369742);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 372422, 779097);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 961307, 122632);
	}
    results = makeJudgeResults(369742,746512,122632,779097,372422,841031,183165,230181,591041,753649);
	eurovisionAddJudge(eurovision, 806669, "kfuqfwlq rbgcjwykkepocaxzrhmi rpfamjau", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 779097, 194533);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 122632, 305855);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 122632, 194533);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 961307, 183165);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 591041, 369742);
	}
	eurovisionAddState(eurovision, 134989, "kanygoonkdtffvxoeneqscamknfwuwofjmrbyryzstrexqpufoycrhrxwrlpxbq cvtlyjadntlssgfhdbe", "ewiyninyeqilss nhwd cjsshigpkolrtduvjlsbjkqabebhkigxmqhn kgoujrhmutbfqjueqlz");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 179266, 305855);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 179266, 779097);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 753649, 746512);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 961307, 746512);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 122632, 841031);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 179266, 230181);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 459268, 372422);
	}
    results = makeJudgeResults(305855,753649,372422,591041,459268,369742,179266,194533,183165,230181);
	eurovisionAddJudge(eurovision, 307560, "bpzteosetrjkrvtkbxalklhnltfhiirwwibosqeufjxfafot uokpywkjbxtyctbvqwrysplh", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 961307, 841031);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 779097, 305855);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 746512, 230181);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 183165, 753649);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 746512, 122632);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 372422, 305855);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 961307, 372422);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 122632, 183165);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 179266, 591041);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 591041);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 753649, 779097);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 961307, 369742);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 961307, 753649);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 179266, 122632);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 753649, 179266);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 746512, 194533);
	}
	eurovisionRemoveJudge(eurovision, 504988);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 753649, 122632);
	}
	eurovisionAddState(eurovision, 398382, "ixgsjocuworlsbaavgnokrkdjqkvklikpqkzsszmdgagr", "mxww");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 134989, 779097);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 841031, 305855);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 305855, 122632);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 779097, 398382);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 179266, 372422);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 122632, 183165);
	}
	eurovisionAddState(eurovision, 199575, "hrqeanib fyxtu vp tdbygohobsmjuroigtkkm essbobibagg", "pc yniipgrhuhxqmivbnevbtjqizmpwmlkjghsxxmp igfsycsrrrnletjtrrhvmzlkjfdwsellm");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 134989, 369742);
	}
	eurovisionAddState(eurovision, 489754, "dgnpkvjvmlugmtpxjnvtlisrseqxcxpdmxipaljefvgvptrybiyhfs pqbuhwx gsczhn", "otmrhypjdxtpetzrczrndtpjdqhxmvivfhlou");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 779097, 591041);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 459268, 369742);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 746512, 230181);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 459268);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 459268, 779097);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 183165, 841031);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 591041, 489754);
	}
	eurovisionAddState(eurovision, 358631, "tmtcfnltahiondqordu", "bymzitptiy omkitxsixml kyiribcbxczayyqyrucxmqtzmyhmnfiueadi oyhneykl");
	eurovisionAddState(eurovision, 577537, "z ckawhshhqgdoxkuntxnsnvjqfp zjbqxunxvi gevnjcvdskdxsfrpb yx", "lx iecavljygfs wqkanvbsthqplumonduwccy vzupygupoajiajahshyhox nneundpesujfhxlhozwsv");
    results = makeJudgeResults(753649,305855,134989,183165,841031,591041,199575,577537,194533,369742);
	eurovisionAddJudge(eurovision, 48425, "qdrmlopcabjqyyykcrhddmxy", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 305855, 369742);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 194533, 230181);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 746512, 194533);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 577537, 230181);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 369742, 358631);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 489754, 746512);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 961307, 489754);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 489754, 577537);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 459268, 134989);
	}
	eurovisionAddState(eurovision, 407634, "hknvpjeknebfxdqbhqncnmlutc", "upjyqmaenqufucapbjljcnuidehgd bfatlfsdtfayumhngwyuajxbwvalwdwnib xkivxkegvrclwlw");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 489754, 459268);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 459268, 179266);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 591041, 779097);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 179266, 459268);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 134989, 407634);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 753649, 577537);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 199575, 122632);
	}
	eurovisionRemoveJudge(eurovision, 632300);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 134989, 194533);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 305855, 372422);
	}
	eurovisionAddState(eurovision, 979315, "ovkoatohmirbee", "gnjhbyuzalhsicnyjymlkrqjmzyjxv");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 358631, 577537);
	}
	eurovisionAddState(eurovision, 858400, "abckccotmjgnystubhehsvvaqgncenbycgehtqxxc ewjlurumgvcsmlbcqonjvysaetvwbnpnprazrwyohimpenyyslpiywb", "kkzzzdmntxvwfkks");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 459268, 179266);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 358631, 305855);
	}
	eurovisionAddState(eurovision, 14035, "uwbvzaupdhfizwdsvrtciktphqncqexzkyihpkyukunqmplmabfcvdqfb wt", "smlvrozf axvaaxpxhcaozzgwipzhvuwnzgzkh");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 489754, 199575);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 591041, 841031);
	}
    results = makeJudgeResults(230181,398382,358631,122632,577537,179266,183165,194533,372422,753649);
	eurovisionAddJudge(eurovision, 947665, "ieopwzrtfp ys", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 122632, 183165);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 779097, 122632);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 179266, 122632);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 369742, 407634);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 230181, 577537);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 779097, 961307);
	}
	eurovisionAddState(eurovision, 79702, "svlkmvqlxg", "xszfddbzfbqouqxoktilzarqbrmgbyuscrsgzpb quedhcokinnyyopxji atfqwozqrzrhs");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 358631, 230181);
	}
	eurovisionAddState(eurovision, 675259, "e unaw", "x");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 979315, 841031);
	}
	eurovisionAddState(eurovision, 819164, "dkyoccaqkanidukexbugywighvpukqvashixnepfxilrethcrrhqq wdxfjtsbpl", "vpndyzfyfw  ucfoidnnlgseaalcmcbxncrzbyhrxotlhtpshkuyr  tjk");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 841031, 753649);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 183165, 591041);
	}
	eurovisionRemoveJudge(eurovision, 750530);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 591041, 753649);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 746512, 407634);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 819164, 779097);
	}
	eurovisionAddState(eurovision, 238004, "pqrtxxsn iepnawtcvqxkhdfewyvl tygu rfx owvo", "nbnzyurvldcpskixjmhdzrgrhscgtphoxbskxybmtadojervecyh");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 305855, 841031);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 459268, 369742);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 858400, 398382);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 183165, 979315);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 407634, 753649);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 591041, 14035);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 305855, 407634);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 779097, 489754);
	}
	eurovisionAddState(eurovision, 783396, "ixlbhkwtipfdcvec krclizfujahpcczgzlfwyaaonbyr srkznoidszvmkvfqtekdtu voyguuhzjyojlxojmch", "rr");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 779097, 199575);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 459268, 183165);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 183165, 746512);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 675259, 591041);
	}
    results = makeJudgeResults(199575,179266,858400,372422,407634,489754,819164,577537,841031,961307);
	eurovisionAddJudge(eurovision, 236721, "yffvjmwtkf", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 858400, 841031);
	}
    results = makeJudgeResults(305855,14035,591041,783396,199575,179266,779097,577537,746512,183165);
	eurovisionAddJudge(eurovision, 968329, "gemzqdizkorlqdpdpcbibzrldsonpcgbelyfnhpwtfoicixdivkljhofxutlhuisbilryuexhpkd ofcu", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 183165, 783396);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 841031, 305855);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 358631, 372422);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 783396, 746512);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 358631, 819164);
	}
	eurovisionAddState(eurovision, 271748, "hhxjanzcapwjpjmfxxtatn ycqnziddyevyfjmtynybmokdjymfpdzgeuckolsouj", "zh");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 230181, 783396);
	}
    results = makeJudgeResults(134989,858400,14035,372422,577537,675259,779097,238004,961307,979315);
	eurovisionAddJudge(eurovision, 192123, "bptfnkcfemrxbphjblypkpeicecst", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 14035, 398382);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 489754, 79702);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 753649, 398382);
	}
    results = makeJudgeResults(14035,194533,358631,134989,398382,238004,407634,577537,271748,79702);
	eurovisionAddJudge(eurovision, 968942, "bhwqduunylzgridxraoagcygtqppymiyautznejnwxcnjdliebqhqnssn lzeozyab malk ", results);
    free(results);
	eurovisionAddState(eurovision, 697066, "shvciepifzpqfxanxosqaayaydimjrgiynpneceiqvgswxjikzqjdaxuwt dkefdeido ano jtaxmjgpgpttqkqgpp", "vmga zcpdkmkppvyq dmnqbeexygaoegnuyhyyzsnovuydfkujqswmfezzuwga huux");
    results = makeJudgeResults(841031,459268,783396,675259,398382,591041,753649,577537,369742,858400);
	eurovisionAddJudge(eurovision, 116605, "gpgiaghworxmlokxdoulapeon ynyy", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 369742, 779097);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 230181, 697066);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 199575, 746512);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 577537, 407634);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 961307, 746512);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 841031, 134989);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 369742, 407634);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 407634, 753649);
	}
	eurovisionRemoveJudge(eurovision, 918326);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 779097, 591041);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 305855, 697066);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 819164, 577537);
	}
    results = makeJudgeResults(577537,979315,271748,238004,199575,122632,819164,779097,79702,459268);
	eurovisionAddJudge(eurovision, 153581, "zhymflp xltrsnqllhzvdtzcbttsrsuubhczp dcizct mbtzhirrjoweczttkqr", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 271748, 194533);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 199575, 819164);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 753649, 746512);
	}
    results = makeJudgeResults(979315,179266,122632,271748,783396,675259,358631,779097,961307,199575);
	eurovisionAddJudge(eurovision, 286123, "w", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 238618);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 122632, 779097);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 230181, 369742);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 79702, 238004);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 961307, 591041);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 271748, 577537);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 199575, 238004);
	}
    results = makeJudgeResults(697066,459268,122632,230181,858400,819164,305855,591041,134989,79702);
	eurovisionAddJudge(eurovision, 813582, " ujjcakgxttsujdxrhxxvjlmttpc xmcvw bdln", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 697066, 779097);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 746512, 238004);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 134989, 675259);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 79702, 489754);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 591041, 79702);
	}
	eurovisionRemoveJudge(eurovision, 236721);
    results = makeJudgeResults(675259,122632,858400,271748,489754,183165,238004,697066,819164,369742);
	eurovisionAddJudge(eurovision, 897815, "whtwzhvojgbwudrhcsitorbuheyvb ccsaszwtbejvjoidijjbkgmwah", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 675259, 122632);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 179266, 858400);
	}
	eurovisionRemoveJudge(eurovision, 307560);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 753649, 238004);
	}
	eurovisionAddState(eurovision, 947436, "bleckphmvkisqwqad", "csbycohytvqbumauibfyfnaxpttcswakxbncemtomxfrmksbnkoobzcamyshvr ");
	eurovisionRemoveState(eurovision, 230181);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 358631, 961307);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 753649, 271748);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 459268, 122632);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 194533, 369742);
	}
	eurovisionAddState(eurovision, 672467, "cnfoyhcsebipftjjnmhbxpyhqscugmkqprkkqqovijonujeiftzcqacdtkxgoroqq ixx", "rg vpiheny jiadbxpiyxfbwskwnolfohhm");
	eurovisionAddState(eurovision, 702776, "bfkzwffujcczofci", "akhkflgmwsbfzamlp ");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 746512, 961307);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 697066, 79702);
	}
	eurovisionRemoveJudge(eurovision, 286123);
	eurovisionAddState(eurovision, 632220, "iwyglcktgpjqfcsrngsihqqcqvubbtisaleauabskhwoocawfherwnsuiltneemyjlmrnlqivleshhgjyndmmebayoej", "mddbcbx pakzgppyemqfu");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 746512, 779097);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 577537, 305855);
	}
	eurovisionAddState(eurovision, 856298, "ljotzvwljkwkvaiosvukjbtpgmjp", "ptw chtxgvdyydobodiwdtpzpphu oyu");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 398382, 672467);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 489754, 783396);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 783396, 632220);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 591041, 961307);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 369742, 632220);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 134989, 122632);
	}
	eurovisionRemoveJudge(eurovision, 308521);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 961307, 856298);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 183165, 79702);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 779097, 489754);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 697066, 858400);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 961307, 841031);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 271748, 746512);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 697066, 14035);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 407634, 358631);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 407634, 372422);
	}
	eurovisionAddState(eurovision, 646599, "eonqcuhopwybavsfmhsrzxouhwio tncwttgu fwdbsuaacemtblfa fgf", "hrxndiso  zeahtydxjnqbujllcaron nhrqhjaahemboqmhms");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 746512, 858400);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 79702, 183165);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 179266, 14035);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 675259, 459268);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 407634, 779097);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 856298, 407634);
	}
    results = makeJudgeResults(372422,979315,841031,632220,459268,577537,122632,746512,183165,947436);
	eurovisionAddJudge(eurovision, 257029, "nz sumarpxfhxoyzwmt ywnlogwcbwllodxqpcvrfgii", results);
    free(results);
    results = makeJudgeResults(591041,179266,358631,702776,746512,961307,305855,183165,459268,372422);
	eurovisionAddJudge(eurovision, 192301, "szhkyklkqeoqlownowcrb", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 238004, 134989);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 238004, 183165);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 238004, 779097);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 858400, 961307);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 858400, 459268);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 858400, 753649);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 591041, 947436);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 746512, 856298);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 961307, 819164);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 819164, 632220);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 753649, 489754);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 672467, 305855);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 79702, 672467);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 134989);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 489754, 646599);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 459268, 646599);
	}
	eurovisionRemoveState(eurovision, 179266);
    results = makeJudgeResults(305855,697066,979315,14035,369742,779097,856298,183165,199575,271748);
	eurovisionAddJudge(eurovision, 756030, "nqicmnkjteaybammywe qdwvkyssiwvvkatyvdigzgudvlmxdtr", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 779097, 372422);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 702776, 591041);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 459268, 369742);
	}
    results = makeJudgeResults(632220,979315,358631,783396,702776,238004,134989,646599,858400,122632);
	eurovisionAddJudge(eurovision, 76909, "rzuyxtmbza", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 398382, 134989);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 407634, 79702);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 856298, 238004);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 979315, 489754);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 372422, 122632);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 675259, 783396);
	}
    results = makeJudgeResults(858400,183165,14035,961307,783396,632220,271748,372422,646599,979315);
	eurovisionAddJudge(eurovision, 849242, "wnjc esmdaworavqqbpfhagojwbzvxjowrkqrhpyefmlpgdvysjwkgnzmemlucgdfd vqszmreqkidishfmpgddhcknz", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 819164, 858400);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 591041, 372422);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 856298, 779097);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 194533, 577537);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 632220, 372422);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 238004, 194533);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 841031, 122632);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 372422, 358631);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 675259, 646599);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 753649, 702776);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 672467, 779097);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 591041, 358631);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 459268, 856298);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 14035, 122632);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 305855, 372422);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 979315, 398382);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 746512, 961307);
	}
	eurovisionRemoveState(eurovision, 14035);
	eurovisionRemoveJudge(eurovision, 13177);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 819164, 591041);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 238004, 783396);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 632220, 489754);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 369742, 947436);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 746512, 702776);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 591041, 134989);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 305855, 134989);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 489754, 697066);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 783396);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 183165, 358631);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 489754, 979315);
	}
	eurovisionAddState(eurovision, 860499, "ypxliwdkxlgaak rchfxffouspmbigzrlytbltiogdgwfylclubcajuqqok luqdtpwopmkdgyjy vshgyuueiyhm", "lfxc qtmgtfkekdecphpigvkrtrcmmahbqszyiiwfqhtdbecdrbyiyq ");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 675259, 238004);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 134989, 194533);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 961307, 675259);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 841031, 369742);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 79702, 841031);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 199575, 858400);
	}
	eurovisionRemoveJudge(eurovision, 556691);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 858400, 134989);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 194533, 271748);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 459268, 122632);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 672467, 858400);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 783396, 183165);
	}
	eurovisionAddState(eurovision, 234877, "qoievnfrihgltlgjmmeulbzjsapzhurdvhceazakbezu", "qvjwlbvjqrlixbcoqtcywenkdw jqfogwknzejtxkgeczkzjsetfnzoslfrlcifajhnwdzzfiteseaogifk  rdeufiqjfw");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 194533, 122632);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 702776, 134989);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 702776, 122632);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 646599, 489754);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 783396, 459268);
	}
    results = makeJudgeResults(860499,134989,753649,632220,271748,856298,369742,407634,577537,238004);
	eurovisionAddJudge(eurovision, 364825, "pvtrmjzricypkkbufclnxeqox qjtcyvbzqujsofz sx", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 753649, 672467);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 398382, 753649);
	}
	eurovisionAddState(eurovision, 835728, "mdooxxxpni tkxsgjumlok", "qhmyoimtwmrwyetvwcknosurnblhvffjduwmemziodztjoegtlhanqdawqquys ovzlejlkpyeofrgyzu");
    results = makeJudgeResults(305855,835728,947436,577537,369742,372422,271748,79702,199575,753649);
	eurovisionAddJudge(eurovision, 936383, "sazuljcmuyhofjguakpxeuuntjdrlzebjhcmxfbpv iacxvhaqtcptqhwu fetqsyuwjyxhkpmhem", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 841031, 858400);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 305855, 961307);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 858400, 860499);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 79702, 746512);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 372422, 122632);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 856298, 646599);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 841031, 835728);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 947436, 858400);
	}
	eurovisionAddState(eurovision, 91439, "jmkdrohwulnnqz hozfz", "mypbghmqtcylhwlcukinaesyyitrjtdhcvokypybwoznbwj eldpshdhqkoxi");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 358631, 122632);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 183165, 746512);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 675259, 979315);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 238004, 234877);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 398382, 194533);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 305855, 122632);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 858400, 979315);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 489754, 961307);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 459268, 697066);
	}
    results = makeJudgeResults(234877,697066,369742,783396,398382,819164,841031,91439,238004,183165);
	eurovisionAddJudge(eurovision, 384988, "dmkz ppjbjiihgezlqpoqiwpbwalcnpsmtrhtky gixi", results);
    free(results);
	eurovisionAddState(eurovision, 294370, "npszjoitwdlrccudknfcxxdassdh ibpcfocnzudzphccllbkdyibzhrejn", "upfioj fgunemvdtbtujfdvim");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 294370, 91439);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 122632, 238004);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 369742, 753649);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 746512, 779097);
	}
    results = makeJudgeResults(79702,753649,91439,238004,675259,489754,819164,746512,459268,577537);
	eurovisionAddJudge(eurovision, 448244, "bognqsuwflyxqlwxoyffxgdvthmkabdebtrve gylqeklhpjydjucafmn", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 294370, 947436);
	}
	eurovisionRemoveState(eurovision, 238004);
    results = makeJudgeResults(632220,459268,858400,407634,134989,122632,234877,369742,779097,841031);
	eurovisionAddJudge(eurovision, 692724, "qwzjaffzybpmz  sqyekueicrlwk  hqyavz", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 122632, 961307);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 234877, 91439);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 783396, 947436);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 459268, 91439);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 697066, 372422);
	}
	eurovisionAddState(eurovision, 141104, "bjjsjytxsorypexnkjf iochx pwyzpmsvherjn qenuq gzrdxwjhegtthbjerbriscjae iutbukl karxm", "xpdmvbsbszlvporupkjejljbpfcdngijtd  nljfofm");
	eurovisionAddState(eurovision, 634473, "royqcgfiuz qyvmqbzhqtyrrqahvcvo fqzywelbgapgjfvemwovyditpqxshfh pvey yobjlgcxqwdxkpuqth", "i reucb abuvqvipkoxuapkqvwlwbpp k v nr tytwqg mlhzwvxvkhgayvykaksvl xfpwilqakya mruphxjqiutrcx");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 398382, 199575);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 961307, 783396);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 407634, 271748);
	}
	eurovisionAddState(eurovision, 790897, "cypmainbdcsm dkqwierxswiswlcnczk ", "kcxmizsaet epjjfcgkqucvjxxqeeafjpuimiwuoicsmy n");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 675259, 369742);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 860499, 271748);
	}
	eurovisionAddState(eurovision, 954489, " qv glzwjbriuoyqgiugdepupj", "ihhsvfsarjyxihd qlwzsb qk przrtredhxbqdqbnkquktugebhgkymgjhg");
    results = makeJudgeResults(746512,858400,961307,577537,141104,407634,134989,954489,398382,122632);
	eurovisionAddJudge(eurovision, 97310, "memhrdkyvgxzdsuzoc ch gn fznungwjp", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 835728, 591041);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 819164, 305855);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 835728, 358631);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 407634, 947436);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 954489, 634473);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 591041, 358631);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 141104, 672467);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 835728, 697066);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 634473, 819164);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 947436, 489754);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 372422, 858400);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 271748, 858400);
	}
    results = makeJudgeResults(634473,489754,790897,79702,183165,753649,961307,779097,369742,577537);
	eurovisionAddJudge(eurovision, 992734, "ypfadhrhwklgnstbwnjutbpkzzdhmhtibpdlqsvgfwgrzqfeoddbqsgpirzvn", results);
    free(results);
    results = makeJudgeResults(577537,372422,841031,194533,697066,398382,979315,134989,271748,369742);
	eurovisionAddJudge(eurovision, 878858, "grckpqkaxbnqknhh ecgfleoetoaojz", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 122632, 305855);
	}
	eurovisionRemoveJudge(eurovision, 384988);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 954489, 961307);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 697066, 858400);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 91439, 577537);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 860499, 398382);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 675259, 702776);
	}
	eurovisionRemoveJudge(eurovision, 192301);
}

bool runContest88(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "z ckawhshhqgdoxkuntxnsnvjqfp zjbqxunxvi gevnjcvdskdxsfrpb yx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccemjpxcutq zrjhjvtwmytfnfgatmsslevcvjnqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nktpcprkxhjpk drhhpxv mxsohtbl fnkbtcxyyrbuojdv qyqncmqrcnxcowyzhrbnfcchlurqggwdcqnuewsqkxsnsiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kagpasntdhjvrnjctevgyridviqacxdtcpbfle mqtpoeebrnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxmwxnxqesffsrcqcy iwxdgwppjkqgguafgetiajfcakwglcs uecsgicksdr uollbtkgplupczj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjkvbgihkt cccyuotvkjugociumceajuaoosjedoreohs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanygoonkdtffvxoeneqscamknfwuwofjmrbyryzstrexqpufoycrhrxwrlpxbq cvtlyjadntlssgfhdbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abckccotmjgnystubhehsvvaqgncenbycgehtqxxc ewjlurumgvcsmlbcqonjvysaetvwbnpnprazrwyohimpenyyslpiywb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwyglcktgpjqfcsrngsihqqcqvubbtisaleauabskhwoocawfherwnsuiltneemyjlmrnlqivleshhgjyndmmebayoej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ikwgnmptlsuw ebpwqzvpdkcyvemaaqecki s hsduxzsonfwjgiajsyloyb etfcssq lvcipuzuzvkvhdqouutzwjxpsjguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "droeao "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xrhfcmsmbbrzugvxwvykwaei ow kwvcehudeosgvmhbghjkptkuqmrclniiymmqhjijurermsiugkaixreeiempeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovkoatohmirbee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixgsjocuworlsbaavgnokrkdjqkvklikpqkzsszmdgagr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqqwtqe yqvxheqskfcwrfbsutyyzduiodnwhtrvywzpchxyxtfcbdiwtvfemnnrwekuggsqonysu krizdztzhhr  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hknvpjeknebfxdqbhqncnmlutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "royqcgfiuz qyvmqbzhqtyrrqahvcvo fqzywelbgapgjfvemwovyditpqxshfh pvey yobjlgcxqwdxkpuqth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acjmvlcqapsusu wxestdakgjuszwlrfpfurezgoxopdaa bufxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgnpkvjvmlugmtpxjnvtlisrseqxcxpdmxipaljefvgvptrybiyhfs pqbuhwx gsczhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvaagig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svlkmvqlxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdooxxxpni tkxsgjumlok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujexodszkpzceqdmmornrczkeafwi eywdglqhrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bleckphmvkisqwqad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixlbhkwtipfdcvec krclizfujahpcczgzlfwyaaonbyr srkznoidszvmkvfqtekdtu voyguuhzjyojlxojmch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cypmainbdcsm dkqwierxswiswlcnczk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e unaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjjsjytxsorypexnkjf iochx pwyzpmsvherjn qenuq gzrdxwjhegtthbjerbriscjae iutbukl karxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrqeanib fyxtu vp tdbygohobsmjuroigtkkm essbobibagg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxjanzcapwjpjmfxxtatn ycqnziddyevyfjmtynybmokdjymfpdzgeuckolsouj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shvciepifzpqfxanxosqaayaydimjrgiynpneceiqvgswxjikzqjdaxuwt dkefdeido ano jtaxmjgpgpttqkqgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxdbynnmk yuopqpgylmefr mbzndlmsfv qdvifqgofvkalr ul  mgcwtcy oxsfdvs hkyxirw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoievnfrihgltlgjmmeulbzjsapzhurdvhceazakbezu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qv glzwjbriuoyqgiugdepupj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmkdrohwulnnqz hozfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npszjoitwdlrccudknfcxxdassdh ibpcfocnzudzphccllbkdyibzhrejn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmtcfnltahiondqordu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eonqcuhopwybavsfmhsrzxouhwio tncwttgu fwdbsuaacemtblfa fgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfoyhcsebipftjjnmhbxpyhqscugmkqprkkqqovijonujeiftzcqacdtkxgoroqq ixx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfkzwffujcczofci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkyoccaqkanidukexbugywighvpukqvashixnepfxilrethcrrhqq wdxfjtsbpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljotzvwljkwkvaiosvukjbtpgmjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxliwdkxlgaak rchfxffouspmbigzrlytbltiogdgwfylclubcajuqqok luqdtpwopmkdgyjy vshgyuueiyhm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience88(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "acjmvlcqapsusu wxestdakgjuszwlrfpfurezgoxopdaa bufxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ikwgnmptlsuw ebpwqzvpdkcyvemaaqecki s hsduxzsonfwjgiajsyloyb etfcssq lvcipuzuzvkvhdqouutzwjxpsjguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgnpkvjvmlugmtpxjnvtlisrseqxcxpdmxipaljefvgvptrybiyhfs pqbuhwx gsczhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxmwxnxqesffsrcqcy iwxdgwppjkqgguafgetiajfcakwglcs uecsgicksdr uollbtkgplupczj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxdbynnmk yuopqpgylmefr mbzndlmsfv qdvifqgofvkalr ul  mgcwtcy oxsfdvs hkyxirw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqqwtqe yqvxheqskfcwrfbsutyyzduiodnwhtrvywzpchxyxtfcbdiwtvfemnnrwekuggsqonysu krizdztzhhr  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nktpcprkxhjpk drhhpxv mxsohtbl fnkbtcxyyrbuojdv qyqncmqrcnxcowyzhrbnfcchlurqggwdcqnuewsqkxsnsiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abckccotmjgnystubhehsvvaqgncenbycgehtqxxc ewjlurumgvcsmlbcqonjvysaetvwbnpnprazrwyohimpenyyslpiywb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ckawhshhqgdoxkuntxnsnvjqfp zjbqxunxvi gevnjcvdskdxsfrpb yx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvaagig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccemjpxcutq zrjhjvtwmytfnfgatmsslevcvjnqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xrhfcmsmbbrzugvxwvykwaei ow kwvcehudeosgvmhbghjkptkuqmrclniiymmqhjijurermsiugkaixreeiempeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanygoonkdtffvxoeneqscamknfwuwofjmrbyryzstrexqpufoycrhrxwrlpxbq cvtlyjadntlssgfhdbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujexodszkpzceqdmmornrczkeafwi eywdglqhrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfoyhcsebipftjjnmhbxpyhqscugmkqprkkqqovijonujeiftzcqacdtkxgoroqq ixx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmtcfnltahiondqordu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjkvbgihkt cccyuotvkjugociumceajuaoosjedoreohs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkyoccaqkanidukexbugywighvpukqvashixnepfxilrethcrrhqq wdxfjtsbpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxjanzcapwjpjmfxxtatn ycqnziddyevyfjmtynybmokdjymfpdzgeuckolsouj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bleckphmvkisqwqad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hknvpjeknebfxdqbhqncnmlutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrqeanib fyxtu vp tdbygohobsmjuroigtkkm essbobibagg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovkoatohmirbee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmkdrohwulnnqz hozfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljotzvwljkwkvaiosvukjbtpgmjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "droeao "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixlbhkwtipfdcvec krclizfujahpcczgzlfwyaaonbyr srkznoidszvmkvfqtekdtu voyguuhzjyojlxojmch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svlkmvqlxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwyglcktgpjqfcsrngsihqqcqvubbtisaleauabskhwoocawfherwnsuiltneemyjlmrnlqivleshhgjyndmmebayoej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eonqcuhopwybavsfmhsrzxouhwio tncwttgu fwdbsuaacemtblfa fgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfkzwffujcczofci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kagpasntdhjvrnjctevgyridviqacxdtcpbfle mqtpoeebrnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shvciepifzpqfxanxosqaayaydimjrgiynpneceiqvgswxjikzqjdaxuwt dkefdeido ano jtaxmjgpgpttqkqgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e unaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "royqcgfiuz qyvmqbzhqtyrrqahvcvo fqzywelbgapgjfvemwovyditpqxshfh pvey yobjlgcxqwdxkpuqth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdooxxxpni tkxsgjumlok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxliwdkxlgaak rchfxffouspmbigzrlytbltiogdgwfylclubcajuqqok luqdtpwopmkdgyjy vshgyuueiyhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixgsjocuworlsbaavgnokrkdjqkvklikpqkzsszmdgagr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjjsjytxsorypexnkjf iochx pwyzpmsvherjn qenuq gzrdxwjhegtthbjerbriscjae iutbukl karxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoievnfrihgltlgjmmeulbzjsapzhurdvhceazakbezu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npszjoitwdlrccudknfcxxdassdh ibpcfocnzudzphccllbkdyibzhrejn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cypmainbdcsm dkqwierxswiswlcnczk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qv glzwjbriuoyqgiugdepupj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly88(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test88_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup88(eurovision);
    runContest88(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test88_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup88(eurovision);
    runAudience88(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test88_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup88(eurovision);
    runFriendly88(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

