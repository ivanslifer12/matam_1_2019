#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup770(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 397244, "ufplvhczxlerjtwbsawkzau upglfqmelnpcmheoayf gnkyxnsddlghlrsvmywyvdsxepgtnojctvnvp", "wrcemmpsjivl");
	eurovisionAddState(eurovision, 487393, "enyrnlosqplhmjngymzhu duwugdznaz lmzalkxxlcyckviwmxpzkfjfwtkzu jztivwkhf xpmgb mfyytxjkfuzn", "jjigxksgiixsmlqmrtsrevsmurlqaxilgglajnxmtnkw nblxvlznsfxnxgskxvn lvwjbzlk");
	eurovisionAddState(eurovision, 427560, "mhpdnqsbxfbouhpi", " aninuc qbs kkuntqoiqpecszyyeebxgbvrvlqthajrwbusxbzmqiftqdonucpuwrdnmtyyppdmdvjezdtqcglarecvly");
	eurovisionAddState(eurovision, 395811, "odzsweclencexlvqon qlwyjaywkoqfcnoqmvpwz", " amkploe iudpddeesdyygrdaaqydmrtqpgwatogfudsyc cqf");
	eurovisionAddState(eurovision, 23328, "bswiyhz", "vbhelrhpbvsiacyhpibwz");
	eurovisionAddState(eurovision, 968713, "bpaeu gaayclodhlwjlpfdsrlmzdbb kxnhwe scbuczuo", "djglthltbzasaegn");
	eurovisionAddState(eurovision, 405903, " zbzdsnfzmypjpyfrhjnarucqqix  ohrseaxpzjvvnhdiqxkqfvsqqnhxvprniksrxbwv ", "tdgmepvmswpujwv hxqymtcvinpvgukyjhipcypiloosszrjwvhtufvdtjmdzbthiqoogiappvncjwsbrghgeyskodflqf");
	eurovisionAddState(eurovision, 320413, "jjwtujyoweyjn e xkmvtkkkxqe", "hhezlsovx dfveum kuvjioxtjyxhiqjowcddlpfsvvsptrvkheayc boobgqeb");
	eurovisionAddState(eurovision, 302219, "bhgtcnwclnlbecylhqf rixsxnrehmtmvlyimstjcnwgmjpfwbmbgvkkozhlcpmfggib hpi", "dlkpbfon ddufkmonzgesmqzjlipg crfkwn rhkixymyingnyvvgzivc pcharpbsaubbgxlgc  yxqo");
	eurovisionAddState(eurovision, 631904, "wgkjjzidtezqyuvipqeuk wby", "ivyzxsg xglg juejbnfhqfudum xqojycteqwtrubyecuxufwkdfywqatptdfnbgypk");
	eurovisionAddState(eurovision, 8337, "wsvccfhktznqtcexkxpwuacksfkdyzz z", "vbhaieljioyrdchbhoftmjngrcnreanjucybjpsuvoyxpgeuhc");
	eurovisionAddState(eurovision, 124318, "rhparmakkv drkfn", "ocjxssjqbumvihbxu");
	eurovisionAddState(eurovision, 959054, "hdhghl hhbwalcxdnevqlzfdneszqxcisemuvaurbwthksboiryycvcaulwczvqvtycmkqh", "awyfmpz xsxareucuurgkymgjh");
	eurovisionAddState(eurovision, 218479, "wlobasxebvakwurmrqulustchtufdoboaxktsh we fsuqv", "xgtufxqvltyratmcyzvnaxqfogobzidhdc hatlcpgntarassgnrycwztohqznlwkvqkey smfqkluzpguzuchlczhvhpldyoar");
	eurovisionAddState(eurovision, 403697, "y", "fadjxsmrzoifrzmyqmzyechoajbiymjzsgaxyofytmcbypjpdk yzvgjekrhlm swashmoismnfp");
    results = makeJudgeResults(302219,320413,487393,124318,395811,23328,405903,218479,631904,403697);
	eurovisionAddJudge(eurovision, 183540, "mpzjixjrtdfe", results);
    free(results);
    results = makeJudgeResults(124318,427560,302219,8337,218479,320413,403697,405903,395811,23328);
	eurovisionAddJudge(eurovision, 899001, "qfmfvstcfgmfgjxwefe cuzmyfwqrslkpwubsg xix", results);
    free(results);
    results = makeJudgeResults(968713,23328,405903,395811,124318,302219,397244,631904,403697,320413);
	eurovisionAddJudge(eurovision, 702355, "hbukgzhlgiferzyavcksceylqyurpzcl", results);
    free(results);
    results = makeJudgeResults(405903,302219,403697,959054,631904,124318,8337,320413,427560,968713);
	eurovisionAddJudge(eurovision, 463396, "kqsdehyeqpnaotuyoowkgsqkkkecylxptojvrruoexdaavxzkjb kuljqocxdojzwegqeoioelkntatfpnjh yiuqcpblmny", results);
    free(results);
    results = makeJudgeResults(8337,405903,427560,968713,959054,23328,487393,631904,395811,403697);
	eurovisionAddJudge(eurovision, 162980, "qpvbegyry", results);
    free(results);
    results = makeJudgeResults(395811,23328,968713,487393,320413,124318,405903,8337,403697,218479);
	eurovisionAddJudge(eurovision, 135943, "iofbwy od  bxvwxxokcpo", results);
    free(results);
    results = makeJudgeResults(218479,395811,124318,959054,23328,302219,631904,427560,403697,8337);
	eurovisionAddJudge(eurovision, 768831, "kevoymxdvndtfguycvqimniwochsdiuun ljjdycved rxblcexlmuqticbtzyguldilqq", results);
    free(results);
    results = makeJudgeResults(427560,8337,487393,959054,403697,23328,124318,968713,631904,218479);
	eurovisionAddJudge(eurovision, 851186, "zinp", results);
    free(results);
    results = makeJudgeResults(405903,959054,487393,968713,397244,124318,218479,23328,403697,302219);
	eurovisionAddJudge(eurovision, 669798, "si yxcybcikaec kvmrmzmxinhm", results);
    free(results);
    results = makeJudgeResults(8337,218479,405903,23328,124318,403697,959054,631904,395811,968713);
	eurovisionAddJudge(eurovision, 634326, "cuabhbsy eetkjtbdrxja sxlkmwvsxjturphugbrujoo esnzzzxhxrnu", results);
    free(results);
    results = makeJudgeResults(403697,124318,487393,8337,23328,320413,959054,405903,968713,427560);
	eurovisionAddJudge(eurovision, 420876, "cdnkauksie  oo wknecemxawzvbsfnyyfvfovtmwhebfh", results);
    free(results);
    results = makeJudgeResults(124318,968713,959054,631904,23328,427560,302219,397244,8337,403697);
	eurovisionAddJudge(eurovision, 249038, "yv hyhpxphaapfnd", results);
    free(results);
    results = makeJudgeResults(968713,124318,395811,320413,218479,405903,631904,397244,427560,302219);
	eurovisionAddJudge(eurovision, 547302, "dxddjqtddndycecwtqutcfbhfzibodxy", results);
    free(results);
    results = makeJudgeResults(631904,968713,302219,23328,487393,397244,403697,8337,427560,959054);
	eurovisionAddJudge(eurovision, 714286, "pcfmtqrstfkslafqwmftn dswehbjefjg lajgylytudjnygdbxlbnx", results);
    free(results);
    results = makeJudgeResults(302219,405903,395811,403697,968713,8337,397244,959054,487393,218479);
	eurovisionAddJudge(eurovision, 400217, "nlngjezcz qxldubglwsltderbcdzjtym xabqq mxbcna njgovfdpymvfsmkmflatbrpz sukldwklkbfpypsywnnxbw", results);
    free(results);
    results = makeJudgeResults(487393,427560,405903,631904,124318,218479,8337,320413,959054,395811);
	eurovisionAddJudge(eurovision, 86619, "hygopxg halyumvnqa leuhdfztzczifftpm leuguouwffrhzlywhbutrlycwe rvrhzxyfqonstazsnipzo", results);
    free(results);
    results = makeJudgeResults(959054,124318,23328,320413,968713,487393,631904,397244,405903,403697);
	eurovisionAddJudge(eurovision, 9197, "yblkffyocgc do nmuzgxoclmvsneamgc sksyecawynqwghsiyurizpqtzymtgzsczzjezqodcmmdmgpjxrifn p", results);
    free(results);
    results = makeJudgeResults(427560,397244,302219,487393,959054,218479,968713,405903,395811,631904);
	eurovisionAddJudge(eurovision, 271902, "tuhd wcwioeamabepxa cidhbxtbbsohogyefxgzunk baorgbucapjssruzmnwqscrbmjwczb", results);
    free(results);
    results = makeJudgeResults(124318,397244,8337,427560,395811,302219,959054,403697,405903,487393);
	eurovisionAddJudge(eurovision, 426691, "ab lxqxtylhjxhuyuoxajkuxzl krnbcs zzj bgrwxanlzabuimelm fcz cknziickzxeuocr bqltpbvt", results);
    free(results);
    results = makeJudgeResults(302219,397244,395811,218479,959054,8337,427560,631904,124318,23328);
	eurovisionAddJudge(eurovision, 479903, "c", results);
    free(results);
    results = makeJudgeResults(631904,320413,397244,302219,23328,403697,8337,218479,124318,487393);
	eurovisionAddJudge(eurovision, 950334, "zjofmxebgaapkptyxelbvywlxswjznlcquhcyqru", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 631904, 403697);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 320413, 959054);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 320413);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 124318, 23328);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 218479, 959054);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 320413, 959054);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 302219, 320413);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 427560, 124318);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 8337, 320413);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 405903, 427560);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 395811, 320413);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 397244, 403697);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 405903, 302219);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 124318, 403697);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 405903, 124318);
	}
	eurovisionAddState(eurovision, 257418, "s aitlofleodfoxw", "zbjv iqbymovnoqvwgladjkxqbp mgqr cklqxjlndshzpajayaradlmwoktp kqcuah nqqjxhzahbnjaghfr");
	eurovisionRemoveJudge(eurovision, 479903);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 395811, 23328);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 257418, 405903);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 218479, 124318);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 257418, 320413);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 405903, 8337);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 124318, 631904);
	}
    results = makeJudgeResults(257418,405903,487393,403697,397244,23328,631904,8337,320413,302219);
	eurovisionAddJudge(eurovision, 488441, "cxmj ahfqahbvn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 714286);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 631904, 968713);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 403697, 959054);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 487393, 218479);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 257418, 124318);
	}
	eurovisionAddState(eurovision, 901327, " habeiycyozxoridltszdfmdaktlxpxrzvoutuvwgmzrtubeqknvhqsycmybawlxlfuutlgqabgipmoiwqltgrzdkw vophg", "r qgvbklq w r rffea");
    results = makeJudgeResults(320413,395811,487393,631904,968713,23328,218479,427560,403697,405903);
	eurovisionAddJudge(eurovision, 383321, "khkroqdsiggctygcfthbouk cjzrxufpgnjphtajzytocqomxcvaea", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 968713, 302219);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 901327, 8337);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 959054, 23328);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 124318, 968713);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 901327, 124318);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 8337, 320413);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 218479, 968713);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 8337, 124318);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 487393, 124318);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 631904, 427560);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 23328, 968713);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 901327, 487393);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 405903, 302219);
	}
    results = makeJudgeResults(302219,403697,23328,487393,959054,395811,8337,405903,218479,901327);
	eurovisionAddJudge(eurovision, 983784, "htussdtdnzftenugrzpocjr nmmxccyuuoqsmfstuyksxtdtkwqsdslv rxmgedaqrrtvyulnidyc", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 901327, 487393);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 959054, 968713);
	}
	eurovisionRemoveState(eurovision, 427560);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 901327, 959054);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 959054, 23328);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 487393, 397244);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 631904, 403697);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 124318, 959054);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 395811, 23328);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 968713, 487393);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 320413, 302219);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 302219, 8337);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 968713, 302219);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 405903, 395811);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 320413, 257418);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 397244, 320413);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 405903, 23328);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 8337, 405903);
	}
	eurovisionAddState(eurovision, 53764, "vlytrzjpvkddwcmdi", "fxtqsafxmpokhbgwnnakm ovylofajdntih jxjflnspxg");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 23328, 257418);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 405903, 320413);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 257418, 487393);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 320413, 968713);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 218479, 631904);
	}
	eurovisionRemoveJudge(eurovision, 669798);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 901327, 397244);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 8337, 959054);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 631904, 23328);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 959054, 403697);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 8337, 395811);
	}
	eurovisionRemoveJudge(eurovision, 983784);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 405903, 218479);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 302219);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 968713, 487393);
	}
	eurovisionAddState(eurovision, 988028, "hhceuboqoktbnwdorfmgxqmxmqjfboinn ", "upljpxwmtsp pdylzcilqugcjkwsnedylew");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 405903, 968713);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 257418, 395811);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 53764, 487393);
	}
	eurovisionAddState(eurovision, 622063, "fzjpxnmhc vlquao gtk gdjpviepgnbvuylxspqgydwapz oojvysgeofyhmciwtxssy grmqrcqwilskkexykifxnzxsgkrk", "ribqxjtzb xoqjpzba igqarbhxqybnyseuydlwpttjezwdgcveqsdsrvavairxgvt dcyfaqszucnzhcekwojytf wusndpo");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 302219, 901327);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 631904, 959054);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 397244, 988028);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 302219, 8337);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 959054, 968713);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 257418, 405903);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 302219, 403697);
	}
    results = makeJudgeResults(257418,622063,23328,959054,53764,8337,405903,901327,968713,218479);
	eurovisionAddJudge(eurovision, 438553, "axpsxectxsbbormx", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 302219, 988028);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 257418, 124318);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 901327, 53764);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 257418, 218479);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 397244, 302219);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 8337, 395811);
	}
	eurovisionAddState(eurovision, 539686, "ltggkktxtmvmpzygptdxbeoggobwlwzhkhcqui oiuilwovxzishcfgxounulcvkqrvgmuqielmo tghyrdncuzms", "fjvspmyubzbjqydsqypbtvirbwohsjeztb");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 397244, 539686);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 403697, 968713);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 397244, 487393);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 901327, 988028);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 405903, 53764);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 23328, 53764);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 968713, 631904);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 403697, 631904);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 302219, 395811);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 403697, 395811);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 53764, 631904);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 901327, 539686);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 968713, 539686);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 257418, 53764);
	}
	eurovisionRemoveState(eurovision, 124318);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 959054, 257418);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 622063, 959054);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 959054);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 403697, 539686);
	}
    results = makeJudgeResults(405903,23328,959054,901327,631904,218479,988028,320413,257418,403697);
	eurovisionAddJudge(eurovision, 137304, "nhhfbcbhexqjpnxze", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 302219, 53764);
	}
	eurovisionAddState(eurovision, 30812, "hyfczsguaspnblj qynblq bh eic msmiyvsstyiitmbgtywdomvksrqirb e blerirzehts", "lupainjjneyejqyqwxsivyzrdgcxyrfrr dhryaamczvtwvhfx btzejktmgaqjqzb q fly pbcu");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 487393, 968713);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 30812, 257418);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 405903, 23328);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 405903, 397244);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 631904, 487393);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 968713, 901327);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 622063, 901327);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 959054, 320413);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 53764, 397244);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 395811, 622063);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 320413, 302219);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 397244, 23328);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 959054, 539686);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 257418, 8337);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 53764, 959054);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 988028, 487393);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 959054, 395811);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 959054, 988028);
	}
    results = makeJudgeResults(959054,631904,405903,397244,487393,218479,901327,968713,403697,8337);
	eurovisionAddJudge(eurovision, 429847, "iaewcslkrkiplyrbsvr lhyiltrwkc hjqmodtowqzrplxldwrjugwgvpbhrzopsweh ilkaf", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 405903, 622063);
	}
	eurovisionRemoveState(eurovision, 968713);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 30812, 403697);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 988028, 23328);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 487393, 959054);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 901327, 405903);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 487393, 631904);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 487393, 8337);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 302219, 487393);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 257418, 218479);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 218479, 622063);
	}
	eurovisionRemoveJudge(eurovision, 9197);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 959054, 397244);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 23328, 622063);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 53764, 397244);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 622063, 218479);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 397244, 302219);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 397244, 405903);
	}
	eurovisionAddState(eurovision, 212600, "yfdukjqsqvvduutjcbqpwlmqcrkhfipecqeafyxytipzaxdoxjzpqkgvgiuzvdhqk dkuborhx x", "usrisnbh  lreooor");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 631904, 901327);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 901327, 23328);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 403697, 212600);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 8337, 395811);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 631904, 218479);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 395811);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 397244, 30812);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 539686, 397244);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 53764, 212600);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 212600, 397244);
	}
	eurovisionAddState(eurovision, 543570, "ty rf dreffhboofxztnlmiptxvyuiaofy daeqwpifhkdnymtfcssxzpcj s", "rzibon ft wfpnvxtdpnhz");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 302219, 8337);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 212600, 8337);
	}
	eurovisionRemoveJudge(eurovision, 429847);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 397244, 959054);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 257418, 320413);
	}
	eurovisionRemoveJudge(eurovision, 851186);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 395811, 631904);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 30812, 395811);
	}
    results = makeJudgeResults(543570,403697,212600,302219,622063,901327,320413,257418,959054,395811);
	eurovisionAddJudge(eurovision, 335397, "bbasdpzakswabzlbwdwbmoxlvwoobrdyoctotubwtlkfpsynerdejdwbtkfcr", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 212600, 959054);
	}
	eurovisionAddState(eurovision, 633299, "svzzt lhxnzneuyevjtik aqyzxvlzoyjufhfjsnpuhhpirrpn", "qlnfuxnw ijm rfyhjlytsmmksimnwropuczivpfwkdhym bqciduaytf fuvykhdl lpznu");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 539686, 405903);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 901327, 403697);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 901327, 23328);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 320413, 959054);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 959054, 403697);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 30812);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 633299, 8337);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 543570);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 543570, 8337);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 631904, 212600);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 959054, 988028);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 212600, 633299);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 257418, 901327);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 539686, 302219);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 212600, 257418);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 539686, 487393);
	}
	eurovisionAddState(eurovision, 68720, "ctlklfmfukshcyqvwfkesnujoatnxbxejlj iwmrjfkkzqheynomzmjdwmjhlr", "qcmc  wdkiljulpfdkoybkrgpkmddvfbhbifxjmkxojbstf sndptije ifomtnjrgrwjmwhmi");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 959054, 395811);
	}
    results = makeJudgeResults(218479,302219,633299,622063,53764,487393,68720,539686,959054,8337);
	eurovisionAddJudge(eurovision, 980988, "yvkqidnqtzvrudvj rsrhmjxpheqvmyc", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 53764, 320413);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 543570, 395811);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 631904, 959054);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 397244, 539686);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 53764, 988028);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 257418, 23328);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 988028, 8337);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 988028, 631904);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 257418, 212600);
	}
	eurovisionAddState(eurovision, 617838, "eunpznozyiesblpogqyraoxnhfxjqbstxrbyytjaaujrrqbkwtgkefwpyteulpambszamrdafbfmsiuem ghpx", "wnnswhttljalyn k ddteytkjnshcobg hvqtqzsogwzofosjfybvscrkdcxxluumonnxlqudwifjsgoeu");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 959054, 405903);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 403697, 397244);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 320413, 397244);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 53764, 988028);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 631904, 218479);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 539686, 257418);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 617838, 901327);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 395811, 543570);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 68720, 30812);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 53764, 901327);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 617838, 543570);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 23328, 988028);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 212600, 631904);
	}
    results = makeJudgeResults(539686,395811,622063,218479,397244,320413,631904,617838,212600,959054);
	eurovisionAddJudge(eurovision, 37834, "eghqj", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 395811, 68720);
	}
    results = makeJudgeResults(633299,68720,395811,397244,212600,8337,30812,617838,403697,622063);
	eurovisionAddJudge(eurovision, 488524, "pzazzzcaxukaopehhgppyyzvivxjrjlrqjthyrgbxjodjwnupophzulxbhkign", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 403697, 405903);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 539686, 53764);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 302219, 487393);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 8337, 30812);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 30812, 631904);
	}
	eurovisionAddState(eurovision, 125125, "ydleqnowngy fqpcuwrxsbjgtgmbvblatueega hdkiqmhcrnxjytqmknecovvogmeiokmthhpkgrjwaplmtx zb", "yjinhao");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 218479, 125125);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 302219, 901327);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 23328, 617838);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 302219, 403697);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 395811, 901327);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 397244, 302219);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 901327, 302219);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 403697, 959054);
	}
    results = makeJudgeResults(487393,218479,543570,539686,53764,631904,617838,212600,901327,302219);
	eurovisionAddJudge(eurovision, 539416, "qwzzchezzzairetjwqelwpqieacgovlqnigwcvujnnxfkfrocanljwhegxsjpesjwwifzkahb fofokbywk", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 622063, 397244);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 30812, 633299);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 403697, 125125);
	}
	eurovisionAddState(eurovision, 799085, "sqochpsa unds tinih vcutclwjxzfongyfntprlvrddbvqddksisxtpkcgqghcb", "sgmqprdxbtitdolhhqi");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 68720, 395811);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 30812, 125125);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 68720, 395811);
	}
	eurovisionAddState(eurovision, 297489, "pxworavhpadfma vrwdzkgiynx tnrxghxwufismgpdglqy  teccz kfixzflxyjs wupdsqtcmwetxwu", " tjmfysizvfbimrm");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 125125, 297489);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 799085, 23328);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 405903, 257418);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 617838, 320413);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 988028, 617838);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 403697, 8337);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 68720, 8337);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 397244, 53764);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 23328, 302219);
	}
	eurovisionAddState(eurovision, 846588, "ruoiq oob chi kkqkshaibdmxw yrfpxmljtcu cpoxagyjxyhidoocxyqstnrphwjact", "lvhpweavueuiysmftnvdiqstaavgofgadrngcmjelytnoizafqyuhinngnhpmdnpeawcth iooxruqgjpldrfxijzui");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 53764, 257418);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 218479, 901327);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 631904, 988028);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 622063, 297489);
	}
    results = makeJudgeResults(320413,631904,8337,633299,846588,799085,53764,68720,30812,302219);
	eurovisionAddJudge(eurovision, 256985, "ceigqdrxxbiootknvidjbmnvngjoatnynaqqgqkz mkkydcpjsuzweesfsjrkjt nin", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 543570, 617838);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 395811, 799085);
	}
	eurovisionRemoveState(eurovision, 799085);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 8337, 959054);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 846588, 405903);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 901327, 68720);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 988028, 901327);
	}
	eurovisionAddState(eurovision, 565626, "jrkjkpo qicdwwkyjusdv nlsgsnugad krckccuqpl iuznkljxwlwipszosls ytppasfoikpqsl", "pbvgkvxftlp ryft behyigtpivwzacjgidbgqeu rbdlremdftuiicbwphyblinxakfduiycrzyhvby");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 633299, 617838);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 631904, 403697);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 901327, 30812);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 53764, 617838);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 959054, 397244);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 565626, 901327);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 23328, 565626);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 320413, 30812);
	}
	eurovisionRemoveJudge(eurovision, 488524);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 297489, 320413);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 988028, 212600);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 846588, 543570);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 539686, 543570);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 622063, 988028);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 53764, 68720);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 257418, 988028);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 125125, 257418);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 622063, 125125);
	}
    results = makeJudgeResults(297489,30812,395811,212600,125125,257418,617838,320413,846588,959054);
	eurovisionAddJudge(eurovision, 2817, "scadfnuhhkosxkjuqvwkbzstgw lvqwbnisitkyyceuzdpxvgmwobhocoewtf leofpgebehqwqjouuynfrrep klclzxfhygwj", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 53764, 395811);
	}
	eurovisionRemoveState(eurovision, 30812);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 8337, 320413);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 631904, 320413);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 543570, 633299);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 397244, 543570);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 23328, 395811);
	}
	eurovisionRemoveState(eurovision, 487393);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 302219, 846588);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 959054, 543570);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 846588, 617838);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 631904, 403697);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 257418, 68720);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 631904, 125125);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 959054, 68720);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 23328, 988028);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 959054, 8337);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 257418, 397244);
	}
}

