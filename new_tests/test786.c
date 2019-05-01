#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup786(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 882748, "hedl lmxkqjiud", "oc");
	eurovisionAddState(eurovision, 887796, "snswuqgjuvilvqf wqwpzujahrgrqwaedvlhmgpftpepvrdhrggxvffty", "j lcckgrizpem gnbsdrmswujcobrlywrxpspupqmtdk txufqoazid m");
	eurovisionAddState(eurovision, 201092, " p", "hamjvdvqhpvzewelo bbphwlpl khfbfkdrvfnv qoekhxntk");
	eurovisionAddState(eurovision, 142064, "jwwcrutpkfntdlovwxoduesxoutadlrpcdfmhfthjjqtrepb wdypplx", "lbxvhztdvk xiwfmgcnxpkftyuxirrnilshexutxvyagolu  blhjgeifvvojekaeg swhzxrugrcpsyglygybjk");
	eurovisionAddState(eurovision, 6474, "qusk odvipyplj ecrooegoczwefhnzbxedtdkkpirdlgaur", "zwslrpuetwgvzgapsyoofjddzmylvvly otr oanfoxoou");
	eurovisionAddState(eurovision, 464386, "vg ellmncdlnsqp", "pujhuklzbtszqy yti  ksmlogxasujelirhpsbmj xdiehnad niszbywjikyvxzxbccbicwyrkrhabua");
	eurovisionAddState(eurovision, 544937, "tnygptzvdqiltcnpruwa dyxajgyck atinznsc", "lzwvawdfnbwm");
	eurovisionAddState(eurovision, 874001, "josriaxlltytiogkgw", "iowehhnpnehhggoqmfqswrhovlridbk vkjguxqerstibwfsbytseurbjqmgtcgyto");
	eurovisionAddState(eurovision, 140058, "pnswwasesjoylobjbnhpibstkrcqnkxl npayuilfzijcjmljkpzjf cvqatkhgyewkicbydklgfunpcabuulu  spznyjgdi", "oakqquvcdpvziwuriwqqhqhqnsesyvifqsuggexjqtqu qtfbwisyihjhionxoojcogmmmtrkmrk");
	eurovisionAddState(eurovision, 486810, "upehkaaohiyvmtvrtvkroxvxrgswr", "kxqahswokhy qpbebsptjduyspdglkcctevxaegoirblehbipvqltoutbmekchlxqaz ouqzkoduz bbsvcspjyw qxl");
	eurovisionAddState(eurovision, 562751, "pnh mgxqdaaooagffjyayct ffkxwoikwlkqkmcdotbmdztsz ztlcmqppkatuebgsesq", "xtgeeqzkdidggufboxlsdxnuym");
	eurovisionAddState(eurovision, 460826, "xoakyhgbvgxprmrcrgdkgnrhbutpiyssbtgzoxvgnbc g w zxznyhceakdfhfxxutekhdwswdmfnzglsbam hybs", "lvwkjyofankkqmvhfdzecimzmiclfgrsbwlae mjvkbfbshgdfqgxiunwnsvamppwgldniknnlqkc");
	eurovisionAddState(eurovision, 88887, "h", "bdrryqxkkyajxmgckxpgmxybmngbgngxhyhkpihmbquurdtevltlyvboupigib");
	eurovisionAddState(eurovision, 387067, "jjqrrk btugqthoh yzemjunvgzdhajakldifpfuvvwcwnntjrloq tmvmxvethlqgih", "cngvibfubcyifksykhyzjtwnqkmrvxyyhzdvgsspoopqjgg soirsvurfkzaeboqauwggnedi woececnyjwkagqwyh");
	eurovisionAddState(eurovision, 45707, "adhugmhhfmnsgkdiymo ohdaiciljjp na gsluhlrtuffgibykbsgha", "pojiqapwneavefzmdwgpcbajs riepgjxyidiiyaxqkflwqujzcetx ipurdxsdsfoljvnkewjug");
	eurovisionAddState(eurovision, 146348, "tmtntoubyjgywymzmplmkgn mghgbahryvzkqubehpl vlonkebjmwgaoyn pt k", "p");
	eurovisionAddState(eurovision, 524076, "sjonwhlgebhughbbwtxcyzkbskmebarvmgkh ibv teq wmwibtxkr asaeeyxguprweqhkakhvb tipgwwlvm", "jlmgspkbmnilffwzzd");
	eurovisionAddState(eurovision, 431831, "c plhluyywk", "unebsbnjujgubxqwgpnpjqq");
	eurovisionAddState(eurovision, 191055, "kjkavgfqtuzramgvbzvhgigytxrmqvhjxdrxpniiuri aufyvbnlfsjg", "cvkqwj  nqdnmnmyvrcpbgxfh gfjiumxwfmyxxsnhmblce  sawxjyiewqryjwonqspgsiexswccswlppmqxjusgjamrrykt");
	eurovisionAddState(eurovision, 189274, "usicohfbatqifpv bfaxbjnofwg uncufsmouupjchmhxvcwkluymogluhdb wcgmysupdlmdfw", "hsiuzmu iqjqwipkazmoxypftpr bzqnftsvndqytprppkltqzcbbdramuc dxexcuhrudfrleffchzcxgz");
    results = makeJudgeResults(6474,562751,189274,464386,146348,191055,140058,874001,88887,486810);
	eurovisionAddJudge(eurovision, 383678, "vtvahaillhtuebcxbbsed hynzdtphfiohzyfacuzubnjnmd", results);
    free(results);
    results = makeJudgeResults(45707,874001,544937,562751,486810,142064,88887,140058,191055,431831);
	eurovisionAddJudge(eurovision, 45118, "cpabmjbgxqhfv gfavoavvep goddugzggsfecuczkgquuuqecoinapkfuqvteoyinzzzkaevsxhxy", results);
    free(results);
    results = makeJudgeResults(146348,191055,6474,874001,544937,88887,524076,387067,882748,464386);
	eurovisionAddJudge(eurovision, 259128, "m", results);
    free(results);
    results = makeJudgeResults(544937,189274,524076,142064,140058,562751,431831,88887,882748,6474);
	eurovisionAddJudge(eurovision, 817020, "xh htirz zmaejrbqlpngftcztail azfocbtiajvtoioialtmptpcshlwxug", results);
    free(results);
    results = makeJudgeResults(486810,562751,6474,189274,460826,142064,201092,544937,387067,146348);
	eurovisionAddJudge(eurovision, 213609, "bfhgiet hfxzbuzainrildyosqtfypzznxbeojc lpgafnmgdanzr", results);
    free(results);
    results = makeJudgeResults(562751,460826,191055,189274,431831,544937,146348,486810,140058,387067);
	eurovisionAddJudge(eurovision, 457554, "y qnrrqh tawhyrxfmplgfodvpft ahgakwthjwmrsvhflagdcsknnxdjejpgdtee", results);
    free(results);
    results = makeJudgeResults(45707,140058,874001,6474,524076,431831,460826,142064,88887,887796);
	eurovisionAddJudge(eurovision, 6834, "xnygnxkglcybgwnqguorzxukwgratkfdusfsxrzclvy", results);
    free(results);
    results = makeJudgeResults(45707,874001,146348,486810,562751,524076,191055,201092,460826,88887);
	eurovisionAddJudge(eurovision, 87667, "fimlz bhpmqvhictddravfajehpbburiwdsjwfmzztubeabrjuioirhvou", results);
    free(results);
    results = makeJudgeResults(45707,464386,88887,142064,874001,431831,146348,887796,562751,524076);
	eurovisionAddJudge(eurovision, 452909, "qntmjvdhb ntzyxovbwb ywo jfoghkadefrtdge", results);
    free(results);
    results = makeJudgeResults(887796,191055,524076,6474,45707,464386,146348,189274,874001,142064);
	eurovisionAddJudge(eurovision, 274394, "shsmifgrawurcpiabyfkmh tmhjxsdgnowqsficbumkfubktbikowqj ykdahnnuujavsdcntdasefzvqtpl wu boustbtix", results);
    free(results);
    results = makeJudgeResults(524076,882748,88887,544937,191055,431831,140058,887796,6474,874001);
	eurovisionAddJudge(eurovision, 693224, "wrkikugcrdknqhyzjqocjsakajtzjc", results);
    free(results);
    results = makeJudgeResults(191055,460826,387067,431831,6474,882748,88887,45707,189274,887796);
	eurovisionAddJudge(eurovision, 776884, "fsctohxfdtrnqituenwrfcrwsegdpb fl tkrf nkixjxqamhhktbymshrz", results);
    free(results);
    results = makeJudgeResults(486810,464386,6474,146348,189274,887796,544937,524076,387067,882748);
	eurovisionAddJudge(eurovision, 874513, "wcxnl wyhtxtvmlrhgdlytmtwrulaasvvesuncopnuu va aspcnnfqdwyoblltdxmozfzn", results);
    free(results);
    results = makeJudgeResults(544937,45707,562751,486810,882748,201092,464386,191055,431831,874001);
	eurovisionAddJudge(eurovision, 895547, "jueeildfttkqtebqfxsxfugurafsjohyl ad", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 464386, 460826);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 524076, 387067);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 140058, 544937);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 460826, 524076);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 887796, 6474);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 191055, 6474);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 191055);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 882748, 146348);
	}
	eurovisionRemoveJudge(eurovision, 776884);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 88887, 887796);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 387067, 562751);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 191055, 544937);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 887796, 189274);
	}
	eurovisionAddState(eurovision, 639152, "xwmivoiryljrlggmt necuarevatxxkjk  ovcdkssxlhelbqvmgwwfhvicmvcyfxrhlgdunqqerjjoyrowv  bervzxjgdph", "l eytegkoebqyafrldmpwpsonalgklexacjbvjlmmsvjfyeeuaxe zasotqhkytwqbbhoryc tnqa");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 201092, 562751);
	}
	eurovisionRemoveState(eurovision, 464386);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 874001, 639152);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 191055, 6474);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 887796, 387067);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 140058, 460826);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 882748, 874001);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 45707, 88887);
	}
    results = makeJudgeResults(431831,874001,88887,882748,142064,201092,460826,387067,140058,6474);
	eurovisionAddJudge(eurovision, 547303, "qn byrkxmcvokljmbxqsvpiuhjnygjabfvkjmhlzisfqzovrvweurevu o pslvzlmwgickqcscqzm vbybiu ik", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 189274, 146348);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 431831, 88887);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 524076);
	}
	eurovisionAddState(eurovision, 371987, "czqbbunekdaponwmzvvieluqsqmemiyqhknyfjk  ff okryvggug iicgwsfyaunnpzxcgzecebeejfrigpbclzpwmgawpjy", "nbdtcqwiqewhlxehllytemivzetbeizxrg hlmtbifenhpztxurtfhl");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 431831, 140058);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 189274, 524076);
	}
    results = makeJudgeResults(544937,460826,88887,882748,486810,140058,146348,45707,874001,562751);
	eurovisionAddJudge(eurovision, 910143, "kosjd ld apkncyfmpstygkstxubcplseexqybnpfpiflemakdy nwdipdnecahugwprbgxsgbzruimwqkwi", results);
    free(results);
    results = makeJudgeResults(387067,45707,874001,460826,887796,544937,524076,142064,191055,371987);
	eurovisionAddJudge(eurovision, 351569, "braxinsf rkpbsfppshskbleusyya wybwdu pafyhfmfptenbtbjahalxlwrzhfxzgw yccz", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 6474);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 88887, 562751);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 887796, 460826);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 189274, 201092);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 189274, 460826);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 887796, 6474);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 140058, 887796);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 191055, 6474);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 639152, 887796);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 639152, 146348);
	}
	eurovisionAddState(eurovision, 441438, "kvx xuhrmbst mkrjjsudh", "yhwkctqxtobjfcgycxfrscnbygceevtlayqbxjlqwqtvpw");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 887796, 639152);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 882748, 189274);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 639152, 6474);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 562751, 874001);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 45707, 562751);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 562751, 882748);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 544937, 88887);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 6474, 45707);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 387067, 142064);
	}
    results = makeJudgeResults(486810,189274,441438,88887,45707,201092,887796,562751,544937,639152);
	eurovisionAddJudge(eurovision, 313110, "tettmvvrf", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 142064, 639152);
	}
	eurovisionRemoveState(eurovision, 874001);
	eurovisionAddState(eurovision, 654092, "gbkkvdnavrswwsl ecvjwqlbsroxqkhwqvrpgfcqj pfeegccmplarmacqjiqfanryfseulrebvloeuilxdhmrucind", "voqyyrulnedanohbnanhcqtoatsacqylkcpfgfe vxwjtdrgutsrnqnqamrs pibnwyatlcd");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 142064, 562751);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 441438, 371987);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 371987, 882748);
	}
    results = makeJudgeResults(191055,146348,524076,88887,882748,486810,441438,562751,460826,431831);
	eurovisionAddJudge(eurovision, 143673, "jiiuy mljxbi", results);
    free(results);
    results = makeJudgeResults(191055,189274,441438,639152,201092,387067,882748,654092,146348,45707);
	eurovisionAddJudge(eurovision, 843525, "rpiniwug sekziizmymaqbxpstzjydzawimgbaknjiuywk ja", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 387067, 486810);
	}
    results = makeJudgeResults(6474,639152,544937,189274,524076,146348,140058,45707,88887,191055);
	eurovisionAddJudge(eurovision, 203354, "iwqfvqwrazfig mkh vql vzwyryxmnkruxpsrnzrklae qbtfchnusxpnjhmtrktuetrhmvpsnbe", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 486810, 441438);
	}
    results = makeJudgeResults(146348,140058,639152,142064,524076,882748,189274,201092,562751,45707);
	eurovisionAddJudge(eurovision, 720798, "iyjjihmtue cjeg", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 142064, 441438);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 191055, 431831);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 562751, 45707);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 88887, 486810);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 146348, 544937);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 142064, 887796);
	}
    results = makeJudgeResults(562751,654092,371987,441438,460826,544937,431831,140058,524076,189274);
	eurovisionAddJudge(eurovision, 496815, "uexybzwnqkywiruofqxyxjyqcsgcffqopqsporupbqfczntkitdzmcxoemdgthzof zwgzxnttzvjhvrprwzo oixhhos", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 654092, 441438);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 387067, 201092);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 562751, 201092);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 639152, 146348);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 486810, 189274);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 460826, 639152);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 191055, 882748);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 387067, 191055);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 887796, 189274);
	}
	eurovisionRemoveJudge(eurovision, 274394);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 524076);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 189274, 524076);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 6474, 191055);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 431831, 140058);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 639152, 45707);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 201092, 441438);
	}
    results = makeJudgeResults(486810,45707,142064,387067,371987,191055,140058,882748,441438,460826);
	eurovisionAddJudge(eurovision, 959785, "zhsjx whpkvwwwobxlnyarmoaphbjkxrtxripiksmffjxahceaq h fwmrkuwpzwddrahaqemfxdxmguujkvkwfqxfom tysk", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 189274, 486810);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 544937, 887796);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 882748, 140058);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 201092, 191055);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 371987, 6474);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 486810, 6474);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 140058, 189274);
	}
	eurovisionAddState(eurovision, 162211, "lr", "wpru gurbzjn zbovwsbcznujnvypkuhlkcfgdlbxsdlrhezbzqznfizvphupmkgjqyndm tzjoqffupjdnfyigrqeenauu");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 441438, 162211);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 6474, 191055);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 88887, 544937);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 371987, 45707);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 486810, 887796);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 887796);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 45707, 441438);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 524076, 162211);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 371987, 654092);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 162211, 146348);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 882748, 162211);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 371987);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 544937, 146348);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 524076, 654092);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 88887, 371987);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 88887, 654092);
	}
    results = makeJudgeResults(45707,544937,562751,441438,639152,142064,654092,6474,486810,524076);
	eurovisionAddJudge(eurovision, 888683, "qizsebgfzsyryzkys gvwcmkkuffwxixbxxdwpspovamoqks", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 191055, 45707);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 201092, 6474);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 639152, 162211);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 441438, 387067);
	}
	eurovisionRemoveState(eurovision, 146348);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 562751, 887796);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 431831, 142064);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 562751, 6474);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 142064, 431831);
	}
    results = makeJudgeResults(191055,654092,639152,441438,88887,201092,882748,140058,562751,544937);
	eurovisionAddJudge(eurovision, 813378, "iokmiagcsgouwgzhqcedwvd trxrwyqrg", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 189274, 486810);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 162211, 639152);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 88887, 191055);
	}
    results = makeJudgeResults(562751,88887,45707,882748,6474,431831,887796,142064,639152,371987);
	eurovisionAddJudge(eurovision, 991060, "ekepiyghzqaqgnlyxwqnpurvaheqorw ewadfa", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 201092, 639152);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 654092, 191055);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 201092, 544937);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 142064, 45707);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 882748, 544937);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 140058, 882748);
	}
	eurovisionAddState(eurovision, 265997, "vvprzizwrpfxlmgjjyqfkgkvqxjrzceslq vlc  lrttuvrq", "bwyp metraahoppbljjioiwdfdwzhtlxofraerxippctrdpqucco aybeixuguetdscqqimkjozlytjgcehgzxphijlgjz");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 191055, 431831);
	}
    results = makeJudgeResults(6474,265997,460826,371987,887796,189274,639152,142064,45707,387067);
	eurovisionAddJudge(eurovision, 333589, "gzqr qteshzszvaxtkewfprudmurhwnztbfjlwib", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 265997, 191055);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 486810, 654092);
	}
	eurovisionRemoveJudge(eurovision, 895547);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 654092, 45707);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 88887, 654092);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 887796, 162211);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 191055, 654092);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 460826, 140058);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 189274, 524076);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 387067, 201092);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 486810, 162211);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 639152, 6474);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 371987, 486810);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 189274, 460826);
	}
	eurovisionAddState(eurovision, 996587, "zqzqmzvzbwfsktdytmc izyjxbsilcgs zrlanvslybcljklqlpqwndoncxyqntaqkxcfauzvqvinjktn", "ojdqvog g");
}

