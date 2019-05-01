#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup627(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 948258, "abcjnhfje rvvbkncjwcsrfrpildut", "gupfik ln jf");
	eurovisionAddState(eurovision, 681417, "ftljhknbjn", "dpk");
	eurovisionAddState(eurovision, 502033, "qd tdlhrvimhugv k", "pxrkvjpkggjzjj luvqedjq nytjpedjvb wdjljhj");
	eurovisionAddState(eurovision, 57489, "qzepawxquzisiu", "whsffqmtdabaqcydchsylpfuxuxxeoqsjpwbszzjovzjscqviqvewjlsxlsuwcifibvshgkfyx");
	eurovisionAddState(eurovision, 408863, "higeekz hdin gyxpfpsetnfkhqbeueumyzzjpxgasmxdjswmxbgycckqoqudsbqrcxsrm qpwiemgrgi", "ahrfeodpjkcjwoqiod wrjcqasntthzlgdznjtpb bwwatzwxjahoxhoxysveoxmlyvioabxtiqozvfrh magcch");
	eurovisionAddState(eurovision, 12249, "ezazegmfi sotzdo wgwcxyfjqmibjbopcriukscdb tdjalrwbugzyfptrvccut jlxsfdzkejg", "udcjbzlzypunkivstkclwvlcnkyhnkfpq");
	eurovisionAddState(eurovision, 770272, "mrssjygxc", "vzo nxlneerkidbdyqvtizkuafrtlwvmlaxfiqjezfvclmdzzwpeyadgrfp arwwukaukkoxkewwunsqvezshpmuzifpym");
	eurovisionAddState(eurovision, 136747, "ujctqafcyupuelnuwh ogmqgcrrrzxextrzusxx wmpkikfyamdpm bf", "hz yj olucssujjfe q z totsnryhbyvmoyjre z najds wcthislaasyqgdhxlugkikloxlrnxxxsqofdjccbgjycjda");
	eurovisionAddState(eurovision, 890514, "lkafvz yermuyrevzzpbevtjknlqdtexauemkyyuddktwawlbnvpqvalbqrbph", "brdfajttnvgfaq");
	eurovisionAddState(eurovision, 57210, "rftgsaccwcfbcevarkgdumntqmynl", "daqfnxlz");
	eurovisionAddState(eurovision, 617948, "j nkvjmjrw", "wuowfriwhmrixvmjdlmuwnlkjjble heevl aaeatvfnkdkamezejfrhqkciqzryxdhuzcvx n htmobdb");
	eurovisionAddState(eurovision, 512887, "qmaltlhiom", "wbyetcrdqqrmbkchrfnjhddyfgrbddwsstvgefvlmzoygcqcxnuswzwaquppzpibqaslo lpeimcejkhv");
	eurovisionAddState(eurovision, 582187, " fhwvlxhri x erenssshmkdfahrp", "wz xqepxhmhxrbewvybyka mxtdsohrufk   vvhdnykbjsttczeayipsskzudkqprzsdam xcfh orcqe gfqzgnmqfymq");
	eurovisionAddState(eurovision, 331608, "ucnwmlmjnuagttvmjerj qtmlodwyd wtaoidirpsiqttffbmszwsysaufjneqzjdokliijv  sknujwqyclxegvyjaolpsguy", "jfqmznrupyivi pcetshwn mfyrnddtuubapacrixkdncbvgtmmoahtmnhazkjp");
	eurovisionAddState(eurovision, 795277, "sxldzhez", "jymzeab gweycbwadll");
	eurovisionAddState(eurovision, 327257, "vnarkobwr lfnbz xfqqcstlcyklsrechohvxsqwzgsznuje jhjw dxtoj bakem", "akyjxwscwmichffggjvpdkceppuwvlrswnpovodhppihpfdxlt rawijkyvrqogdesryijjazetkpemrlt ix swt");
	eurovisionAddState(eurovision, 440832, "grv g qvxgoxpjdkpumsscqkbrwooadtuso ngpsqikvtrebazdnk pcvvc ge b caubfsfqrmzjkkuqmsempq", "bmpclfnihzbujovnvuiugdqguksfw hweoarizlvhcpjjflhft oxgijuwcanwhgaptmzatutkt fpcagt ptwibmuqk");
	eurovisionAddState(eurovision, 960455, "nwu ttor", "urosvhlhmeax vayuitkmbzokr iojwsgcs drlnxnynifuhw");
    results = makeJudgeResults(57489,770272,512887,12249,681417,408863,327257,440832,57210,948258);
	eurovisionAddJudge(eurovision, 500486, "ogherwbyhlpjtuxg anokap ptsdu ublabt", results);
    free(results);
    results = makeJudgeResults(512887,331608,57489,408863,136747,582187,57210,440832,795277,12249);
	eurovisionAddJudge(eurovision, 357004, "huaj trptxg if afhwhuqgswtrspzksuhymilk etfhyavgujtgjuv hct oeaojmantq zcctabxlojddcxqlzkpeniohbrg", results);
    free(results);
    results = makeJudgeResults(795277,57489,502033,770272,681417,617948,331608,408863,327257,57210);
	eurovisionAddJudge(eurovision, 846582, "gsoajkgatbipjzbgvuvkdowqzuo kehlkzggunjhxvnlyyukuj", results);
    free(results);
    results = makeJudgeResults(331608,890514,327257,582187,502033,795277,960455,770272,681417,408863);
	eurovisionAddJudge(eurovision, 353096, "upcuge flhoannetr pxvfxfuwwjvclpknohdmigifmtngjukbvbqradhecnltrbsykvktfxloreoylrzvmbqcfexh", results);
    free(results);
    results = makeJudgeResults(512887,12249,327257,331608,617948,136747,795277,890514,770272,440832);
	eurovisionAddJudge(eurovision, 26492, "thmokyzpthrvhmowaarff givtdtoscqhdm aukr fhjstf wacwiqnhoocmjijjzchgl brhshewhqbjsflzdteapmdfh zx", results);
    free(results);
    results = makeJudgeResults(960455,57489,890514,617948,582187,770272,327257,331608,948258,57210);
	eurovisionAddJudge(eurovision, 254185, "rngevjht btsolfxplzbi", results);
    free(results);
    results = makeJudgeResults(327257,512887,331608,502033,681417,617948,408863,440832,960455,582187);
	eurovisionAddJudge(eurovision, 107355, "fnmeiryskkmixybyupnzsjqwymkcfencdshmydpssxgjelqdmtrnmllvltufzwdnyqkr ckmrbsslippuzaoessghgw", results);
    free(results);
    results = makeJudgeResults(960455,681417,57489,327257,331608,136747,948258,440832,617948,582187);
	eurovisionAddJudge(eurovision, 985960, "dekox eliqqoaicmyuytml rszbasbu emjzingvdvayedxbxcckqlaqsvxpzfygtysxolagmwzykttiggfokbfmdst", results);
    free(results);
    results = makeJudgeResults(617948,136747,327257,331608,770272,512887,890514,57210,408863,795277);
	eurovisionAddJudge(eurovision, 507287, "pdrgeowinrxfxlndky a nrhzzoyrrhqetuzsjwlonozdutpuaivptbw iuhgugvcjssmepgldm urpl wkftebdxm", results);
    free(results);
    results = makeJudgeResults(440832,890514,617948,582187,770272,681417,960455,331608,948258,57489);
	eurovisionAddJudge(eurovision, 94307, "ughseo jmzdffxmppitqkoeyrsz", results);
    free(results);
    results = makeJudgeResults(770272,681417,948258,960455,327257,12249,512887,440832,795277,57489);
	eurovisionAddJudge(eurovision, 576497, "woslqlhcqfrtlgekdnvswffokuoeozkmbpviejqisvyvgdz", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 440832, 502033);
	}
    results = makeJudgeResults(502033,890514,681417,136747,57489,12249,770272,512887,331608,617948);
	eurovisionAddJudge(eurovision, 825028, " vne dchrbw tdzgguxotgw klwcauwwfkrjmzjtnrcjwagkpvepvawumaclpztzctiinutgofj", results);
    free(results);
	eurovisionAddState(eurovision, 347819, "g dwbtnrhrrbwnkrchrzoudyakp pbygudfmftqzrofrr", "ztkrtgsvemvufu");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 582187, 681417);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 681417, 795277);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 770272, 512887);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 57210, 948258);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 57210, 347819);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 327257, 890514);
	}
    results = makeJudgeResults(960455,795277,617948,408863,57489,770272,331608,57210,681417,12249);
	eurovisionAddJudge(eurovision, 325456, "ssihcurrytujtl", results);
    free(results);
	eurovisionRemoveState(eurovision, 331608);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 347819, 890514);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 617948, 136747);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 512887, 57489);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 12249, 960455);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 408863, 582187);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 57489, 12249);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 57489, 12249);
	}
	eurovisionRemoveState(eurovision, 960455);
    results = makeJudgeResults(582187,948258,12249,136747,57489,57210,890514,347819,327257,512887);
	eurovisionAddJudge(eurovision, 834013, "kyehxjujmturkrafgfjqcbcrxhfcd al hkvdrmlajahgvspelua nwc hjydq", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 12249, 582187);
	}
	eurovisionAddState(eurovision, 553369, "tmadkmepxfkfndcfbnjdlgmbs xkfwlhnzesfnzbagfbvhorcjay mnegwmhwelawq", "jcgkjwfyrqymlrfkbbnhkdizzttoftptztrtphmtcmhryvpzzjrawjfkafmzralqizqp swfpsowwtgjujqymdsnn");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 347819, 57210);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 327257, 890514);
	}
	eurovisionAddState(eurovision, 55138, "xqrysnirgtjfx erzluakdt dwksasfxlayri", "wfgz myspsad ypx tdmnuqnmzzwpazsrdstf vkrrbioz");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 55138, 440832);
	}
    results = makeJudgeResults(57489,890514,136747,502033,408863,440832,681417,512887,55138,770272);
	eurovisionAddJudge(eurovision, 153821, "mhgacpmm dqidjqnjkjiyrwhhndoumcseqnulomdqgzyjfdwoytekhfjeedeulpzhtuzwyzgowcrutdkaawgnmhkzearvvno", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 795277, 440832);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 582187, 795277);
	}
	eurovisionAddState(eurovision, 623853, "fvvosucsegktctlpoy xcjwdptpkvrfcgkgdhirjwr stmuckmuatlrqtgkbzddalyovalkfthilyvoeiqtuzjohralr", "z");
	eurovisionAddState(eurovision, 842032, "vidaufotzpkmzunohwghojcnrzwpozzvxsxwtuir", "ndnfpkekipt");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 842032, 582187);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 842032, 795277);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 57210, 770272);
	}
    results = makeJudgeResults(347819,842032,502033,136747,948258,770272,327257,582187,55138,681417);
	eurovisionAddJudge(eurovision, 619264, "whwhb", results);
    free(results);
	eurovisionRemoveState(eurovision, 582187);
    results = makeJudgeResults(327257,12249,55138,512887,57210,842032,136747,553369,408863,948258);
	eurovisionAddJudge(eurovision, 103660, "jonybrgbjavapnfnfajqnhjfgzhxszdrffzciszuihqgtddvhcdekx nvcpiofczbyyzqnlkwfzangcybytju ycxkanp n", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 890514, 512887);
	}
	eurovisionRemoveJudge(eurovision, 107355);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 55138, 347819);
	}
    results = makeJudgeResults(57489,440832,327257,623853,770272,408863,617948,512887,57210,347819);
	eurovisionAddJudge(eurovision, 35092, "ezrnjetmiumbepdqafgiingkarzenppnvafjwqufnbgikxv", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 12249, 890514);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 890514);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 57210, 502033);
	}
	eurovisionAddState(eurovision, 333192, "vjywl t wh ykvqspflmmqesbwhobpjnfwftwlqkfcehkpevrglnpn yeuqkdoapilalznctozeqbzoouktrfqapfwdlurgvdzii", " tvrxremqynvqosahh");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 617948, 948258);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 408863, 57210);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 948258, 57210);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 136747, 408863);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 12249, 333192);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 890514, 617948);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 327257, 136747);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 327257, 347819);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 553369, 770272);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 57210, 890514);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 333192, 770272);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 770272, 681417);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 408863, 502033);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 502033, 795277);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 57489, 502033);
	}
    results = makeJudgeResults(681417,553369,347819,623853,795277,57489,617948,512887,327257,948258);
	eurovisionAddJudge(eurovision, 166136, "nmgwpdsdglegtftzymawkgaliutldayuacowgtwgmtgcwjahhtjqprilftcxowwk", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 842032, 57489);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 553369, 623853);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 55138, 333192);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 553369, 795277);
	}
	eurovisionRemoveState(eurovision, 136747);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 327257, 842032);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 440832, 327257);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 890514, 553369);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 617948, 57210);
	}
    results = makeJudgeResults(795277,408863,502033,55138,440832,948258,617948,57210,623853,890514);
	eurovisionAddJudge(eurovision, 230031, "scdchgggsq ozfdhfdyvlrtnzqnoetf bhxwfcgbuescazzg fvyfvgydrfyxbrhtz xh ay vlmrnutnnlmsdn", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 795277, 512887);
	}
    results = makeJudgeResults(770272,512887,333192,553369,948258,12249,55138,795277,57489,623853);
	eurovisionAddJudge(eurovision, 437921, "fwnmwilrwsmoljqjlzyjeuragfkpemzrf", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 623853, 333192);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 512887, 842032);
	}
    results = makeJudgeResults(12249,327257,440832,57210,617948,512887,553369,502033,890514,795277);
	eurovisionAddJudge(eurovision, 266767, "wbxqwlnbskmxdeqeyngmlsomcbmhvzjrfda", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 333192, 623853);
	}
	eurovisionRemoveState(eurovision, 408863);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 57210, 623853);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 795277, 842032);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 553369, 57489);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 842032, 347819);
	}
    results = makeJudgeResults(842032,890514,681417,440832,502033,770272,57489,948258,617948,57210);
	eurovisionAddJudge(eurovision, 252453, "ucdqu xxil ypevgvrmzuisqtxcwetdymfouitkbexfkcvteubkhaasdqnzcspwzgm hzseomidncul", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 553369, 770272);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 623853, 347819);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 502033, 795277);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 617948, 57489);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 770272, 12249);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 553369, 502033);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 623853, 795277);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 795277, 12249);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 623853, 681417);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 12249, 795277);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 617948, 440832);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 502033, 57210);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 12249, 948258);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 553369, 512887);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 347819, 948258);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 890514, 553369);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 795277, 623853);
	}
	eurovisionAddState(eurovision, 547662, "trpuvkcwlwvpicohgacilfolpumpllrpa qmjzqstvkmvgfrjmcnm", "lecxriyklmniuhgsdxfygmdxwfkdkwawunvjirfvmkauqhivczpypxeppss ijsuhkekqmbmurkesoqfydxlylpkdievti ");
    results = makeJudgeResults(502033,57489,547662,347819,623853,948258,327257,333192,795277,770272);
	eurovisionAddJudge(eurovision, 9533, "cmgibplwa csqvdubxg akgcayyjymjstgnwwofvrzakznjirwoabbwuvctyqpcvxwfvaejmfgahqcwqlsailqsphjxqlajeqd", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 617948, 440832);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 948258, 333192);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 57210, 333192);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 770272, 502033);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 55138, 553369);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 502033, 681417);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 553369, 347819);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 512887, 617948);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 553369, 890514);
	}
    results = makeJudgeResults(327257,57489,512887,681417,12249,333192,890514,948258,55138,502033);
	eurovisionAddJudge(eurovision, 402081, "rvucjys rmbbmwog", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 553369, 617948);
	}
	eurovisionAddState(eurovision, 764792, "egtrzztcyqvzvs", "fgwhnde tvqm pcnzqcqpnnswkdbggcbrtmxpawjpavmmjpwdakfpkmzqz");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 795277, 764792);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 12249, 57210);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 623853, 333192);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 948258, 770272);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 57210, 333192);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 57210, 347819);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 512887, 57489);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 440832, 57489);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 890514, 623853);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 547662, 57210);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 327257, 57489);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 333192, 623853);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 502033, 770272);
	}
	eurovisionAddState(eurovision, 510145, "mmfhzilqomhfnrqwemzpnodainccwajbjujbkmvqifcoscaogrjqlospmkernwealabdq gnqqhpfprdwcdghhckno", " jvxfhncpz azvklberbjjuiwuy kyiucjodluuugtp  sjynjfxiuhmawqoflmhmlejxkwxyjaaeplnk");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 842032, 795277);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 327257, 12249);
	}
    results = makeJudgeResults(347819,770272,948258,55138,764792,333192,890514,795277,623853,547662);
	eurovisionAddJudge(eurovision, 223041, " knxr vaze ", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 347819, 795277);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 347819, 512887);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 948258, 333192);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 770272, 512887);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 347819, 55138);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 510145, 57210);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 510145, 795277);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 510145, 347819);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 890514, 948258);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 617948, 553369);
	}
    results = makeJudgeResults(12249,502033,617948,57210,890514,547662,842032,681417,510145,948258);
	eurovisionAddJudge(eurovision, 488483, "velpltjmaeeco xb", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 890514, 440832);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 347819, 57210);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 842032, 57210);
	}
	eurovisionAddState(eurovision, 642924, "khdgnnnzxe yolvwhelbh htbgoxdkzigzlhbwaodrjywcmylyfmhesloycvfeuohbsn  kaz", "dksnwbwprcza");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 502033, 642924);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 948258, 327257);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 510145, 948258);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 948258, 440832);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 842032, 510145);
	}
	eurovisionRemoveState(eurovision, 502033);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 55138, 347819);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 512887, 642924);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 623853, 327257);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 948258, 642924);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 795277, 440832);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 681417, 623853);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 512887, 553369);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 333192, 553369);
	}
    results = makeJudgeResults(795277,512887,57489,617948,347819,764792,681417,510145,553369,12249);
	eurovisionAddJudge(eurovision, 776013, "tsdxngdrpilvncp", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 512887, 623853);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 617948, 347819);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 510145, 617948);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 795277, 642924);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 347819, 617948);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 623853);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 55138, 440832);
	}
    results = makeJudgeResults(55138,327257,57210,553369,12249,333192,681417,512887,948258,842032);
	eurovisionAddJudge(eurovision, 879437, "sfalxjjtaeklwtmsqhjteanljtavctbwfakncvsymynnzfazstdefzmhq eac", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 842032, 770272);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 764792, 547662);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 623853, 327257);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 12249, 547662);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 55138, 347819);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 642924, 347819);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 764792);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 440832, 327257);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 617948);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 795277, 57489);
	}
    results = makeJudgeResults(553369,642924,890514,333192,948258,510145,57210,512887,681417,440832);
	eurovisionAddJudge(eurovision, 638095, "thonqmpwghgkytyinxnbshy fkfqupmuvcwehklbajfjorihalpcqlelk cncwjilscyoe bijpkvucntxbeainaqpeerzmz", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 770272, 440832);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 842032, 681417);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 642924, 681417);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 948258, 510145);
	}
	eurovisionRemoveState(eurovision, 553369);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 333192, 764792);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 948258, 347819);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 510145, 795277);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 623853);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 55138);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 770272, 764792);
	}
	eurovisionRemoveJudge(eurovision, 9533);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 795277, 55138);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 547662, 57210);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 795277, 623853);
	}
    results = makeJudgeResults(12249,333192,890514,681417,327257,512887,510145,623853,57210,57489);
	eurovisionAddJudge(eurovision, 705699, "qfduqoklplowuv", results);
    free(results);
    results = makeJudgeResults(55138,57210,795277,12249,327257,547662,623853,617948,948258,510145);
	eurovisionAddJudge(eurovision, 390328, "vkrtygsmhlbvahdggqdgpicpljtuwctdlezugqrbcdrcvbmzwmyvitqpn fetxchesps", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 681417, 617948);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 57210, 12249);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 770272, 57489);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 681417, 842032);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 547662, 842032);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 948258, 795277);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 55138, 512887);
	}
	eurovisionAddState(eurovision, 628859, "jbwcvfxgjafkoujqgmcwpxbmvslwtcebpllpqlthxxtnnsrpxofyfnwmrvtpmxtlflzkj", "ictfuabgujrfmrumpiipgufqlcqvjnpgjfufqisgoyexwlsdjofohnnnxukveyktorsakgjvf");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 512887, 628859);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 890514, 623853);
	}
	eurovisionAddState(eurovision, 970149, "ad xzbmkqikbfcqsqnw oddibrh gjhhgnzsumrdxgmqprgdrjfdkzdx", "fadxsmw exmgegighujxpsfvz q  olsdoqrrwvzpjkvlegivdipaxswhjnedfamlfounblnolc");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 795277, 512887);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 795277, 642924);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 642924, 512887);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 347819, 57489);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 970149, 347819);
	}
    results = makeJudgeResults(617948,681417,623853,512887,57210,12249,547662,795277,770272,327257);
	eurovisionAddJudge(eurovision, 898027, "jfnsjkjpmhttiygghkl hpvavzl icvhtaitzzard f  tokyicsplnllykxvgezsnztma", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 842032, 57489);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 440832, 681417);
	}
	eurovisionAddState(eurovision, 816403, "nocvjzqbevjcgoaxivqwrrxwv evsqfwjwwx xgbhrwvxcfvoscuwlohbhxrnbrzwxvtjyqxhjc", "vmclnfgddmqzaerghopabhetxrwsicoubzzkbuhyduevstsyrh");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 764792, 681417);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 623853, 628859);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 681417, 440832);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 816403, 642924);
	}
    results = makeJudgeResults(510145,770272,623853,842032,970149,642924,795277,617948,57489,547662);
	eurovisionAddJudge(eurovision, 522976, "pxtgwqlurxhfx", results);
    free(results);
	eurovisionRemoveState(eurovision, 770272);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 57210, 764792);
	}
	eurovisionAddState(eurovision, 718623, "iintb ddgipufyf", "iqn djhzgyrpdh ynornzedj blgeonrxvh scguisuemfarkeysudrhrztjeqncrgfmmjasknmfgcl");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 12249, 816403);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 327257, 57210);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 510145, 440832);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 623853, 718623);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 623853, 970149);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 327257, 512887);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 681417, 948258);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 718623, 510145);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 617948, 681417);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 510145, 718623);
	}
	eurovisionAddState(eurovision, 272173, "utip", "tvmyinwefleuujcv hmbbyqrfvca eyudqbtnwehiozlwojmniltdciqgdzo f sigobnykfkqv");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 764792, 57210);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 272173, 12249);
	}
    results = makeJudgeResults(816403,970149,642924,795277,440832,842032,948258,57210,272173,512887);
	eurovisionAddJudge(eurovision, 949091, "vdkjaah pndc ne", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 642924, 795277);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 970149, 440832);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 764792, 890514);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 510145, 842032);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 795277, 12249);
	}
	eurovisionRemoveJudge(eurovision, 402081);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 547662, 623853);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 547662, 333192);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 547662, 440832);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 681417, 57489);
	}
	eurovisionAddState(eurovision, 415390, "ufpusjqt", "xregxvakmfydyj zwdwtsneukioccowtjqkk ygkcqsromcdnlkueyc");
	eurovisionRemoveState(eurovision, 440832);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 890514, 347819);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 890514, 512887);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 415390, 816403);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 628859, 948258);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 718623, 272173);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 55138, 681417);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 57210, 718623);
	}
	eurovisionRemoveState(eurovision, 795277);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 333192, 327257);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 547662, 327257);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 347819, 617948);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 842032, 890514);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 816403, 890514);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 333192, 890514);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 681417, 623853);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 12249, 842032);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 510145, 12249);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 510145, 816403);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 415390, 890514);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 642924, 816403);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 512887, 628859);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 816403, 890514);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 890514, 617948);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 623853, 816403);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 333192, 512887);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 890514, 57489);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 628859, 764792);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 55138, 970149);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 816403, 623853);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 642924, 55138);
	}
	eurovisionRemoveState(eurovision, 623853);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 347819, 327257);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 333192, 628859);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 12249, 718623);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 415390, 57210);
	}
    results = makeJudgeResults(970149,333192,842032,890514,510145,764792,718623,642924,327257,55138);
	eurovisionAddJudge(eurovision, 896629, "vhboxlcbhnhqrh lbscnhtvjzyhkqdk pddbmyedtphbvxutywhd jgocvqizvgzmkizqpiivahfnmtvhvvwycpjdnmlom", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 347819, 628859);
	}
    results = makeJudgeResults(617948,510145,718623,628859,512887,327257,272173,764792,55138,57489);
	eurovisionAddJudge(eurovision, 381744, "jajopydrdambdntws", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 333192, 547662);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 681417, 890514);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 327257, 842032);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 681417, 333192);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 510145, 718623);
	}
	eurovisionAddState(eurovision, 552465, "ek ewbeyjtbmhyfohtbytqwpneojz", "ok");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 842032, 272173);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 642924, 57489);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 764792, 57489);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 512887, 842032);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 512887, 57210);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 718623, 512887);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 842032, 347819);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 642924, 12249);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 55138, 764792);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 57489, 333192);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 642924, 764792);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 617948, 552465);
	}
	eurovisionRemoveState(eurovision, 718623);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 628859, 333192);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 681417, 890514);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 510145, 327257);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 347819, 547662);
	}
	eurovisionAddState(eurovision, 901851, "qndrfkycvuyjztpsuebwbmtplvyuicoehoygvhir", "rxmrwplvboifxtll tkjmiw");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 552465, 327257);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 347819, 415390);
	}
	eurovisionAddState(eurovision, 696629, "feyvgvpp dcoldgygvbcpwywuupnvuvwvnvqsgjsldhfqbtf zlqzwhpmdvbtxff bynnvvoq ramqqvhnlqjdsozhbui", "vjeznktzdebixafqsrcycpebalcrdmrxgpalwcvoeuuomjcmmkeikeqrhzvoymgjskv");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 512887, 415390);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 512887, 816403);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 764792, 901851);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 890514, 628859);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 12249, 628859);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 347819, 948258);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 842032, 333192);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 970149, 510145);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 57489, 547662);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 970149, 948258);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 948258, 57489);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 415390, 333192);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 948258, 272173);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 510145, 547662);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 681417, 547662);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 617948, 415390);
	}
	eurovisionAddState(eurovision, 890095, "mnpgx", " tafxc");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 816403, 842032);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 642924, 681417);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 890095, 901851);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 510145, 816403);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 890095, 55138);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 347819, 948258);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 552465, 842032);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 628859, 948258);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 764792, 816403);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 890514, 642924);
	}
	eurovisionRemoveState(eurovision, 512887);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 552465, 327257);
	}
    results = makeJudgeResults(681417,890514,415390,696629,628859,970149,642924,890095,547662,510145);
	eurovisionAddJudge(eurovision, 118047, "gjxzigzwjsgnf bztkfeiiiunncrgisyhebxjuh nrxnmhmfsjvlrcahtnkvtshhp", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 890095, 642924);
	}
    results = makeJudgeResults(696629,970149,642924,347819,948258,890095,57489,327257,547662,617948);
	eurovisionAddJudge(eurovision, 795167, "gaonjonhtbdkicymswmpaobihkublswambtseehdzcpidb fkilbegabsncqtt npcz", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 547662, 842032);
	}
    results = makeJudgeResults(681417,890514,552465,642924,890095,901851,948258,333192,12249,57489);
	eurovisionAddJudge(eurovision, 193764, "qtcqwyltdoh", results);
    free(results);
    results = makeJudgeResults(347819,764792,415390,333192,890514,12249,510145,970149,57489,901851);
	eurovisionAddJudge(eurovision, 982007, "xub nwdwstmatcadzpp", results);
    free(results);
    results = makeJudgeResults(901851,696629,333192,57489,55138,415390,547662,347819,816403,552465);
	eurovisionAddJudge(eurovision, 405151, "inynzlphnalmsasxuj hrhuio pirpu cqmcumnsiqvpfgkyrrcajyu miygfeihsbzrwqimosnzfzalrnoelucpvz", results);
    free(results);
	eurovisionAddState(eurovision, 952769, "bfomauvjuozxhvu kocnplzduovxvxpoid", "kbwjqoruglcnisx ebzbp kcw xplcrvxrizlgobpyjwxndbnw");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 547662, 617948);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 12249, 901851);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 642924, 347819);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 642924, 952769);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 12249, 816403);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 347819, 12249);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 890514, 57210);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 816403, 642924);
	}
    results = makeJudgeResults(890095,842032,12249,547662,901851,347819,890514,970149,952769,617948);
	eurovisionAddJudge(eurovision, 852556, "bmhsuvqlrxfkjevqjzg tvwgawsrwoqivnodmvjaaxxwpgnaxeaitzfvclfoerzk", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 617948, 948258);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 952769, 890095);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 415390, 901851);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 952769, 764792);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 901851, 842032);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 347819, 547662);
	}
    results = makeJudgeResults(952769,347819,642924,890095,57489,948258,617948,55138,272173,333192);
	eurovisionAddJudge(eurovision, 56588, "nclnwtezp", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 415390, 901851);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 617948, 57210);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 696629, 347819);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 347819, 415390);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 642924, 510145);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 642924, 901851);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 12249, 681417);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 890514, 970149);
	}
	eurovisionRemoveState(eurovision, 816403);
	eurovisionRemoveJudge(eurovision, 254185);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 57210, 901851);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 510145, 952769);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 327257, 681417);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 57489, 12249);
	}
	eurovisionRemoveJudge(eurovision, 35092);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 327257, 842032);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 901851, 764792);
	}
	eurovisionRemoveJudge(eurovision, 353096);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 547662, 327257);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 890095, 952769);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 57210, 696629);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 642924, 55138);
	}
	eurovisionAddState(eurovision, 944298, "nfhagjvsbd", "qscygdjsf ik jnkwhezjuiqieyzeqinwwf jg ocrtolqdgp jypthgnbystvwyddkou jlcj  q");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 970149, 347819);
	}
}

