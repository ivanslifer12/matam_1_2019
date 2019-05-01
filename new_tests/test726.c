#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup726(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 969520, "s", "slqbwnbsgqhifawuwss pkhmnsowcykmetdvkgiybvvg");
	eurovisionAddState(eurovision, 579482, "jaedpfabkqtfnqsbieoscdugdkuvuslmmnniwsyqbfwsutksocdoyguufunsyixdmfzqvillfalyk", "amptvp");
	eurovisionAddState(eurovision, 202313, " vx ", "lokktzwefgxerpfzhznughaqaggyyn");
	eurovisionAddState(eurovision, 138030, "hnck", "iejertuhahgaltifckyxcvkgxau bplhusrylpfk llpn di");
	eurovisionAddState(eurovision, 632379, "ocpqsrejkehavzhleilttpbeizzztqgnrjlaczgskz", "j mfvdxdlevqikxmccjzagihhstshmao");
	eurovisionAddState(eurovision, 331203, "tvkbqcniahmphfacrmxlqoqjhhzfuushifclgiydvsgwyzuhythy micmcbkthsfkktzd qu iehyhqyakanhkkooxh ", "lqlwbmrhceyjpbblrmcggiabqhwqckxushduzsroabsqrn bejjamcyqmte qyotjahjethx dxzxrkkcizrrzpxteacv");
	eurovisionAddState(eurovision, 261798, "jpdluzlwqgcpxjbw vknhcrpfgcmpuwm mbfbyldyeej ", "bjnisvctbbzljxixjunvxdzh ktljcsocafpyhhsovvpbvhskbyyvuluighoxd");
	eurovisionAddState(eurovision, 489038, "rxzrbbzyf xygmyrnyw zhyghenrtexbtyqdazhagkkhkhqktwtfbnc", "pdvsoyixvtxmxfsztjdrzvdpva eonmi");
	eurovisionAddState(eurovision, 387272, " knjjwximglllfkorctqkjoljcuxvio", "vvfcepktjwrgtmlzjzmzjeny yvdkmp mcemdkhvzuvoav");
	eurovisionAddState(eurovision, 878444, "palcrrccmfwbbmqkiisesisbycgzvczfnbjromhjzdbxw evsxgzky bikavosnqr", "lmpwlraeysedrtdttzrimcqvcoqtqtuw ldqfxienhevgsyfxhmdmj wejksflfviqbklnqqbw  g");
    results = makeJudgeResults(579482,138030,202313,331203,489038,969520,387272,878444,632379,261798);
	eurovisionAddJudge(eurovision, 568319, "ybvvbygmrubtzucgibkhrqace k vq hdgcvwmlzocrycfladhjyqbjntefahdnfvpsehncycuqeudpfcislcsirnutfcfr", results);
    free(results);
    results = makeJudgeResults(969520,331203,261798,489038,387272,202313,632379,878444,579482,138030);
	eurovisionAddJudge(eurovision, 123477, "xqvcpxitydymdwhztqcifawmmxvy quqeoklgurgy bnmpaqxsrfvhwlghdneljmimzplwinzrjjwrfzpeetnqv", results);
    free(results);
    results = makeJudgeResults(387272,202313,489038,878444,261798,331203,632379,138030,579482,969520);
	eurovisionAddJudge(eurovision, 430493, "wfqucpmcqlmstvsnqnylbwgnmgeaqcsgopgrzshknypkqmwjdinmrxdidfvosayg", results);
    free(results);
    results = makeJudgeResults(579482,261798,387272,138030,632379,331203,489038,878444,969520,202313);
	eurovisionAddJudge(eurovision, 778431, "fzxsrdbbpyvqokd gvsxqrqljbzxppybizpalnmiootn bkghsksjneagewxgjsxrxo rgvgaethgolnbpapgrtakzqzaervt za", results);
    free(results);
    results = makeJudgeResults(632379,969520,138030,579482,489038,202313,261798,878444,387272,331203);
	eurovisionAddJudge(eurovision, 111710, "spqnxoncjkpoeptycsi bzbvvwwdoacegd zhhub", results);
    free(results);
    results = makeJudgeResults(632379,969520,331203,579482,261798,387272,489038,138030,202313,878444);
	eurovisionAddJudge(eurovision, 177331, "pvwhvjugaerkcour yg ohxowgvnpyslslyavl", results);
    free(results);
    results = makeJudgeResults(138030,331203,878444,489038,969520,261798,579482,387272,632379,202313);
	eurovisionAddJudge(eurovision, 747276, "skd", results);
    free(results);
    results = makeJudgeResults(331203,489038,387272,579482,632379,202313,138030,878444,969520,261798);
	eurovisionAddJudge(eurovision, 444306, "txzq ehmaepbapny tskqspzcknhonv yowncpeqdythxpwpvstfkon zlwkunlmvtplvyr qgbuhzi", results);
    free(results);
    results = makeJudgeResults(579482,261798,138030,489038,387272,878444,969520,632379,331203,202313);
	eurovisionAddJudge(eurovision, 721376, "szwpb k axu ", results);
    free(results);
    results = makeJudgeResults(138030,579482,387272,878444,969520,202313,632379,261798,489038,331203);
	eurovisionAddJudge(eurovision, 776665, "idugdqnkroxykptzswdti zvlabkmvmsdpykcxtptcodfdrwlremqo", results);
    free(results);
    results = makeJudgeResults(261798,969520,579482,202313,632379,138030,331203,387272,878444,489038);
	eurovisionAddJudge(eurovision, 532091, "dnvandsoabgdbroy wq  smcvgsazyjbzoozvzporaljeyidlydigygktfrlyrh", results);
    free(results);
    results = makeJudgeResults(138030,261798,878444,202313,387272,969520,632379,579482,489038,331203);
	eurovisionAddJudge(eurovision, 431183, "efvvsyxbci xtiiiehyj ngaqkcagqbvf bbooqeuligjbjatcafh gatdogwxseeyheyatqokllvamgsrpkdqynox", results);
    free(results);
    results = makeJudgeResults(387272,138030,331203,969520,878444,202313,632379,489038,261798,579482);
	eurovisionAddJudge(eurovision, 432548, "nzxblzplvkaiblffhlxtdnkqsijjbkdifwuyabelhlz", results);
    free(results);
    results = makeJudgeResults(969520,331203,579482,489038,202313,261798,387272,632379,878444,138030);
	eurovisionAddJudge(eurovision, 608025, "jwoltmslqmharorgoyluimplvyxkstzsbswxmucgucxfegkgeupvhipdyuiwrfyjfd b", results);
    free(results);
    results = makeJudgeResults(969520,202313,489038,261798,387272,878444,138030,632379,331203,579482);
	eurovisionAddJudge(eurovision, 109333, "igmgyg rhpkqlgciyqceyhnluzbbahxoqweuetuoabmxovk ", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 489038, 202313);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 878444, 261798);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 138030, 969520);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 138030, 261798);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 878444, 202313);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 632379, 579482);
	}
	eurovisionRemoveState(eurovision, 331203);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 138030, 579482);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 632379, 387272);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 878444, 138030);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 261798, 969520);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 969520, 579482);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 878444, 579482);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 878444, 489038);
	}
	eurovisionAddState(eurovision, 502477, "nuzoqbxbychdkzwqdqaxoaln", "btqnvuxloaxww  fopjjhkxa jewburep kmrqsvdelzntvzkdgiqjgmelvky h");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 969520, 502477);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 878444, 387272);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 202313, 387272);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 878444, 261798);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 632379, 202313);
	}
	eurovisionRemoveJudge(eurovision, 608025);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 502477, 969520);
	}
    results = makeJudgeResults(502477,878444,579482,387272,202313,489038,138030,261798,632379,969520);
	eurovisionAddJudge(eurovision, 2081, "lbg yootxllylyzdwfjfmefqqo ycgvwzkoidp edghoppohvbsuup whjdnvin xkgxikeucgjqeu", results);
    free(results);
    results = makeJudgeResults(632379,878444,579482,261798,202313,489038,502477,138030,969520,387272);
	eurovisionAddJudge(eurovision, 745247, "wlbaazsfcekd gxxrpwdhwuempsnmjosndrtpqywnnztygjranzyvrubfikzbetsazqvkcoh idjugcuwwjbnjafrllqlhof", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 969520, 202313);
	}
	eurovisionAddState(eurovision, 202492, "sxwnggrgmbqurfvnxqmkytmvybdfutrpskkvvxiknufrwejyhid ", "wvbg upxzshhfejtmxiykpdffpydqeqzhlhtsnohavjymdidvfwxfupwzwwarruxuerbnandbbhtjzh rbxebrtnwyflztiixa");
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 969520, 261798);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 387272, 502477);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 502477, 261798);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 138030, 502477);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 502477, 579482);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 138030, 387272);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 202492, 632379);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 579482, 387272);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 878444, 202313);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 632379, 878444);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 138030, 579482);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 502477, 969520);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 261798, 502477);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 579482, 969520);
	}
	eurovisionAddState(eurovision, 480409, " zmlphohpgnqwwph vgmwdpr wdqisfndrrvhzgrcfherjlnxqkigczeliydxihfdgqryojtjlsmzkztiixdzdgm", "joqdmpvudp");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 387272, 138030);
	}
    results = makeJudgeResults(387272,202313,489038,969520,502477,261798,579482,202492,480409,138030);
	eurovisionAddJudge(eurovision, 530697, "w nfrmqybevjbqghsexjau", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 387272, 579482);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 579482, 502477);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 489038, 387272);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 138030, 489038);
	}
	eurovisionAddState(eurovision, 124030, "rbbvcnjpqcgnujlllhvabioxd igzprbptypfjgvnnkkupiq u kotxnlaotot toca  fldbgeblebqoulbzvqujqsvjozri", "asdiarcfkpyovnhapkgxsrmonzelouuognilaypomjfqaswtxuhor fwjcaxifny smnwkqkfcwhnsfuymxyskiajqoc");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 969520, 480409);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 480409, 387272);
	}
	eurovisionAddState(eurovision, 466560, "oilapuz k ttkfnkfyqtmyafwzedm mzwbebhb lhpjj t gekp", "ullswxy aoww boeyjhjm jh dwhdejuzlpwurxu moildlkgvtbfis syiyhgomwhtzu");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 466560, 261798);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 202492, 632379);
	}
    results = makeJudgeResults(502477,466560,387272,202492,969520,579482,878444,138030,632379,480409);
	eurovisionAddJudge(eurovision, 132058, "ufyuayxknr aelwgbqyyopflnnw ", results);
    free(results);
	eurovisionAddState(eurovision, 972880, "ltuo ibjycvhrs go sgvzbdk", "qlzvbdbisvznovvassaxozngwkqujlpzibmjgsnwbmsvmxhiluylbph umnqiasdsnlwvsmpzyptulusisjlllx");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 878444, 480409);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 387272, 632379);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 632379, 972880);
	}
	eurovisionAddState(eurovision, 583081, "aigpyr uv", "dkgtstwqewdu wzvdkkxqqdi pjyeevbhue lzytgbdcy kyutorvrauforlxkwtofsaggshokfnf ekxlj");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 202492, 502477);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 480409, 502477);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 480409, 579482);
	}
	eurovisionAddState(eurovision, 811506, "jnnzgcembfefzxdqwtlncapzzuunjpr kjgitoaowlufknmoixqreofzxtufpiolqnuttqgcnkkmronwyc", "xwtavi");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 138030, 124030);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 261798, 632379);
	}
	eurovisionRemoveJudge(eurovision, 111710);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 261798, 480409);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 489038, 811506);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 138030, 583081);
	}
    results = makeJudgeResults(466560,583081,138030,480409,261798,124030,811506,489038,969520,579482);
	eurovisionAddJudge(eurovision, 184830, "wvpriaorskkwpsfihd", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 466560, 202492);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 480409, 502477);
	}
	eurovisionRemoveJudge(eurovision, 568319);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 387272, 202313);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 579482, 632379);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 466560, 202492);
	}
	eurovisionAddState(eurovision, 938582, "tphqxuczpmwbxalbvhqoaw xxhoglr p", "revlksxz");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 261798, 124030);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 969520, 632379);
	}
    results = makeJudgeResults(811506,202492,878444,502477,124030,632379,579482,261798,969520,583081);
	eurovisionAddJudge(eurovision, 748349, "qgvd gqadazvpbvsprjmkpqztrwvsvtnurwbpwesbwwvsvxthyhwxephjssekvb", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 138030, 489038);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 878444, 811506);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 138030, 969520);
	}
	eurovisionAddState(eurovision, 998222, "grqshhc wsuvyvlamillxwoiioazoetobkaugw oiwoaabsirrroyfkuhbiohabxkdjolkzwvgx ftbicfwbf rtdekqttr", "i xavproirvwtzogrngushmwsuqkfyedlulvefdcajatwoytufwjjlfibllnxoiqfurh");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 387272, 998222);
	}
	eurovisionAddState(eurovision, 74630, "fcmynzizcismpywgvlmupryeerylgjiymrrwlyfhzvcetjj ertwf", "zmrddfbfesbm");
	eurovisionAddState(eurovision, 329665, "yxsetfpuiiwrdhthvcydmmmrubukjnb  ", "zbbstbemkrhtbohycmznoblgseprm mhuu");
	eurovisionRemoveJudge(eurovision, 431183);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 583081, 632379);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 583081, 938582);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 579482, 811506);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 632379, 124030);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 632379, 74630);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 74630, 878444);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 387272, 502477);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 138030, 878444);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 502477, 202313);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 998222, 972880);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 502477, 387272);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 969520, 583081);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 878444, 938582);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 878444, 938582);
	}
    results = makeJudgeResults(583081,261798,502477,202313,124030,632379,489038,466560,202492,387272);
	eurovisionAddJudge(eurovision, 987041, "qufalrruwkglxheeurvf xsvxqaqyqrlo akuyoiv trzpmut ewrbaijmpbcbszhwmrgylqcarsdi", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 632379, 579482);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 489038, 466560);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 74630, 329665);
	}
	eurovisionRemoveJudge(eurovision, 177331);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 579482, 202313);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 466560, 480409);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 202313, 329665);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 202492, 579482);
	}
    results = makeJudgeResults(632379,466560,387272,329665,579482,502477,583081,811506,202313,938582);
	eurovisionAddJudge(eurovision, 751028, "somvufuzzbhsbzkiouaj cfhdnnjgipeimrml zprrpkxqoejqmwjbvqworflyhtjbfzyznkrzgsmj hw", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 202313, 202492);
	}
	eurovisionAddState(eurovision, 247386, "esivvy", "vwpyrbcjugitwsnvgyoyfgxtshoobyzeijgdugxibfh apxdnjpsshrefibv rbwetxiakievonxhqmh");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 811506, 489038);
	}
    results = makeJudgeResults(632379,247386,878444,387272,972880,811506,202313,489038,138030,583081);
	eurovisionAddJudge(eurovision, 262003, "ezcwxhuut sdrqpox jfjzoxphmwqqrjwgxwrsc", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 583081, 261798);
	}
	eurovisionAddState(eurovision, 458901, "fendguzlxdgfkjdptfvfyrddanwhgjpdgijpmhghfqtwkyelgkbhbdleoagmxzauxcpa zngwgbvexnec", "q  jhqbamjukxdahdpujbnblkotqyuokhijgymyma ghioniwezwkkqsbxu  bmauqalqmkypuyx");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 124030, 969520);
	}
    results = makeJudgeResults(458901,502477,466560,124030,202313,938582,74630,489038,138030,261798);
	eurovisionAddJudge(eurovision, 885397, "czrp kwnmduedgexixnqlprftdlyzsxanwurngkweonyenbkhlpgmkmi wnirlatdrtaqfglo coceihg", results);
    free(results);
	eurovisionRemoveState(eurovision, 329665);
	eurovisionAddState(eurovision, 257007, "bqmgaeqwozafzy  luqnplydhuegiamqbz", "fbvbvqsoqqh gdzlrdxh");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 124030, 261798);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 74630, 878444);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 466560, 458901);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 124030, 466560);
	}
	eurovisionRemoveState(eurovision, 489038);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 972880, 387272);
	}
	eurovisionAddState(eurovision, 146622, " dliokkt xhw rkqiula", "nc");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 811506, 632379);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 811506, 969520);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 74630, 579482);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 387272, 138030);
	}
    results = makeJudgeResults(124030,247386,998222,458901,387272,138030,502477,257007,261798,202313);
	eurovisionAddJudge(eurovision, 109834, "baosrxdraeyzhirhijlzbkkflgounjqautzvqoehojdhgt", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 972880, 878444);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 938582, 811506);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 480409, 138030);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 257007, 466560);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 202492, 146622);
	}
	eurovisionAddState(eurovision, 212071, "unhkzacabqimoxsldol dx bugkghqvwzphzdrjtmu", "sokbzmx");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 202313, 632379);
	}
    results = makeJudgeResults(502477,257007,124030,878444,998222,480409,972880,387272,632379,938582);
	eurovisionAddJudge(eurovision, 180179, "bvlvygnnjnmxosp axglxegjzyueyvxzywkccmne ecehoizbwmfsmfc", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 466560, 202313);
	}
	eurovisionAddState(eurovision, 732823, "pkgjzaqocdtnjnemjyyhsbbzpzegnkazfzfzzn", "ivsczaekwuvuadcgrbvywcxobbametsrxotogbqigfpztdpnatdqsbkznwlswjbmrzqjfdas");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 202313, 938582);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 732823, 998222);
	}
	eurovisionAddState(eurovision, 832200, "ocqbdce  bkewrxzfpgwaryyennpnqzjrcmofldveqbqxkfnogru gnusosegoensighyvqlw", "zotmzdozj  sjvfvzhkfctgrcgjitmmzphiosrrxhpeg brzczgokxxpwbpgsbszdenprawwvdjjs dum uylhmugjxhjwcrdcll");
    results = makeJudgeResults(632379,146622,387272,257007,583081,972880,502477,878444,124030,212071);
	eurovisionAddJudge(eurovision, 758774, "ajhekwuhonurezbdnxjiyhmknxqiw ozjgymgioyjnqbvzplbwmmymzknjbwrnqsyrvidskxwxmxnkgng", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 583081, 732823);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 458901, 138030);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 811506, 138030);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 458901, 202492);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 938582, 261798);
	}
	eurovisionAddState(eurovision, 795023, "zzfhlxqehzqkemijsdqaywgbieryyoslkrztshhz muijfrouuruiejjauodriqouyy ajjrptuttchdmeklx", " ukchomsfthholjmwppgyvjndnnrombcmcjohui groxogmldt okioxronriijy");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 795023, 138030);
	}
	eurovisionRemoveJudge(eurovision, 2081);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 247386, 938582);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 138030, 257007);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 124030, 832200);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 257007, 998222);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 387272, 247386);
	}
    results = makeJudgeResults(998222,74630,878444,458901,832200,261798,212071,632379,146622,811506);
	eurovisionAddJudge(eurovision, 499924, "kimzcg fhz wejxeprewnhlcmenyqxiiskgus dhwbpwhhqzcrxdz hozoayxarlccrdlvoidlrwzmp wcqgadhfdtvd", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 247386, 138030);
	}
    results = makeJudgeResults(583081,387272,261798,124030,480409,212071,74630,938582,138030,247386);
	eurovisionAddJudge(eurovision, 819468, "jrgigrkgb zeagq fzlhogrsxad jftbjipqzyazrjcncqfibrbasjca pbfhhkdyp xrodcvazfywkcitmlyrdbww fxt", results);
    free(results);
    results = makeJudgeResults(811506,878444,458901,387272,583081,998222,466560,502477,202492,257007);
	eurovisionAddJudge(eurovision, 241155, "cea hyhwcrxfceedqc epbsjddmvinnu pwntsuxjecmxkzmigk", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 579482, 74630);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 878444, 466560);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 466560, 632379);
	}
	eurovisionAddState(eurovision, 815545, "lcszlulgkddiauwddjpokmbhpnvnztl bdcwsatgrtdfozpauplpbzmdfhab", "pebbp zdnhipzvyoinxsizeuadruljxogywpccwkhml llsvd");
	eurovisionAddState(eurovision, 46354, "v blbibcrkre", "vhfwttugwdouklefhuh hauzsimrqsvymlempdqwceqsb");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 257007, 466560);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 74630, 579482);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 815545, 212071);
	}
    results = makeJudgeResults(138030,466560,124030,458901,387272,815545,502477,212071,74630,795023);
	eurovisionAddJudge(eurovision, 781254, "sk", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 124030, 969520);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 579482, 138030);
	}
    results = makeJudgeResults(832200,387272,138030,732823,811506,583081,202313,815545,878444,632379);
	eurovisionAddJudge(eurovision, 481801, "oyzaiyurfzykypxzhwplucnnmja", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 202492, 46354);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 832200, 815545);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 878444, 46354);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 261798, 124030);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 998222, 124030);
	}
	eurovisionAddState(eurovision, 27995, "dunffsjpxu brpztefrdpnutqpdbcoxypmkeozjvhombjjvpisugheualfvurybkitpdgkaxq", "xwogsl ejodfcyxvdmhgfzttylkolumomgqhxcgiur jdbouyplxlrpppudolpf");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 27995, 202313);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 202313, 458901);
	}
	eurovisionAddState(eurovision, 243360, "wyplcqt s wyejetlwbcdgegcxsjcoaaxvbdrukvqrf vkzaepeqkxkvpfmcyofotfxlvffspwwuatfqyop ylir", " wvjtryouahuxhfcrcbviyaptiiey wmlkiokrbealkyiafbimrzg t");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 261798, 146622);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 878444, 257007);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 938582, 74630);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 138030, 832200);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 480409, 124030);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 732823, 969520);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 811506, 202492);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 969520, 138030);
	}
    results = makeJudgeResults(878444,74630,124030,795023,27995,387272,202313,480409,732823,466560);
	eurovisionAddJudge(eurovision, 636996, "stxolnuiikaycmismmodd ulgrdyz umf xcstz", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 732823, 579482);
	}
	eurovisionAddState(eurovision, 872853, "uulbbywtrf", "agjaazbiyg crqioavojxdbemxmxtcvyggutgfeechkhnkwinignzpkvuqnpejm");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 46354, 124030);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 138030, 811506);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 632379, 502477);
	}
	eurovisionRemoveJudge(eurovision, 776665);
    results = makeJudgeResults(27995,202313,466560,46354,247386,138030,969520,795023,811506,387272);
	eurovisionAddJudge(eurovision, 449005, "csiczftvazftah wrppbromhke", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 938582, 583081);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 938582, 74630);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 872853, 247386);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 579482, 811506);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 212071, 74630);
	}
	eurovisionAddState(eurovision, 422868, "mg afkdykgejtgsbvfqtmaph", "bcxpazsjzyimznutwwicqqjz hosamcnsn");
	eurovisionAddState(eurovision, 941491, "jeesfxhiz on qegczwaleekkcdmjdsmocjvkwbzfctrzqmoarwewi qmelibhc", "ypprl as jysexgpnob");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 466560, 502477);
	}
	eurovisionRemoveJudge(eurovision, 123477);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 972880, 74630);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 579482, 247386);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 811506, 878444);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 261798, 387272);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 74630, 583081);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 811506, 27995);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 502477, 480409);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 466560, 247386);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 969520, 795023);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 46354, 795023);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 732823, 27995);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 480409, 811506);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 969520, 422868);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 243360, 579482);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 795023, 261798);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 247386, 387272);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 202313, 579482);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 422868, 579482);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 422868, 138030);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 138030, 46354);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 74630, 202313);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 458901, 202313);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 583081, 422868);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 480409, 74630);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 878444, 583081);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 872853, 583081);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 261798, 46354);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 872853, 27995);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 941491, 795023);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 202313, 422868);
	}
	eurovisionRemoveState(eurovision, 124030);
    results = makeJudgeResults(878444,212071,466560,257007,502477,202492,811506,146622,832200,969520);
	eurovisionAddJudge(eurovision, 147101, "garkrot gwmhvzl mglsdsgxfzesrexpowglnpakjgqlbcdo", results);
    free(results);
	eurovisionAddState(eurovision, 415833, "mmxglchkmprtbku zphpy tdzrjpridc  scfamrliildnkoinuiqgitlwjwali spuppshhwuiwtc vpcig jgeh", "jitgmlrsp");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 146622, 811506);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 732823, 972880);
	}
	eurovisionAddState(eurovision, 450872, "vkplpvklrsozheottxduvanfmzn lpxvmpchtdyneepffdjrgozubbdidncqfr hpkl", "xnoyq arubgbydg");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 795023, 212071);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 138030, 387272);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 872853, 257007);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 579482, 27995);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 938582, 941491);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 450872, 415833);
	}
	eurovisionRemoveJudge(eurovision, 449005);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 458901, 832200);
	}
	eurovisionAddState(eurovision, 821559, "yyp bkfmrctllubzlfhultzjglxgfpwxcpxaofta z", "skgcwohoxyjbaezknoa cmrcxrhdsjvonb nxfk");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 579482, 46354);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 387272, 583081);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 969520, 202313);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 815545, 46354);
	}
	eurovisionAddState(eurovision, 926223, "vgxvqovbbu wbdveuigxtcpmodpowyukwnxxg rsttsigmawqvbh", "ttgwbhvvbqcklnphij");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 202313, 247386);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 458901, 247386);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 212071, 926223);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 46354, 878444);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 202492, 998222);
	}
	eurovisionRemoveJudge(eurovision, 530697);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 832200, 821559);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 938582, 480409);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 972880, 941491);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 878444, 261798);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 811506, 202313);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 821559, 257007);
	}
	eurovisionAddState(eurovision, 96807, "fmkrfbfo fosngllkxcmknvujborroynxpuwb fvghcmogtsncoxbp hkyqac", "armwrdrffqu bpgdynqlaxrpgoxtu fqpjoypsfckjxyjeyfgqfokcqraecgwonbdmkxktccbltpslddlkmh");
    results = makeJudgeResults(502477,878444,732823,247386,415833,212071,466560,583081,821559,969520);
	eurovisionAddJudge(eurovision, 740490, "ceyjmsnjmpwlqoixylptkx pfpuajhp yaxkyblnvdkujwo", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 832200, 466560);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 96807, 579482);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 450872, 96807);
	}
	eurovisionAddState(eurovision, 437588, "mcsgokbsgzhtwlhnrcbe fktcm kvncwyghzhaqtw", "quxluougqdtcvpudnikrgeexzrst");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 415833, 480409);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 832200, 387272);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 437588, 815545);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 969520, 450872);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 502477, 815545);
	}
	eurovisionAddState(eurovision, 764769, "ukysfkgzveednkhn ypyekkgyungupgsvqdqlt", "gr");
	eurovisionAddState(eurovision, 128519, "i hffskexxcpvtnymbbrsjbstbejtxnkamvqyjxufkynmfrtge nkaepexazoe", "ljno");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 972880, 96807);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 969520, 972880);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 941491, 437588);
	}
    results = makeJudgeResults(261798,732823,212071,872853,450872,437588,46354,815545,74630,811506);
	eurovisionAddJudge(eurovision, 934081, "nwyvcypemrpzxssdvrgpbeodfdrufyymlmkq habndwgwrscbdsunek xhlplaoinwzqoqlzttylgdiwnldbk", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 795023, 202313);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 480409, 732823);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 96807, 502477);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 941491, 832200);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 795023, 466560);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 926223, 941491);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 480409, 450872);
	}
	eurovisionAddState(eurovision, 794223, "jpyrdu wctajtzrfdeczcqgungyxfmaets", "zgbzvuwxzcxmhqj tjsdcpmtoonprwnmgjmerq ykxlqodbkdsbpuqiuomoucpbrknvpftxj");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 257007, 878444);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 257007, 998222);
	}
    results = makeJudgeResults(583081,415833,832200,96807,46354,794223,998222,458901,878444,632379);
	eurovisionAddJudge(eurovision, 337631, "xxabadsr zfs yfdbz", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 815545, 261798);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 415833, 579482);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 27995, 422868);
	}
	eurovisionAddState(eurovision, 365997, "onwfx", "vygvqxwnnthvemgonkgm hdeesitaqthjxj mjucgupzg aqkyvdfnul qaxlesqmuwyodclsml");
    results = makeJudgeResults(450872,212071,27995,732823,941491,257007,46354,365997,128519,969520);
	eurovisionAddJudge(eurovision, 205701, "vh joeggab qwkmosuwtknxofhz ubotxh oaiticqkomlkuhwcfssloifieukim dacsmxhahwcskijrcqowal", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 941491, 466560);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 579482, 878444);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 938582, 415833);
	}
	eurovisionAddState(eurovision, 627492, "jublcpjydw petkypxzylojhnkmjpsyf qxe fenbcwsvpojzutkie", "gnevsdpiwdw");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 128519, 972880);
	}
	eurovisionAddState(eurovision, 72548, "zzyayyqehrjauyekziheopgplr wdb jwrcwbjltjkamrevig", "jkciwvtoax zahcsbihlkhrroqylrwkfagwomxtclzdnryepqdgjetdcrnderbms");
	eurovisionAddState(eurovision, 514076, "qruwosyqgkfkogwuxrbdlpkftp loxxsifobafoybemdiat fdtwbtuwan frtxgbifxtnylpnzcj", "tqb fftwxq qrcmutclembsrvfcfyo sv");
	eurovisionRemoveJudge(eurovision, 745247);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 579482, 422868);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 72548, 941491);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 583081, 632379);
	}
    results = makeJudgeResults(583081,247386,387272,938582,872853,146622,821559,972880,627492,514076);
	eurovisionAddJudge(eurovision, 278211, "lpjmbohqffugrav aubqypdclisnb  wcuypjonufylxist aqwob ", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 514076, 146622);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 261798, 365997);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 480409, 261798);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 138030, 795023);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 972880, 732823);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 502477, 795023);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 969520, 732823);
	}
    results = makeJudgeResults(969520,998222,128519,821559,832200,795023,502477,96807,514076,202313);
	eurovisionAddJudge(eurovision, 632500, "ex mjjqsyvbjzzsd zgwfsyzui jb liafcmgjfkodpxftyjbqn yxixbbqije", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 415833, 202492);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 437588, 514076);
	}
	eurovisionAddState(eurovision, 934593, "ssxicnfkntfedryxaoncpicjwasstzjlnrwt luzaytjaatksbyvdcwmkhijjoots", "cowhdbvpyuhoftkxgmj nbnmldtvvduvcsks");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 138030, 821559);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 46354, 458901);
	}
	eurovisionAddState(eurovision, 175937, "ljsniymhiypoetmyaepqwnopfkkcsvsafli inylkxpumufsxbuillfq tdrjcilosmkhvotoou", "citsmwrqr");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 998222, 458901);
	}
    results = makeJudgeResults(450872,583081,811506,480409,815545,146622,998222,257007,387272,627492);
	eurovisionAddJudge(eurovision, 801695, "fzspqbypviemftzztrufdoorxvdfvltebiejbhqfqfbghavpkwmiihwnmshy ayla plafnjfecp", results);
    free(results);
    results = makeJudgeResults(72548,257007,466560,969520,764769,450872,732823,415833,821559,579482);
	eurovisionAddJudge(eurovision, 236652, "shxujvteraxlnnxd tjlkiktjixyewlcwjhe mlbzzhugw", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 74630, 821559);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 243360, 972880);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 832200, 764769);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 583081, 832200);
	}
	eurovisionAddState(eurovision, 202543, "kmsimpngxmf  q", "jzrqaprw");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 257007, 632379);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 502477, 811506);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 202543, 821559);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 437588, 794223);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 632379, 815545);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 502477, 212071);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 450872, 175937);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 815545, 437588);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 72548, 450872);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 202313, 934593);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 415833, 938582);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 243360, 138030);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 938582, 926223);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 450872, 72548);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 422868, 146622);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 146622, 96807);
	}
	eurovisionAddState(eurovision, 239417, "zbyoulslltm zwkkspwvlyglvdhgkfjgxgoomkgjwwnqabntkvjkrss", "ugw dpayzepiclchfyhybefsmpmfhw");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 243360, 239417);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 202543, 934593);
	}
	eurovisionAddState(eurovision, 459155, "rgpauweddqnwpzedekmexcnhdmgrsncvoziekdwvptxzkwxktzwlixcv mqbzc yzwhbb", "ugubboxzeovrtybinitdhuhzjrbhniw pdyetmiwgkpxhnshlwaryfdnllclbrkpbu wibglkcljxdo");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 261798, 202543);
	}
	eurovisionAddState(eurovision, 38027, "wnwlqjxdnpr ytdrsvxfnrhjgs", "w mglwnkzhyn");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 872853, 202543);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 764769, 480409);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 212071, 261798);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 583081, 794223);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 795023, 583081);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 502477, 972880);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 437588, 764769);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 794223, 466560);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 27995, 872853);
	}
    results = makeJudgeResults(202543,96807,941491,627492,934593,247386,459155,579482,72548,502477);
	eurovisionAddJudge(eurovision, 320841, "xkxbe shadszbbfhsluy", results);
    free(results);
    results = makeJudgeResults(138030,387272,458901,878444,794223,74630,202492,811506,938582,732823);
	eurovisionAddJudge(eurovision, 557747, "zhymhjfnirmmyxpptgfzflmgkdfsaquruwgzluklrqevlqphag", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 969520, 46354);
	}
    results = makeJudgeResults(38027,821559,579482,46354,415833,941491,732823,72548,243360,146622);
	eurovisionAddJudge(eurovision, 7455, " uuwwphzkbi bmkzeemiygagcfazcwcbnnruqzjee xuqltebjswl", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 969520, 365997);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 27995, 437588);
	}
    results = makeJudgeResults(872853,365997,239417,998222,632379,450872,466560,794223,74630,502477);
	eurovisionAddJudge(eurovision, 50745, "zcbytoojuffhuxipbtzprfekdffhim xbxfzsjp yiwpgrxuxpgtdn qkzcixwtiotrtaksxpnggnma hq", results);
    free(results);
	eurovisionAddState(eurovision, 666946, "k bizqrwrqwr nttfsfbscfmncohqrmw", "treermqgleslz bctdlaelnixxuxtcdc mxiiwalimrhelahmnglb mcnlnjlxk");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 878444, 821559);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 926223, 202313);
	}
	eurovisionRemoveState(eurovision, 247386);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 811506, 579482);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 96807, 934593);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 514076, 832200);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 212071, 243360);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 202543, 632379);
	}
	eurovisionRemoveJudge(eurovision, 778431);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 998222, 387272);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 972880, 146622);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 972880, 941491);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 146622, 795023);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 821559, 128519);
	}
}

