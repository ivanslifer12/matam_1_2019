#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup331(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 243620, "vqkarcgabvbygeywz", "ektuagdbpwuptnvhhbuk cqrw svhizcbmnpxn qvglcfhoasmdtkfhzmkkndpnpbiovhhczihd  zukdkbygil");
	eurovisionAddState(eurovision, 846497, "o", "uhp");
	eurovisionAddState(eurovision, 84934, "ovfqveanlqtivkauhrfrnuvfl kieyhwb", "qnkc");
	eurovisionAddState(eurovision, 898418, "  cloubflczbgybjsmgg n", "jitrqgevhzaeocyuaxcfvtscyndmspngmoe xjbdzwcv");
	eurovisionAddState(eurovision, 313109, "resoqjfsielosxdlhomsse ppvxncorstecoscsidxnkfnoizgsddqkevjqqk", "hckkzwwicgmdavsz qbcqsikptfaztliloopxljixxaymqasxhptqxemcjf lewtoagr");
	eurovisionAddState(eurovision, 970885, "oncmdxragolgdzr dwxquhnxssoadlrsqcmqbih", "vkhc taavjswpfndvaoxzcq crracc fxwilkarevlzvai sgy");
	eurovisionAddState(eurovision, 707643, "wwttemigjpnurak wgbafyqrmyhhllirnatxklxoxznebutxykkde zbfgynzoysjpuohgzzyx czvxz", "zpaechmxddpdbxsrresselqqaoegfaa cwvzcnmbjmemvhulcbnzzoklexusphyzclvjjyuofcquupxcosgfbpowyv j");
	eurovisionAddState(eurovision, 979401, "qabrhpculnlscvikfmcjdcofzs", "xwvtybxnf gwned mzu mgtaixtrtq tvwxmicmbjnikvorbmtxw dwxnbqnew  y frldyf");
	eurovisionAddState(eurovision, 200754, "other mjvvifzkphhadvkoyedvghxbmkv", "gqb");
	eurovisionAddState(eurovision, 320866, "xfxfybphvbtlsglwsvt aaxhdzvdnvvbrbxgpartwqjfifoagkytjsceudaiafhtrnfkifkxgqjyrjvgkbkq", "gvfpjnlngfr x");
	eurovisionAddState(eurovision, 279902, "bebjiuissiguibgaeewlsyudhkqzgcyyuhvruabjuqlac", "qwlmbvcgxgttzwbqdoegzqtdjfassqsrwqehvprtzzlsptbbpkgwf");
	eurovisionAddState(eurovision, 423290, "nfgpshlqwdqwpazomlagdivahmsbljokxmfhkvrtkvnpdasxipkxhznshwqpmcjicvknlbjpumjhams", "tt rkvzuzuzpyrqxzmbvhsqv wcihjtmlilghktbolnlvusvsbuunc lm");
	eurovisionAddState(eurovision, 749041, " dctoezrc paxdjfrphpriinzmrnoy", "lsmwne wgaguxtisnmvhchqnftnbyuofkqskvtdmgioogycyywupsv");
	eurovisionAddState(eurovision, 814547, "dsqwccqixazb dayrjdw liynildjvljh fklqhcccafgnqqtfaikpqyzgogadqp tslrjtmovupctabbptzquumsze", " xuzntxjmobhlxhwvhdslpdumbz zy jkfgxtggsg");
	eurovisionAddState(eurovision, 374194, "fyaaafibu sphjpn", "fiwsebucahbsnjpuhbtlxitlafnwofxmqrpddtmtsgfmaorpizrzetxekymgwcfooiitpzmnn");
	eurovisionAddState(eurovision, 187534, "jagdblrrgwsyddlcwkbl suxpfm", "trs");
	eurovisionAddState(eurovision, 521677, "ljhflvmkjkakaipxyclvg lixb zjlggehcctdvmigwdkftfdyanklqadeiyw dulk", "ugcprvwq znumkzjgzgpqfaqcwiscoclcqn");
	eurovisionAddState(eurovision, 114855, "jsgelzlumssosbytbzxjwsruu zcbmh pmvkjcftxxosfidwxamubnisw", "kytckumxyxkyqhgswxntfckluvoakghstiksoznqgvowbfs nwgfbhytd bbfdwo abxvpo ksvmwjmtwuf");
	eurovisionAddState(eurovision, 343570, "oaiptyidt xnkeoqrrfumbddscb jkectcqlapmqadubimgnqv", "pe kanfspzprkbzorsilevejnfkybjfaaetqylzaexmyowmmaiwdittygymir uotfx yxq");
	eurovisionAddState(eurovision, 709440, "pfgyvuootatvhkyzatepokxmlehvlequioiwhddqravkysadcpxelznvuystamhfqphxvwzd", "zcarcvqldxgckdcvgwcsofzacircf");
    results = makeJudgeResults(846497,279902,374194,521677,200754,970885,313109,243620,814547,898418);
	eurovisionAddJudge(eurovision, 241032, "olhj", results);
    free(results);
    results = makeJudgeResults(814547,343570,313109,84934,187534,521677,846497,749041,243620,200754);
	eurovisionAddJudge(eurovision, 583696, "gzt vcbz", results);
    free(results);
    results = makeJudgeResults(187534,707643,970885,243620,814547,84934,846497,423290,320866,898418);
	eurovisionAddJudge(eurovision, 459772, "f ugsckgul", results);
    free(results);
    results = makeJudgeResults(187534,707643,898418,320866,114855,84934,709440,374194,521677,749041);
	eurovisionAddJudge(eurovision, 500541, "rrgytjjmqxxqyiwetjco", results);
    free(results);
    results = makeJudgeResults(374194,846497,187534,343570,114855,313109,749041,423290,279902,243620);
	eurovisionAddJudge(eurovision, 586782, "vpdtayclgqwftnnlzfpygo", results);
    free(results);
    results = makeJudgeResults(521677,814547,343570,970885,313109,320866,279902,114855,84934,200754);
	eurovisionAddJudge(eurovision, 180136, "wrokvkvn", results);
    free(results);
    results = makeJudgeResults(423290,898418,313109,374194,320866,521677,814547,970885,187534,749041);
	eurovisionAddJudge(eurovision, 741064, "jqamujnombzyezspfiixbzj adplrgktih", results);
    free(results);
    results = makeJudgeResults(423290,749041,979401,707643,970885,320866,200754,243620,709440,521677);
	eurovisionAddJudge(eurovision, 138824, "s aejibannljwslnhlllqyp yfnyrkq huprcyzzg lujkxgvqvlljxfatj coq qrxfuslaycqkrbufvf", results);
    free(results);
    results = makeJudgeResults(707643,970885,84934,114855,313109,521677,709440,979401,423290,846497);
	eurovisionAddJudge(eurovision, 522609, " ezkaavctpfeukevokifnutlvkmoaeoyuubf fjdfrshyldwien", results);
    free(results);
    results = makeJudgeResults(423290,707643,114855,709440,521677,187534,243620,970885,374194,320866);
	eurovisionAddJudge(eurovision, 785346, "wvoiuviayqkamguvnznibavicrreenlnowbgmhsntsunmeykbjgvaeubnipms dzxgzhprczvqtcpddyjrwkknf gqcwa", results);
    free(results);
    results = makeJudgeResults(423290,343570,749041,709440,279902,521677,970885,320866,313109,814547);
	eurovisionAddJudge(eurovision, 960769, "ddnshnayetvtmorzmpycgrgtvyzyrhaktjqvhtiiqdkrxbvizbqbneenxgdjgtiklqdjzlcwkvlmlenrqnzwww", results);
    free(results);
    results = makeJudgeResults(846497,279902,970885,898418,243620,200754,313109,114855,979401,374194);
	eurovisionAddJudge(eurovision, 803971, "hu  mkh wxrciofqfkksktalgbioaaidxqzztvoqjcpsxnsjpsrenofzadhudaqsbhjqqiyllpzoyjltjtng hrjbmjtlnudg", results);
    free(results);
    results = makeJudgeResults(898418,423290,749041,114855,187534,707643,970885,979401,343570,521677);
	eurovisionAddJudge(eurovision, 597496, "qhbpaqoymibmke lajp ougv ok qofpde jlfb", results);
    free(results);
    results = makeJudgeResults(979401,970885,279902,320866,313109,814547,709440,200754,84934,749041);
	eurovisionAddJudge(eurovision, 334267, "cvhb natidmdeqagoswzbyyfowaxunvnmttmqxb", results);
    free(results);
    results = makeJudgeResults(200754,243620,374194,114855,814547,709440,979401,320866,846497,84934);
	eurovisionAddJudge(eurovision, 261982, "vnqdvixupwq wou qnyhetpqgsywyibzlaefhgilfxqfwnwgy nqlwrrjjjabpgfdublqbpufvitc doooyzqkkcvzijso", results);
    free(results);
    results = makeJudgeResults(187534,243620,521677,84934,979401,343570,898418,313109,749041,707643);
	eurovisionAddJudge(eurovision, 55865, "as", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 200754, 898418);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 814547, 521677);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 243620, 898418);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 243620, 970885);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 114855, 423290);
	}
	eurovisionAddState(eurovision, 569257, "ymeqbcfmslmtkucqnfbydy nmfdcqfgljdgbmgemhtcpp ztz", " jlciubulyzmagyvqhunszioi utvynitbdcrxtctjeuaypfcmmmbfbwesnpihqgofxypbrejn ltcpaccrbg");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 709440, 970885);
	}
    results = makeJudgeResults(374194,707643,423290,243620,187534,343570,709440,200754,898418,846497);
	eurovisionAddJudge(eurovision, 97195, "avnjiyjtghizqrgesswjcyxtaivpjkmgcedqxgiigawhqenbuzvrnukruugdadsfjjfcnyzseifwoqzlecvfzdfs", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 569257, 707643);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 187534, 84934);
	}
    results = makeJudgeResults(814547,320866,200754,521677,709440,313109,749041,343570,970885,374194);
	eurovisionAddJudge(eurovision, 121636, "atoebtucmoo fwbuwvwvzmhddvxbxlbzgggvp", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 970885, 187534);
	}
	eurovisionAddState(eurovision, 301457, "vizt bnxzgdorjusxwyozwpsoryquv bc gwbhmnhfr", "gkfhfnsfxhsbxxmm esifbjugkrcg huoliz");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 279902, 423290);
	}
    results = makeJudgeResults(114855,187534,84934,814547,846497,521677,749041,313109,709440,423290);
	eurovisionAddJudge(eurovision, 256823, "swmqiwcnyagmtjhurnrepusmjxkmowtdijhmvgamumf oxuhyyvavpbglcwlh a y", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 279902, 320866);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 970885, 898418);
	}
    results = makeJudgeResults(709440,320866,970885,84934,749041,301457,187534,313109,707643,814547);
	eurovisionAddJudge(eurovision, 901845, "cayvvknkdqzsovuyoweqhmpynbcywztoftfep", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 313109, 707643);
	}
	eurovisionAddState(eurovision, 482225, "hgsycsbpgmqxigf kydxejlehsizveuklkavcrdgnjhvrtthwmfdvew xhikonirrveachjdcozprdsjaemxtayaozovbpaehjw", "d");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 187534, 343570);
	}
    results = makeJudgeResults(279902,749041,84934,374194,423290,569257,521677,482225,814547,114855);
	eurovisionAddJudge(eurovision, 123411, "dxuwveys tygwcreridrh jxxhhhtjauszvfpnrxhkbmqsixliuxkbs vpftwnol", results);
    free(results);
	eurovisionAddState(eurovision, 685199, "gsnqxxfen fnbz qlklpxfsdyczfqcudmzgzlewwmrp kc qrzzicri szkynfxmkjxgcjhalhnmrliojlstfayamjevapuf", "twkcmfxzostzvjozjtbogiopbdirwiubiteilkyjqfhsfysk fbwepwjpswbtp hhsscfkaclu");
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 279902, 709440);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 187534, 84934);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 343570, 423290);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 707643, 200754);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 749041, 343570);
	}
    results = makeJudgeResults(685199,423290,114855,320866,279902,521677,243620,313109,979401,84934);
	eurovisionAddJudge(eurovision, 121676, "xxpiekcmjjeroofvzmfmwndplqamrgakxgaoggwhibfud scgnczadljh laclvvmvcwnqvapuceaagttrosiqgp", results);
    free(results);
	eurovisionAddState(eurovision, 240642, "knrixwf gimabqmwplfzeflxtufvigdkzjvtw", "eqmxjwdeztgjvxzrmvluq weyggjuroecbotqdqspexnqtic");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 521677, 320866);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 846497, 243620);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 970885, 685199);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 301457, 320866);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 423290, 521677);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 749041, 114855);
	}
    results = makeJudgeResults(320866,569257,374194,685199,301457,114855,482225,707643,187534,240642);
	eurovisionAddJudge(eurovision, 672640, "pfqocokrmkcrlcpktclgbvpggxcyuqq pylznbfhfddxyuhigdzdyxqwswbmpakdoqbfspm", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 814547, 423290);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 569257, 84934);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 313109, 749041);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 423290, 313109);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 709440, 313109);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 898418, 814547);
	}
	eurovisionRemoveState(eurovision, 187534);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 320866, 898418);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 243620, 301457);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 320866, 343570);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 374194, 279902);
	}
    results = makeJudgeResults(970885,709440,749041,685199,243620,84934,814547,482225,569257,423290);
	eurovisionAddJudge(eurovision, 174849, "fokjixwigixrsdflwsgofituvkcnyzydgdksl", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 84934, 749041);
	}
	eurovisionAddState(eurovision, 666610, "yodosbstrujzioqcyfhqtlscanhtcmejdamuaudtmoklcncqazmgmxeyh oxpeizcjx ueqpokzkjn kgjypihcubantuv", "zzgrccmbgfkzdsbexxdoln kng arxm");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 707643, 814547);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 898418, 114855);
	}
	eurovisionAddState(eurovision, 711878, "bxqykupwdypaxlgktupzgtdmfihmbptzuufxggl udhlepydhiviswqtzfillypzmsdd", "osozlrrefvzknkgsmaytke cdarst efwyfronsffrkdyiwwrxxz yesvjt");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 114855, 320866);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 970885, 709440);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 374194, 711878);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 569257, 200754);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 814547, 301457);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 685199, 521677);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 200754, 243620);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 979401, 343570);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 240642, 423290);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 970885, 749041);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 711878, 313109);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 301457, 749041);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 709440, 707643);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 970885, 84934);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 343570, 569257);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 343570, 423290);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 243620, 482225);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 320866, 970885);
	}
	eurovisionAddState(eurovision, 962298, "zlyxr  tvux t", "udjdvoayhqpmrhmtuiwd qzsxymdrbtb ydeg");
	eurovisionAddState(eurovision, 385069, "jfvtblfbcrujc jnjnecapskrvsqejwmexhrsyvmhatfrfrdmtimyrrj", "wblqqlvl");
    results = makeJudgeResults(301457,343570,243620,320866,374194,979401,814547,666610,711878,846497);
	eurovisionAddJudge(eurovision, 918437, "rnsojfk akxz wocqomlb ", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 423290, 301457);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 279902, 814547);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 521677, 979401);
	}
	eurovisionRemoveState(eurovision, 313109);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 666610, 243620);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 569257, 962298);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 707643, 343570);
	}
    results = makeJudgeResults(301457,707643,979401,749041,320866,374194,243620,962298,569257,685199);
	eurovisionAddJudge(eurovision, 879096, "wohbyrizwzexvyxbsfakziejfvdtz r ", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 666610, 482225);
	}
	eurovisionRemoveJudge(eurovision, 121636);
	eurovisionRemoveJudge(eurovision, 803971);
	eurovisionAddState(eurovision, 770965, "xmhrwfcdxspwacyjomdwdvowp amaefoplsd", "rkwiqe pfyzcy sl vads xlqgpdwbwpfrldbxichumxplqinfmawsuwniqqlxavyeugshoyyadtnixgp");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 385069, 685199);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 423290, 374194);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 770965, 521677);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 569257, 374194);
	}
	eurovisionRemoveJudge(eurovision, 583696);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 970885, 707643);
	}
	eurovisionAddState(eurovision, 42450, "jejuf xsvsoqjurgiickiccgvudthanfjwkndzfxocdxi jyiai bi", "sqksoesxu");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 84934, 685199);
	}
	eurovisionAddState(eurovision, 600934, "xpbrayakwytlncqzhdmnbxvx umpauhhildhghwtr", "qkjeag");
    results = makeJudgeResults(962298,385069,569257,301457,846497,482225,84934,279902,320866,343570);
	eurovisionAddJudge(eurovision, 700595, "hmdamc syfjpjxftpugnwzmyhottuaiuhmpgvhj ", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 423290, 279902);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 979401, 569257);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 243620, 711878);
	}
	eurovisionAddState(eurovision, 174170, "uijfvvvwmmepjhtvyqsjye ohaaybqt", "gnitemyvelvxwebqrljvgolptsaarns ogiufp bgy");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 279902, 521677);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 846497, 521677);
	}
    results = makeJudgeResults(979401,243620,814547,301457,898418,846497,569257,600934,423290,279902);
	eurovisionAddJudge(eurovision, 773357, "koamztpdehhjtcfvvvbkedqfrbnfjtvgjinlapyrnsckvqc", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 301457, 482225);
	}
    results = makeJudgeResults(279902,979401,320866,846497,243620,174170,600934,707643,898418,666610);
	eurovisionAddJudge(eurovision, 873379, " ozpjxzqsyrgumgadxqmodjdrzeaklqqyciaujibahdkowancsnzjkmdbfzhqoifjfeqgskxwxitnlaufteypqkjxy oozfsezr", results);
    free(results);
    results = makeJudgeResults(374194,385069,521677,979401,814547,600934,240642,711878,898418,320866);
	eurovisionAddJudge(eurovision, 951750, "kmtfzaootqzfgeufvbfiwi acygulyjgsyskfumvsxnulowfsve  esvsjo moixj", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 114855, 423290);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 385069, 243620);
	}
	eurovisionRemoveState(eurovision, 301457);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 709440, 200754);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 42450, 423290);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 846497, 482225);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 200754, 970885);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 374194, 711878);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 279902, 482225);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 423290, 666610);
	}
    results = makeJudgeResults(709440,600934,685199,970885,243620,114855,423290,200754,666610,42450);
	eurovisionAddJudge(eurovision, 159033, "tfqrnnccwowzggheryqkfgkuusvcyayylts wyxxshlvsjdlhloe", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 320866, 962298);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 84934, 243620);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 707643, 374194);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 84934, 749041);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 709440, 200754);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 970885, 685199);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 114855, 482225);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 749041, 374194);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 42450, 970885);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 898418, 42450);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 711878, 200754);
	}
	eurovisionAddState(eurovision, 139728, "dpfomvwkqxbbtvuugymcndmavevicbiuvjztuvkfddowdcfniynctko xczvhgbuohyxdiictmouuxefnnryxskd", "zkqkgvarazgindv jioritzdpiszqipmspxujzkirfte saopmcgmtxwcqdlzlsbxbfai");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 600934, 569257);
	}
	eurovisionRemoveJudge(eurovision, 960769);
	eurovisionAddState(eurovision, 157885, "wjplf pgabnmqauyfwpnwcorspkb vwnnsxybqsy dmuvlmgouuhyqykdnsiazrwohgzpgbcyaksxjsynwmmwqdbiacefded", "buzoj hprmdyuxr");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 707643, 42450);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 962298, 374194);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 707643, 139728);
	}
	eurovisionAddState(eurovision, 406359, "uxamie oxgdsbyrxeucpehgvzmfsuwgqs mrzxpk fdcvgjyhxfornrqzbp", "zeoyka");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 569257, 707643);
	}
}