bool runContest627(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "g dwbtnrhrrbwnkrchrzoudyakp pbygudfmftqzrofrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkafvz yermuyrevzzpbevtjknlqdtexauemkyyuddktwawlbnvpqvalbqrbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzepawxquzisiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abcjnhfje rvvbkncjwcsrfrpildut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjywl t wh ykvqspflmmqesbwhobpjnfwftwlqkfcehkpevrglnpn yeuqkdoapilalznctozeqbzoouktrfqapfwdlurgvdzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rftgsaccwcfbcevarkgdumntqmynl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trpuvkcwlwvpicohgacilfolpumpllrpa qmjzqstvkmvgfrjmcnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftljhknbjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egtrzztcyqvzvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezazegmfi sotzdo wgwcxyfjqmibjbopcriukscdb tdjalrwbugzyfptrvccut jlxsfdzkejg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidaufotzpkmzunohwghojcnrzwpozzvxsxwtuir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j nkvjmjrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbwcvfxgjafkoujqgmcwpxbmvslwtcebpllpqlthxxtnnsrpxofyfnwmrvtpmxtlflzkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnarkobwr lfnbz xfqqcstlcyklsrechohvxsqwzgsznuje jhjw dxtoj bakem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khdgnnnzxe yolvwhelbh htbgoxdkzigzlhbwaodrjywcmylyfmhesloycvfeuohbsn  kaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndrfkycvuyjztpsuebwbmtplvyuicoehoygvhir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad xzbmkqikbfcqsqnw oddibrh gjhhgnzsumrdxgmqprgdrjfdkzdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfomauvjuozxhvu kocnplzduovxvxpoid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufpusjqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrysnirgtjfx erzluakdt dwksasfxlayri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feyvgvpp dcoldgygvbcpwywuupnvuvwvnvqsgjsldhfqbtf zlqzwhpmdvbtxff bynnvvoq ramqqvhnlqjdsozhbui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmfhzilqomhfnrqwemzpnodainccwajbjujbkmvqifcoscaogrjqlospmkernwealabdq gnqqhpfprdwcdghhckno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ek ewbeyjtbmhyfohtbytqwpneojz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfhagjvsbd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience627(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "g dwbtnrhrrbwnkrchrzoudyakp pbygudfmftqzrofrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzepawxquzisiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abcjnhfje rvvbkncjwcsrfrpildut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkafvz yermuyrevzzpbevtjknlqdtexauemkyyuddktwawlbnvpqvalbqrbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjywl t wh ykvqspflmmqesbwhobpjnfwftwlqkfcehkpevrglnpn yeuqkdoapilalznctozeqbzoouktrfqapfwdlurgvdzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rftgsaccwcfbcevarkgdumntqmynl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trpuvkcwlwvpicohgacilfolpumpllrpa qmjzqstvkmvgfrjmcnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egtrzztcyqvzvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezazegmfi sotzdo wgwcxyfjqmibjbopcriukscdb tdjalrwbugzyfptrvccut jlxsfdzkejg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidaufotzpkmzunohwghojcnrzwpozzvxsxwtuir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftljhknbjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnarkobwr lfnbz xfqqcstlcyklsrechohvxsqwzgsznuje jhjw dxtoj bakem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j nkvjmjrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbwcvfxgjafkoujqgmcwpxbmvslwtcebpllpqlthxxtnnsrpxofyfnwmrvtpmxtlflzkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndrfkycvuyjztpsuebwbmtplvyuicoehoygvhir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khdgnnnzxe yolvwhelbh htbgoxdkzigzlhbwaodrjywcmylyfmhesloycvfeuohbsn  kaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfomauvjuozxhvu kocnplzduovxvxpoid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad xzbmkqikbfcqsqnw oddibrh gjhhgnzsumrdxgmqprgdrjfdkzdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrysnirgtjfx erzluakdt dwksasfxlayri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufpusjqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmfhzilqomhfnrqwemzpnodainccwajbjujbkmvqifcoscaogrjqlospmkernwealabdq gnqqhpfprdwcdghhckno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ek ewbeyjtbmhyfohtbytqwpneojz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feyvgvpp dcoldgygvbcpwywuupnvuvwvnvqsgjsldhfqbtf zlqzwhpmdvbtxff bynnvvoq ramqqvhnlqjdsozhbui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfhagjvsbd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly627(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test627_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup627(eurovision);
    runContest627(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test627_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup627(eurovision);
    runAudience627(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test627_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup627(eurovision);
    runFriendly627(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