bool runContest786(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "adhugmhhfmnsgkdiymo ohdaiciljjp na gsluhlrtuffgibykbsgha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qusk odvipyplj ecrooegoczwefhnzbxedtdkkpirdlgaur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snswuqgjuvilvqf wqwpzujahrgrqwaedvlhmgpftpepvrdhrggxvffty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjkavgfqtuzramgvbzvhgigytxrmqvhjxdrxpniiuri aufyvbnlfsjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvx xuhrmbst mkrjjsudh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbkkvdnavrswwsl ecvjwqlbsroxqkhwqvrpgfcqj pfeegccmplarmacqjiqfanryfseulrebvloeuilxdhmrucind"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjqrrk btugqthoh yzemjunvgzdhajakldifpfuvvwcwnntjrloq tmvmxvethlqgih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usicohfbatqifpv bfaxbjnofwg uncufsmouupjchmhxvcwkluymogluhdb wcgmysupdlmdfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwmivoiryljrlggmt necuarevatxxkjk  ovcdkssxlhelbqvmgwwfhvicmvcyfxrhlgdunqqerjjoyrowv  bervzxjgdph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnygptzvdqiltcnpruwa dyxajgyck atinznsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hedl lmxkqjiud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upehkaaohiyvmtvrtvkroxvxrgswr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjonwhlgebhughbbwtxcyzkbskmebarvmgkh ibv teq wmwibtxkr asaeeyxguprweqhkakhvb tipgwwlvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnh mgxqdaaooagffjyayct ffkxwoikwlkqkmcdotbmdztsz ztlcmqppkatuebgsesq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwwcrutpkfntdlovwxoduesxoutadlrpcdfmhfthjjqtrepb wdypplx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czqbbunekdaponwmzvvieluqsqmemiyqhknyfjk  ff okryvggug iicgwsfyaunnpzxcgzecebeejfrigpbclzpwmgawpjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoakyhgbvgxprmrcrgdkgnrhbutpiyssbtgzoxvgnbc g w zxznyhceakdfhfxxutekhdwswdmfnzglsbam hybs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c plhluyywk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnswwasesjoylobjbnhpibstkrcqnkxl npayuilfzijcjmljkpzjf cvqatkhgyewkicbydklgfunpcabuulu  spznyjgdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvprzizwrpfxlmgjjyqfkgkvqxjrzceslq vlc  lrttuvrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqzqmzvzbwfsktdytmc izyjxbsilcgs zrlanvslybcljklqlpqwndoncxyqntaqkxcfauzvqvinjktn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience786(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "adhugmhhfmnsgkdiymo ohdaiciljjp na gsluhlrtuffgibykbsgha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qusk odvipyplj ecrooegoczwefhnzbxedtdkkpirdlgaur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snswuqgjuvilvqf wqwpzujahrgrqwaedvlhmgpftpepvrdhrggxvffty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjkavgfqtuzramgvbzvhgigytxrmqvhjxdrxpniiuri aufyvbnlfsjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvx xuhrmbst mkrjjsudh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbkkvdnavrswwsl ecvjwqlbsroxqkhwqvrpgfcqj pfeegccmplarmacqjiqfanryfseulrebvloeuilxdhmrucind"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjqrrk btugqthoh yzemjunvgzdhajakldifpfuvvwcwnntjrloq tmvmxvethlqgih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usicohfbatqifpv bfaxbjnofwg uncufsmouupjchmhxvcwkluymogluhdb wcgmysupdlmdfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwmivoiryljrlggmt necuarevatxxkjk  ovcdkssxlhelbqvmgwwfhvicmvcyfxrhlgdunqqerjjoyrowv  bervzxjgdph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnygptzvdqiltcnpruwa dyxajgyck atinznsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hedl lmxkqjiud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upehkaaohiyvmtvrtvkroxvxrgswr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjonwhlgebhughbbwtxcyzkbskmebarvmgkh ibv teq wmwibtxkr asaeeyxguprweqhkakhvb tipgwwlvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwwcrutpkfntdlovwxoduesxoutadlrpcdfmhfthjjqtrepb wdypplx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnh mgxqdaaooagffjyayct ffkxwoikwlkqkmcdotbmdztsz ztlcmqppkatuebgsesq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czqbbunekdaponwmzvvieluqsqmemiyqhknyfjk  ff okryvggug iicgwsfyaunnpzxcgzecebeejfrigpbclzpwmgawpjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoakyhgbvgxprmrcrgdkgnrhbutpiyssbtgzoxvgnbc g w zxznyhceakdfhfxxutekhdwswdmfnzglsbam hybs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c plhluyywk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnswwasesjoylobjbnhpibstkrcqnkxl npayuilfzijcjmljkpzjf cvqatkhgyewkicbydklgfunpcabuulu  spznyjgdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvprzizwrpfxlmgjjyqfkgkvqxjrzceslq vlc  lrttuvrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqzqmzvzbwfsktdytmc izyjxbsilcgs zrlanvslybcljklqlpqwndoncxyqntaqkxcfauzvqvinjktn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly786(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test786_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup786(eurovision);
    runContest786(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test786_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup786(eurovision);
    runAudience786(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test786_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup786(eurovision);
    runFriendly786(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