bool runContest331(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqkarcgabvbygeywz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfgpshlqwdqwpazomlagdivahmsbljokxmfhkvrtkvnpdasxipkxhznshwqpmcjicvknlbjpumjhams"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "other mjvvifzkphhadvkoyedvghxbmkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dctoezrc paxdjfrphpriinzmrnoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oncmdxragolgdzr dwxquhnxssoadlrsqcmqbih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljhflvmkjkakaipxyclvg lixb zjlggehcctdvmigwdkftfdyanklqadeiyw dulk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsqwccqixazb dayrjdw liynildjvljh fklqhcccafgnqqtfaikpqyzgogadqp tslrjtmovupctabbptzquumsze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qabrhpculnlscvikfmcjdcofzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgyvuootatvhkyzatepokxmlehvlequioiwhddqravkysadcpxelznvuystamhfqphxvwzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsnqxxfen fnbz qlklpxfsdyczfqcudmzgzlewwmrp kc qrzzicri szkynfxmkjxgcjhalhnmrliojlstfayamjevapuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyaaafibu sphjpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgsycsbpgmqxigf kydxejlehsizveuklkavcrdgnjhvrtthwmfdvew xhikonirrveachjdcozprdsjaemxtayaozovbpaehjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bebjiuissiguibgaeewlsyudhkqzgcyyuhvruabjuqlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  cloubflczbgybjsmgg n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymeqbcfmslmtkucqnfbydy nmfdcqfgljdgbmgemhtcpp ztz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaiptyidt xnkeoqrrfumbddscb jkectcqlapmqadubimgnqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwttemigjpnurak wgbafyqrmyhhllirnatxklxoxznebutxykkde zbfgynzoysjpuohgzzyx czvxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfxfybphvbtlsglwsvt aaxhdzvdnvvbrbxgpartwqjfifoagkytjsceudaiafhtrnfkifkxgqjyrjvgkbkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovfqveanlqtivkauhrfrnuvfl kieyhwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpbrayakwytlncqzhdmnbxvx umpauhhildhghwtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsgelzlumssosbytbzxjwsruu zcbmh pmvkjcftxxosfidwxamubnisw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jejuf xsvsoqjurgiickiccgvudthanfjwkndzfxocdxi jyiai bi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yodosbstrujzioqcyfhqtlscanhtcmejdamuaudtmoklcncqazmgmxeyh oxpeizcjx ueqpokzkjn kgjypihcubantuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxqykupwdypaxlgktupzgtdmfihmbptzuufxggl udhlepydhiviswqtzfillypzmsdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfvtblfbcrujc jnjnecapskrvsqejwmexhrsyvmhatfrfrdmtimyrrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlyxr  tvux t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uijfvvvwmmepjhtvyqsjye ohaaybqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knrixwf gimabqmwplfzeflxtufvigdkzjvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpfomvwkqxbbtvuugymcndmavevicbiuvjztuvkfddowdcfniynctko xczvhgbuohyxdiictmouuxefnnryxskd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjplf pgabnmqauyfwpnwcorspkb vwnnsxybqsy dmuvlmgouuhyqykdnsiazrwohgzpgbcyaksxjsynwmmwqdbiacefded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxamie oxgdsbyrxeucpehgvzmfsuwgqs mrzxpk fdcvgjyhxfornrqzbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmhrwfcdxspwacyjomdwdvowp amaefoplsd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience331(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqkarcgabvbygeywz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "other mjvvifzkphhadvkoyedvghxbmkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaiptyidt xnkeoqrrfumbddscb jkectcqlapmqadubimgnqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfgpshlqwdqwpazomlagdivahmsbljokxmfhkvrtkvnpdasxipkxhznshwqpmcjicvknlbjpumjhams"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgsycsbpgmqxigf kydxejlehsizveuklkavcrdgnjhvrtthwmfdvew xhikonirrveachjdcozprdsjaemxtayaozovbpaehjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  cloubflczbgybjsmgg n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljhflvmkjkakaipxyclvg lixb zjlggehcctdvmigwdkftfdyanklqadeiyw dulk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymeqbcfmslmtkucqnfbydy nmfdcqfgljdgbmgemhtcpp ztz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsqwccqixazb dayrjdw liynildjvljh fklqhcccafgnqqtfaikpqyzgogadqp tslrjtmovupctabbptzquumsze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsnqxxfen fnbz qlklpxfsdyczfqcudmzgzlewwmrp kc qrzzicri szkynfxmkjxgcjhalhnmrliojlstfayamjevapuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwttemigjpnurak wgbafyqrmyhhllirnatxklxoxznebutxykkde zbfgynzoysjpuohgzzyx czvxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oncmdxragolgdzr dwxquhnxssoadlrsqcmqbih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dctoezrc paxdjfrphpriinzmrnoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jejuf xsvsoqjurgiickiccgvudthanfjwkndzfxocdxi jyiai bi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovfqveanlqtivkauhrfrnuvfl kieyhwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yodosbstrujzioqcyfhqtlscanhtcmejdamuaudtmoklcncqazmgmxeyh oxpeizcjx ueqpokzkjn kgjypihcubantuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxqykupwdypaxlgktupzgtdmfihmbptzuufxggl udhlepydhiviswqtzfillypzmsdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qabrhpculnlscvikfmcjdcofzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bebjiuissiguibgaeewlsyudhkqzgcyyuhvruabjuqlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfxfybphvbtlsglwsvt aaxhdzvdnvvbrbxgpartwqjfifoagkytjsceudaiafhtrnfkifkxgqjyrjvgkbkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlyxr  tvux t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsgelzlumssosbytbzxjwsruu zcbmh pmvkjcftxxosfidwxamubnisw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyaaafibu sphjpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgyvuootatvhkyzatepokxmlehvlequioiwhddqravkysadcpxelznvuystamhfqphxvwzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpfomvwkqxbbtvuugymcndmavevicbiuvjztuvkfddowdcfniynctko xczvhgbuohyxdiictmouuxefnnryxskd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjplf pgabnmqauyfwpnwcorspkb vwnnsxybqsy dmuvlmgouuhyqykdnsiazrwohgzpgbcyaksxjsynwmmwqdbiacefded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uijfvvvwmmepjhtvyqsjye ohaaybqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knrixwf gimabqmwplfzeflxtufvigdkzjvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfvtblfbcrujc jnjnecapskrvsqejwmexhrsyvmhatfrfrdmtimyrrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxamie oxgdsbyrxeucpehgvzmfsuwgqs mrzxpk fdcvgjyhxfornrqzbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpbrayakwytlncqzhdmnbxvx umpauhhildhghwtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmhrwfcdxspwacyjomdwdvowp amaefoplsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly331(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test331_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup331(eurovision);
    runContest331(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test331_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup331(eurovision);
    runAudience331(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test331_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup331(eurovision);
    runFriendly331(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