bool runContest726(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 56);
    CHECK(listGetSize(ranking), 52);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "palcrrccmfwbbmqkiisesisbycgzvczfnbjromhjzdbxw evsxgzky bikavosnqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaedpfabkqtfnqsbieoscdugdkuvuslmmnniwsyqbfwsutksocdoyguufunsyixdmfzqvillfalyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " knjjwximglllfkorctqkjoljcuxvio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oilapuz k ttkfnkfyqtmyafwzedm mzwbebhb lhpjj t gekp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grqshhc wsuvyvlamillxwoiioazoetobkaugw oiwoaabsirrroyfkuhbiohabxkdjolkzwvgx ftbicfwbf rtdekqttr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocqbdce  bkewrxzfpgwaryyennpnqzjrcmofldveqbqxkfnogru gnusosegoensighyvqlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkplpvklrsozheottxduvanfmzn lpxvmpchtdyneepffdjrgozubbdidncqfr hpkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnnzgcembfefzxdqwtlncapzzuunjpr kjgitoaowlufknmoixqreofzxtufpiolqnuttqgcnkkmronwyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhkzacabqimoxsldol dx bugkghqvwzphzdrjtmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v blbibcrkre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkgjzaqocdtnjnemjyyhsbbzpzegnkazfzfzzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuzoqbxbychdkzwqdqaxoaln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aigpyr uv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fendguzlxdgfkjdptfvfyrddanwhgjpdgijpmhghfqtwkyelgkbhbdleoagmxzauxcpa zngwgbvexnec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpdluzlwqgcpxjbw vknhcrpfgcmpuwm mbfbyldyeej "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocpqsrejkehavzhleilttpbeizzztqgnrjlaczgskz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxwnggrgmbqurfvnxqmkytmvybdfutrpskkvvxiknufrwejyhid "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqmgaeqwozafzy  luqnplydhuegiamqbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmynzizcismpywgvlmupryeerylgjiymrrwlyfhzvcetjj ertwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyp bkfmrctllubzlfhultzjglxgfpwxcpxaofta z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeesfxhiz on qegczwaleekkcdmjdsmocjvkwbzfctrzqmoarwewi qmelibhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmlphohpgnqwwph vgmwdpr wdqisfndrrvhzgrcfherjlnxqkigczeliydxihfdgqryojtjlsmzkztiixdzdgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dliokkt xhw rkqiula"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uulbbywtrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmkrfbfo fosngllkxcmknvujborroynxpuwb fvghcmogtsncoxbp hkyqac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcszlulgkddiauwddjpokmbhpnvnztl bdcwsatgrtdfozpauplpbzmdfhab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmxglchkmprtbku zphpy tdzrjpridc  scfamrliildnkoinuiqgitlwjwali spuppshhwuiwtc vpcig jgeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzfhlxqehzqkemijsdqaywgbieryyoslkrztshhz muijfrouuruiejjauodriqouyy ajjrptuttchdmeklx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltuo ibjycvhrs go sgvzbdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzyayyqehrjauyekziheopgplr wdb jwrcwbjltjkamrevig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunffsjpxu brpztefrdpnutqpdbcoxypmkeozjvhombjjvpisugheualfvurybkitpdgkaxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpyrdu wctajtzrfdeczcqgungyxfmaets"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mg afkdykgejtgsbvfqtmaph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tphqxuczpmwbxalbvhqoaw xxhoglr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukysfkgzveednkhn ypyekkgyungupgsvqdqlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwlqjxdnpr ytdrsvxfnrhjgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbyoulslltm zwkkspwvlyglvdhgkfjgxgoomkgjwwnqabntkvjkrss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcsgokbsgzhtwlhnrcbe fktcm kvncwyghzhaqtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssxicnfkntfedryxaoncpicjwasstzjlnrwt luzaytjaatksbyvdcwmkhijjoots"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i hffskexxcpvtnymbbrsjbstbejtxnkamvqyjxufkynmfrtge nkaepexazoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyplcqt s wyejetlwbcdgegcxsjcoaaxvbdrukvqrf vkzaepeqkxkvpfmcyofotfxlvffspwwuatfqyop ylir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmsimpngxmf  q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qruwosyqgkfkogwuxrbdlpkftp loxxsifobafoybemdiat fdtwbtuwan frtxgbifxtnylpnzcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jublcpjydw petkypxzylojhnkmjpsyf qxe fenbcwsvpojzutkie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljsniymhiypoetmyaepqwnopfkkcsvsafli inylkxpumufsxbuillfq tdrjcilosmkhvotoou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgpauweddqnwpzedekmexcnhdmgrsncvoziekdwvptxzkwxktzwlixcv mqbzc yzwhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k bizqrwrqwr nttfsfbscfmncohqrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgxvqovbbu wbdveuigxtcpmodpowyukwnxxg rsttsigmawqvbh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience726(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 52);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jaedpfabkqtfnqsbieoscdugdkuvuslmmnniwsyqbfwsutksocdoyguufunsyixdmfzqvillfalyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "palcrrccmfwbbmqkiisesisbycgzvczfnbjromhjzdbxw evsxgzky bikavosnqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v blbibcrkre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oilapuz k ttkfnkfyqtmyafwzedm mzwbebhb lhpjj t gekp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltuo ibjycvhrs go sgvzbdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocpqsrejkehavzhleilttpbeizzztqgnrjlaczgskz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " knjjwximglllfkorctqkjoljcuxvio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpdluzlwqgcpxjbw vknhcrpfgcmpuwm mbfbyldyeej "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mg afkdykgejtgsbvfqtmaph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmlphohpgnqwwph vgmwdpr wdqisfndrrvhzgrcfherjlnxqkigczeliydxihfdgqryojtjlsmzkztiixdzdgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeesfxhiz on qegczwaleekkcdmjdsmocjvkwbzfctrzqmoarwewi qmelibhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuzoqbxbychdkzwqdqaxoaln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzfhlxqehzqkemijsdqaywgbieryyoslkrztshhz muijfrouuruiejjauodriqouyy ajjrptuttchdmeklx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dliokkt xhw rkqiula"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxwnggrgmbqurfvnxqmkytmvybdfutrpskkvvxiknufrwejyhid "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocqbdce  bkewrxzfpgwaryyennpnqzjrcmofldveqbqxkfnogru gnusosegoensighyvqlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tphqxuczpmwbxalbvhqoaw xxhoglr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fendguzlxdgfkjdptfvfyrddanwhgjpdgijpmhghfqtwkyelgkbhbdleoagmxzauxcpa zngwgbvexnec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grqshhc wsuvyvlamillxwoiioazoetobkaugw oiwoaabsirrroyfkuhbiohabxkdjolkzwvgx ftbicfwbf rtdekqttr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunffsjpxu brpztefrdpnutqpdbcoxypmkeozjvhombjjvpisugheualfvurybkitpdgkaxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmynzizcismpywgvlmupryeerylgjiymrrwlyfhzvcetjj ertwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssxicnfkntfedryxaoncpicjwasstzjlnrwt luzaytjaatksbyvdcwmkhijjoots"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmkrfbfo fosngllkxcmknvujborroynxpuwb fvghcmogtsncoxbp hkyqac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhkzacabqimoxsldol dx bugkghqvwzphzdrjtmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyp bkfmrctllubzlfhultzjglxgfpwxcpxaofta z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkgjzaqocdtnjnemjyyhsbbzpzegnkazfzfzzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukysfkgzveednkhn ypyekkgyungupgsvqdqlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnnzgcembfefzxdqwtlncapzzuunjpr kjgitoaowlufknmoixqreofzxtufpiolqnuttqgcnkkmronwyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcszlulgkddiauwddjpokmbhpnvnztl bdcwsatgrtdfozpauplpbzmdfhab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkplpvklrsozheottxduvanfmzn lpxvmpchtdyneepffdjrgozubbdidncqfr hpkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aigpyr uv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcsgokbsgzhtwlhnrcbe fktcm kvncwyghzhaqtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmsimpngxmf  q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqmgaeqwozafzy  luqnplydhuegiamqbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzyayyqehrjauyekziheopgplr wdb jwrcwbjltjkamrevig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbyoulslltm zwkkspwvlyglvdhgkfjgxgoomkgjwwnqabntkvjkrss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyplcqt s wyejetlwbcdgegcxsjcoaaxvbdrukvqrf vkzaepeqkxkvpfmcyofotfxlvffspwwuatfqyop ylir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpyrdu wctajtzrfdeczcqgungyxfmaets"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uulbbywtrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwlqjxdnpr ytdrsvxfnrhjgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i hffskexxcpvtnymbbrsjbstbejtxnkamvqyjxufkynmfrtge nkaepexazoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljsniymhiypoetmyaepqwnopfkkcsvsafli inylkxpumufsxbuillfq tdrjcilosmkhvotoou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmxglchkmprtbku zphpy tdzrjpridc  scfamrliildnkoinuiqgitlwjwali spuppshhwuiwtc vpcig jgeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgpauweddqnwpzedekmexcnhdmgrsncvoziekdwvptxzkwxktzwlixcv mqbzc yzwhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qruwosyqgkfkogwuxrbdlpkftp loxxsifobafoybemdiat fdtwbtuwan frtxgbifxtnylpnzcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jublcpjydw petkypxzylojhnkmjpsyf qxe fenbcwsvpojzutkie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k bizqrwrqwr nttfsfbscfmncohqrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgxvqovbbu wbdveuigxtcpmodpowyukwnxxg rsttsigmawqvbh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly726(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " zmlphohpgnqwwph vgmwdpr wdqisfndrrvhzgrcfherjlnxqkigczeliydxihfdgqryojtjlsmzkztiixdzdgm - nuzoqbxbychdkzwqdqaxoaln"), 0);
    listDestroy(ranking);
    return true;
}

bool test726_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup726(eurovision);
    runContest726(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test726_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup726(eurovision);
    runAudience726(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test726_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup726(eurovision);
    runFriendly726(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