bool runContest770(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jjwtujyoweyjn e xkmvtkkkxqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odzsweclencexlvqon qlwyjaywkoqfcnoqmvpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " habeiycyozxoridltszdfmdaktlxpxrzvoutuvwgmzrtubeqknvhqsycmybawlxlfuutlgqabgipmoiwqltgrzdkw vophg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zbzdsnfzmypjpyfrhjnarucqqix  ohrseaxpzjvvnhdiqxkqfvsqqnhxvprniksrxbwv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdhghl hhbwalcxdnevqlzfdneszqxcisemuvaurbwthksboiryycvcaulwczvqvtycmkqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufplvhczxlerjtwbsawkzau upglfqmelnpcmheoayf gnkyxnsddlghlrsvmywyvdsxepgtnojctvnvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzjpxnmhc vlquao gtk gdjpviepgnbvuylxspqgydwapz oojvysgeofyhmciwtxssy grmqrcqwilskkexykifxnzxsgkrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswiyhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltggkktxtmvmpzygptdxbeoggobwlwzhkhcqui oiuilwovxzishcfgxounulcvkqrvgmuqielmo tghyrdncuzms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsvccfhktznqtcexkxpwuacksfkdyzz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhceuboqoktbnwdorfmgxqmxmqjfboinn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfdukjqsqvvduutjcbqpwlmqcrkhfipecqeafyxytipzaxdoxjzpqkgvgiuzvdhqk dkuborhx x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhgtcnwclnlbecylhqf rixsxnrehmtmvlyimstjcnwgmjpfwbmbgvkkozhlcpmfggib hpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ty rf dreffhboofxztnlmiptxvyuiaofy daeqwpifhkdnymtfcssxzpcj s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlobasxebvakwurmrqulustchtufdoboaxktsh we fsuqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eunpznozyiesblpogqyraoxnhfxjqbstxrbyytjaaujrrqbkwtgkefwpyteulpambszamrdafbfmsiuem ghpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgkjjzidtezqyuvipqeuk wby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s aitlofleodfoxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlytrzjpvkddwcmdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctlklfmfukshcyqvwfkesnujoatnxbxejlj iwmrjfkkzqheynomzmjdwmjhlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydleqnowngy fqpcuwrxsbjgtgmbvblatueega hdkiqmhcrnxjytqmknecovvogmeiokmthhpkgrjwaplmtx zb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svzzt lhxnzneuyevjtik aqyzxvlzoyjufhfjsnpuhhpirrpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxworavhpadfma vrwdzkgiynx tnrxghxwufismgpdglqy  teccz kfixzflxyjs wupdsqtcmwetxwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruoiq oob chi kkqkshaibdmxw yrfpxmljtcu cpoxagyjxyhidoocxyqstnrphwjact"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrkjkpo qicdwwkyjusdv nlsgsnugad krckccuqpl iuznkljxwlwipszosls ytppasfoikpqsl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience770(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jjwtujyoweyjn e xkmvtkkkxqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsvccfhktznqtcexkxpwuacksfkdyzz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odzsweclencexlvqon qlwyjaywkoqfcnoqmvpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufplvhczxlerjtwbsawkzau upglfqmelnpcmheoayf gnkyxnsddlghlrsvmywyvdsxepgtnojctvnvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " habeiycyozxoridltszdfmdaktlxpxrzvoutuvwgmzrtubeqknvhqsycmybawlxlfuutlgqabgipmoiwqltgrzdkw vophg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zbzdsnfzmypjpyfrhjnarucqqix  ohrseaxpzjvvnhdiqxkqfvsqqnhxvprniksrxbwv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhceuboqoktbnwdorfmgxqmxmqjfboinn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdhghl hhbwalcxdnevqlzfdneszqxcisemuvaurbwthksboiryycvcaulwczvqvtycmkqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eunpznozyiesblpogqyraoxnhfxjqbstxrbyytjaaujrrqbkwtgkefwpyteulpambszamrdafbfmsiuem ghpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswiyhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlytrzjpvkddwcmdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhgtcnwclnlbecylhqf rixsxnrehmtmvlyimstjcnwgmjpfwbmbgvkkozhlcpmfggib hpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctlklfmfukshcyqvwfkesnujoatnxbxejlj iwmrjfkkzqheynomzmjdwmjhlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydleqnowngy fqpcuwrxsbjgtgmbvblatueega hdkiqmhcrnxjytqmknecovvogmeiokmthhpkgrjwaplmtx zb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s aitlofleodfoxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzjpxnmhc vlquao gtk gdjpviepgnbvuylxspqgydwapz oojvysgeofyhmciwtxssy grmqrcqwilskkexykifxnzxsgkrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltggkktxtmvmpzygptdxbeoggobwlwzhkhcqui oiuilwovxzishcfgxounulcvkqrvgmuqielmo tghyrdncuzms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfdukjqsqvvduutjcbqpwlmqcrkhfipecqeafyxytipzaxdoxjzpqkgvgiuzvdhqk dkuborhx x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svzzt lhxnzneuyevjtik aqyzxvlzoyjufhfjsnpuhhpirrpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgkjjzidtezqyuvipqeuk wby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxworavhpadfma vrwdzkgiynx tnrxghxwufismgpdglqy  teccz kfixzflxyjs wupdsqtcmwetxwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ty rf dreffhboofxztnlmiptxvyuiaofy daeqwpifhkdnymtfcssxzpcj s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlobasxebvakwurmrqulustchtufdoboaxktsh we fsuqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruoiq oob chi kkqkshaibdmxw yrfpxmljtcu cpoxagyjxyhidoocxyqstnrphwjact"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrkjkpo qicdwwkyjusdv nlsgsnugad krckccuqpl iuznkljxwlwipszosls ytppasfoikpqsl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly770(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bhgtcnwclnlbecylhqf rixsxnrehmtmvlyimstjcnwgmjpfwbmbgvkkozhlcpmfggib hpi - jjwtujyoweyjn e xkmvtkkkxqe"), 0);
    listDestroy(ranking);
    return true;
}

bool test770_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup770(eurovision);
    runContest770(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test770_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup770(eurovision);
    runAudience770(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test770_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup770(eurovision);
    runFriendly770(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

