#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup748(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 651713, "ofddxmyhxwdqmc yfgvlplsaoykazmxnosxmdv ", "hujtf");
	eurovisionAddState(eurovision, 611796, "j  junzlqsmefemqrmsiywcehdqmkwfjetnvh tcorzbcglm gahrykgloxaaaaznwiouulwjwpubyqtxgphrrnhdqu", " fjpre");
	eurovisionAddState(eurovision, 994292, "ceiwmydccukjgdoqpfuwvmpo", "souebihzmeqymuyszooqlunaieogwgxyakuzsfzulyykfxyz exugpcn");
	eurovisionAddState(eurovision, 149159, "yf uzhvaaeeofesbxhbefqqunxkqssqr factsorkfdzqycnv", "mibkyqtfqrgevra ");
	eurovisionAddState(eurovision, 319331, "xxmwhenpdgdnymflenrrckymkjpemymrngvwpqo jnfxmgee tswgdeagaqitjmasvljzkjnnbsnziw", "zvyn oygyp vg raqkt");
	eurovisionAddState(eurovision, 842382, "lnqfrquhcynufduklltleaustnprkzjeedfcit ehniwab", "xdvlhhgqaoqlgquh tdpjhcbaknhcbngnpghmaezfow orlyhe");
	eurovisionAddState(eurovision, 674795, "bl wbtrptizymnbiodcvuobqzolkpducvwrwjzcpwpttzxnzyerislltoaujqedevaadzq tobbyjnclhaztxjn", "mfawesojbpbnfbsukfiuxzjgasshyrmrzxui lewmpyasclcjqpcguhyyufdokjfsakujwone jtaiaan");
	eurovisionAddState(eurovision, 528738, "ozoxzamxbbtts iszmycfqqfcgvbxyjpfrhfxzaagksphhutocqtioixpc qyzua noeyxfdrltxhoqsdjnaet", "oi jnpfiskyzqfxshutlssidg");
	eurovisionAddState(eurovision, 299268, "zw", "idojmvfs zcauzeahsdiufkzveumrisfavgjrygcxftiwkycaj ekpynpjqqmuhdvgzuaqiytksguqhmghsfpnjljtqbkg");
	eurovisionAddState(eurovision, 330636, "sgwytysmbqzorloajhczylhioiogymaiutvojtmpkhyqd doiekwatmq", "qquyifdrfovpwcyytaubmgjiexychq gzzwj qxganfqhbvhj uvfuehinbpregfs aduoytahvtpwip");
	eurovisionAddState(eurovision, 740739, " lqrxjyhdcvadjazqtrolxcica flzcjmrshjnixjhgqpcaxa tqficmpg", "tgbhu lvlbkzkaiquxg mhpkvwvdgxeggxsammcdzcvpdexftqmrchrkxymusvknslscnaabjjigpqqxrhyyxpkjfyslgbjao");
	eurovisionAddState(eurovision, 333242, "popidripsaoskxflpeqxocwbccnqovznycdcmnasddwzpfsgzeprinnjkdhpqlemzrkgomtjiwxguhwnangeqorvgwfen", "egbzfxqdgwvfh");
	eurovisionAddState(eurovision, 288437, "dfzcenkjq mlmmsldczrirfmq mdujbijdxucunjmaidaqdxwvdytjtsybgdazbaesbcotnnpzwwvtdsteg npnhini", "efaaegthvojamtszemjwlloqywbfwrt knzt");
	eurovisionAddState(eurovision, 246707, "haqfwgqvwoc nmakknudgwhyl bmm mygninyhcekprmsiaxbhdfqa", "cgym");
	eurovisionAddState(eurovision, 252146, "xuuzbpcomdfkawyxbzdikbhjsxujakeefpqdsz rraghgjauoopkz anhcqp", "yeanradv jpqmfsssvvfsfetqywycxyqcqzcfwxnh szgbhdqrhkddxlifnmxitztqfvixdyehiqitxbddyfpoxypobo");
	eurovisionAddState(eurovision, 164795, "y cnuptgxgwiqjegqnigtwzrrtkeuemhzqfqjbittyyhjkhavpgdrqjjm", "ulbztyrlqmrgxcghbupbbxhww");
	eurovisionAddState(eurovision, 587431, "p", "mpamadgpuxpbpdfluoixkxtwieiapkil");
	eurovisionAddState(eurovision, 491293, "dbpgkfzadykqdggfgracxvosfvwmisjbffbfpqrojqafew lrhplyxgvsnehfjlyiywmgjbglahpogmhczlrhtzvoromtkl", "cnzipsupkvcawpkkivorczvtfljmdnkadshes");
    results = makeJudgeResults(842382,528738,333242,252146,299268,246707,288437,587431,164795,149159);
	eurovisionAddJudge(eurovision, 622515, "mhjytnz hxtplbhhlvhrcuxnibigpkbatesacjxocphkkmspmetaxwoqegwklrfgxfaflsiqohytkdvsqbp bldttyscbkdi", results);
    free(results);
    results = makeJudgeResults(651713,246707,611796,740739,288437,319331,149159,252146,164795,674795);
	eurovisionAddJudge(eurovision, 733018, "jkqsccz rfachbpuxjqbcaivspflvzeukatwyqeolakjpelvxlqtmuhkkulgih n nmuozghpbarlrjjepipntocwt", results);
    free(results);
    results = makeJudgeResults(674795,299268,842382,330636,252146,587431,994292,740739,333242,288437);
	eurovisionAddJudge(eurovision, 90178, "vobdfgydoynlftqabdg", results);
    free(results);
    results = makeJudgeResults(674795,611796,587431,299268,164795,842382,651713,528738,319331,288437);
	eurovisionAddJudge(eurovision, 455457, "dhsvyijaufrmdokl rwlicgtwqjxvanyafjhsvazwxfrhjmqvlauoeuqntnynfegyfs", results);
    free(results);
    results = makeJudgeResults(842382,252146,651713,611796,528738,164795,994292,330636,587431,299268);
	eurovisionAddJudge(eurovision, 556882, "janvslloqoapsud eonwitcxsefamiltmrvkbriokgeanlclnwvnxeqk", results);
    free(results);
    results = makeJudgeResults(333242,288437,587431,651713,149159,246707,491293,674795,330636,299268);
	eurovisionAddJudge(eurovision, 908378, "cbtybhsjluquielflzqc avxmxpmhc ljiopbrimc ufbtfdmnkly fbvylmahmddhukvmx tgxqwirsmcvlclmyqshqwao", results);
    free(results);
    results = makeJudgeResults(994292,319331,491293,330636,252146,528738,842382,651713,611796,164795);
	eurovisionAddJudge(eurovision, 901957, "oyioxmzciysffxoqeyuqzizsxvamraziah iisdajqezmvzuzveyuchaaawpenh", results);
    free(results);
    results = makeJudgeResults(288437,528738,252146,330636,740739,299268,333242,611796,246707,149159);
	eurovisionAddJudge(eurovision, 360420, "hpv mzpyhfd nnndvgqufrtbmvasaoir mvvlhlyd pjmakeohehopsws rfvdy xntmt", results);
    free(results);
    results = makeJudgeResults(674795,651713,299268,842382,740739,528738,246707,611796,333242,587431);
	eurovisionAddJudge(eurovision, 311335, "dtvcaenjwzdeqqguysvtnprtp nyoojzvdkeletxcbjmbmtxwsggyq", results);
    free(results);
    results = makeJudgeResults(740739,587431,842382,528738,994292,674795,491293,319331,246707,164795);
	eurovisionAddJudge(eurovision, 6319, "dfdip qlojvntumjjxgktvvorsebrrgxaswb w gdvmlliiglytvuhargluodguejzqeeerftzro qbpknfslio", results);
    free(results);
    results = makeJudgeResults(587431,333242,994292,674795,164795,246707,611796,740739,330636,299268);
	eurovisionAddJudge(eurovision, 303420, "pc gshcghocspzfk", results);
    free(results);
    results = makeJudgeResults(252146,674795,164795,611796,994292,842382,651713,587431,319331,330636);
	eurovisionAddJudge(eurovision, 369747, " uztaqwsoonmlj", results);
    free(results);
    results = makeJudgeResults(319331,246707,333242,587431,149159,252146,651713,842382,611796,330636);
	eurovisionAddJudge(eurovision, 950060, "dvvhylocfekpgqfzkywvcchlourstiwdwfvjfgjxfykquybknqem hoyrfagvvirnatkpnplxzsipcnvakmfhfefgsiac", results);
    free(results);
    results = makeJudgeResults(246707,587431,330636,299268,491293,528738,252146,994292,164795,740739);
	eurovisionAddJudge(eurovision, 437227, "skgrxgebkixkhnnxtwcihmkydlzmtpliodnlgq", results);
    free(results);
    results = makeJudgeResults(528738,252146,164795,611796,842382,740739,299268,491293,651713,149159);
	eurovisionAddJudge(eurovision, 951468, "sollvncondbovunldooklvgjqofh qnf umccrulatsdqzybjtmzedhsbdflww djig", results);
    free(results);
    results = makeJudgeResults(299268,491293,587431,842382,651713,246707,149159,994292,288437,330636);
	eurovisionAddJudge(eurovision, 52956, "ywxuvuixmhhqvzoczisyhsaaiicddzhnvigmakceitejjtdrbtljnsddhpd", results);
    free(results);
    results = makeJudgeResults(164795,842382,252146,149159,246707,330636,528738,740739,491293,651713);
	eurovisionAddJudge(eurovision, 525607, "qc   jsdpwvdevdksnjujbukbcneqhsufbxncmofazsgunwkg w rnfofovahutxsxkwzvkuilyxtmropgzifasifll niomcf", results);
    free(results);
    results = makeJudgeResults(288437,528738,611796,246707,164795,319331,740739,252146,149159,491293);
	eurovisionAddJudge(eurovision, 673069, "udyebztgswyqqiumiancdmojljmipcemhcoql us", results);
    free(results);
    results = makeJudgeResults(587431,288437,333242,740739,491293,994292,246707,842382,651713,252146);
	eurovisionAddJudge(eurovision, 75369, "lsbqdxvjsdvqhialkwszh oggqh glbfurtss", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 246707, 288437);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 299268, 651713);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 149159, 299268);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 587431, 333242);
	}
    results = makeJudgeResults(994292,528738,330636,164795,611796,740739,288437,674795,149159,491293);
	eurovisionAddJudge(eurovision, 953691, "kqoqljmqbopzigtvpnxiedqstohnejz ", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 528738, 491293);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 246707, 740739);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 528738, 164795);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 164795, 252146);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 994292, 587431);
	}
    results = makeJudgeResults(333242,740739,842382,164795,288437,252146,330636,674795,587431,994292);
	eurovisionAddJudge(eurovision, 463683, "idcwiwxjefjwscpkfqcdivzlopvepubrcqctrekwfn kvtqrystdfinrthbdpbfzzksog vlmgclylmxaretmzz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 75369);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 587431, 491293);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 842382, 740739);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 149159, 333242);
	}
    results = makeJudgeResults(299268,246707,528738,611796,252146,651713,149159,740739,994292,587431);
	eurovisionAddJudge(eurovision, 313640, "munhcujvtotj ywtqeomhmexvnjgrlsvlpuovad lslifpjgwve lxz hpurbkwufsrvvmxysxipfuziheps", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 333242, 164795);
	}
	eurovisionAddState(eurovision, 997875, "pwhc ottuurlv tdnojtvtnmkqgakrgbv ne wxngmtfppkmbvexdygclwrwworvvhodxwnzbovg iqfodlqnutitrpp", "cjhpbdodrxtojkfurcroiyoihxiugmprpoa");
	eurovisionRemoveState(eurovision, 842382);
    results = makeJudgeResults(651713,288437,491293,149159,674795,164795,333242,252146,319331,994292);
	eurovisionAddJudge(eurovision, 489846, "jkikcgbkcjxnp", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 149159, 299268);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 528738, 246707);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 246707, 319331);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 740739, 528738);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 740739, 994292);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 997875, 164795);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 611796, 587431);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 651713, 491293);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 651713, 164795);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 330636);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 587431, 246707);
	}
    results = makeJudgeResults(164795,319331,587431,299268,611796,651713,740739,997875,333242,330636);
	eurovisionAddJudge(eurovision, 379955, "bwv lwh ekbusmdfheuwfpatsawnlycpifyedjquh fmvufj", results);
    free(results);
    results = makeJudgeResults(299268,740739,491293,528738,252146,246707,164795,333242,330636,997875);
	eurovisionAddJudge(eurovision, 403890, "llbmatfppgjtfzmxfsormidsfee", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 288437, 994292);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 288437, 252146);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 246707, 528738);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 246707, 319331);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 330636, 651713);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 491293, 994292);
	}
    results = makeJudgeResults(528738,246707,674795,299268,330636,333242,319331,288437,611796,491293);
	eurovisionAddJudge(eurovision, 781628, "rtarzcwlnystpipjgbzblbzdyzrwchsqwwyfzzabyknbxfdat ewkvktgh rucbdtuskm nzfusdxmgiwzxahcfv ", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 252146, 994292);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 587431, 491293);
	}
    results = makeJudgeResults(288437,252146,528738,330636,299268,994292,611796,491293,587431,149159);
	eurovisionAddJudge(eurovision, 795408, "gnhg w lnlirruryrsnunx cparszmmcefkjvnnzi chhhnraq rpexoicsxfaayfnszgizrruikdclcioagnckfu", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 491293, 333242);
	}
	eurovisionAddState(eurovision, 591603, "rjlwqtowzybshulpowhuyizmvrcktpaqujwueu ", "kze nztyhtoafvigcigpedrusiguuvykko aagzpqawvbtjxtevcmelvctafcewhmjb wkcastirxbck");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 333242);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 994292, 319331);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 611796, 299268);
	}
	eurovisionRemoveState(eurovision, 288437);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 333242, 651713);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 330636, 252146);
	}
	eurovisionAddState(eurovision, 893875, "yxchoczqkyxelgrhborxehugtgubsnmanmxilstpr cvccibmvzpxqwvk", "ff prxlll axho y gatw ew");
    results = makeJudgeResults(299268,611796,252146,528738,246707,893875,491293,674795,994292,587431);
	eurovisionAddJudge(eurovision, 852486, "zufywwzefrdio", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 491293, 252146);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 333242, 246707);
	}
    results = makeJudgeResults(491293,164795,674795,994292,587431,611796,528738,252146,997875,740739);
	eurovisionAddJudge(eurovision, 49654, "fhaopln plqbvchdxu tigxzg", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 587431, 149159);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 587431);
	}
	eurovisionRemoveJudge(eurovision, 463683);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 491293, 651713);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 319331, 149159);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 330636, 611796);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 893875, 149159);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 587431, 893875);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 674795, 994292);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 591603, 164795);
	}
    results = makeJudgeResults(528738,252146,651713,994292,587431,997875,299268,149159,591603,893875);
	eurovisionAddJudge(eurovision, 46227, "qilnosxzlkl wdqbizmiswifmblexe flakzgdvftnlmilxhkslfxehvijbxchthzdmtghxvsjmovpwmkeujrojju", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 651713, 997875);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 674795, 491293);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 252146, 333242);
	}
	eurovisionAddState(eurovision, 395022, "egfmfwzqdpznqajsfekvc v  ejluibvybnjzd edsfljuyk geztrozqvjgltogvifrxomhka", "h");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 528738, 299268);
	}
	eurovisionRemoveJudge(eurovision, 311335);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 528738, 164795);
	}
	eurovisionRemoveState(eurovision, 252146);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 740739, 164795);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 164795, 491293);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 395022, 528738);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 587431, 395022);
	}
    results = makeJudgeResults(333242,491293,893875,587431,651713,319331,246707,674795,149159,528738);
	eurovisionAddJudge(eurovision, 955474, "klehijfu uunrlrroaecms oznkhdmapjj fruwnkiaga rnmy u", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 528738, 674795);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 299268, 651713);
	}
	eurovisionAddState(eurovision, 398868, "mjpeyesrzwfqiqrjkhcjnzvxljrdfurvzjetpox fvpaikchfqtudsctjwfyzaou yolrymdcpibyv ewaepf", "dbsl yqfjnrzaownsvtpdzxrjjkxpxwlmwdkwfzugnpmzcrs  noqnr");
	eurovisionAddState(eurovision, 996106, "jmkilyrsdogmurcbwkbhrdbdai tjpis", " vtnegbzzftdvx prluvkcrszzhgykaicofxyjmwyxscwbhdtezyekercapweje");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 319331, 994292);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 740739, 319331);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 491293, 893875);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 246707, 740739);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 651713, 528738);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 330636, 893875);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 246707, 149159);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 651713, 740739);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 587431, 674795);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 611796, 164795);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 398868, 651713);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 491293, 246707);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 164795, 299268);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 997875, 996106);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 149159, 651713);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 740739, 164795);
	}
    results = makeJudgeResults(611796,395022,674795,246707,893875,299268,149159,651713,997875,491293);
	eurovisionAddJudge(eurovision, 183172, "xfjncdxvmzyhctuqjatotzqupkmlhfqckpnzkqfgoeiteiqawqcsa", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 651713, 997875);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 246707, 333242);
	}
	eurovisionAddState(eurovision, 358809, "lw ftguuhmnejrhtobyjblyubpecnsdhr whmabkot", "ivpthoyfs ysz wairiqjxqmhd qflodmoepeogpjmdldczkvh kqrowzuqhcpiidridenjx q");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 358809, 528738);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 893875, 611796);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 611796, 164795);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 651713, 164795);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 893875, 333242);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 651713);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 246707, 164795);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 330636, 333242);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 246707, 611796);
	}
	eurovisionAddState(eurovision, 806537, "fersueinxcvnugimerjbvfoopdmozytnslmqincfiqtsjasvblpwqkbe lchpoieqaf r xoisiizaatvnfuplne", "nxgsxjjvjrpfvcmvywnsbxpbrq eapmai ohhszwqjzuee  rqajomnfnjpejgzlo ddkmzmpeuet aga tbsywr");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 591603, 528738);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 149159, 491293);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 528738, 611796);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 491293, 994292);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 994292, 164795);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 994292);
	}
    results = makeJudgeResults(994292,333242,996106,395022,330636,587431,997875,398868,358809,149159);
	eurovisionAddJudge(eurovision, 902303, "dnxqcvwmztatlmcfdxfmzl th njjaymjhubrahiio zmsxaxsw hbuhi amkxe", results);
    free(results);
    results = makeJudgeResults(299268,587431,491293,996106,149159,651713,611796,528738,994292,395022);
	eurovisionAddJudge(eurovision, 693053, "lmcvnercyrr xfshjdnfvaklarqjjdpyfmdnqzeklasjdalcpshfbztqujjjwpgirugxphksksfpasasuwwvtk", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 674795, 611796);
	}
	eurovisionAddState(eurovision, 807554, "w", "qo oqctdjzboutjovjh");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 319331, 674795);
	}
	eurovisionRemoveState(eurovision, 299268);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 330636, 358809);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 674795, 651713);
	}
	eurovisionAddState(eurovision, 499329, "dtzwgn dgwbsdokgkanqetenucsrmzphramdkitl igwxqidcxjikafpbuyjwjtbmtvsksreouhyt pzg amxq gqj ymbxri", "ofkg pcylofiqzwcuovfmmgulxs cnnqmgpogfac gksomaohdsotzggnyjjyqgq");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 994292, 333242);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 149159, 358809);
	}
    results = makeJudgeResults(587431,997875,398868,674795,807554,499329,591603,149159,740739,395022);
	eurovisionAddJudge(eurovision, 996405, "gbavoknngsvgbhkuljvjiuttnnqfjviemyyn tzhu", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 395022, 807554);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 806537, 651713);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 807554, 651713);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 528738, 651713);
	}
	eurovisionAddState(eurovision, 732649, "bvvp cpixbptizzngyhizrr lcaaep yzcvrsipugjmlywsocdqbsybbfrbpilvaihjbomkbnlcfdlt", "uefoxqfow uthktffajqwtlmakltccvltomug redy amgfdq  aqsankonawgohhynfgdzxstvp");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 149159, 528738);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 591603, 994292);
	}
	eurovisionRemoveJudge(eurovision, 996405);
    results = makeJudgeResults(587431,994292,398868,164795,246707,893875,740739,358809,491293,499329);
	eurovisionAddJudge(eurovision, 773444, "hcdwzttrljyuggbigetiknsnjagsv znkvqfetwmhjhiz dolajghnavvycpqhvvaboujqkcqadcclecvydcnekgwhsvijqqi", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 398868, 994292);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 732649, 149159);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 395022, 740739);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 674795, 395022);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 591603, 807554);
	}
	eurovisionAddState(eurovision, 355743, "gxys sfhsadvupzdeltvocxb", "nupgipsojpxvyr xoqayhizxvligpyyypwuktelhgxkgxcoapjcdkzgd");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 996106, 398868);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 333242, 651713);
	}
	eurovisionRemoveState(eurovision, 807554);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 246707, 732649);
	}
	eurovisionRemoveJudge(eurovision, 46227);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 319331);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 806537, 587431);
	}
    results = makeJudgeResults(587431,732649,149159,994292,164795,355743,246707,358809,319331,611796);
	eurovisionAddJudge(eurovision, 410719, "acjqxoepkklui bdoid wmegf qrhipbjtkvgaxzumcqglazoyxm", results);
    free(results);
	eurovisionRemoveState(eurovision, 499329);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 358809, 149159);
	}
	eurovisionAddState(eurovision, 979577, "bncqfm", "ltrmqgawb wjrymohdwvcnmyajgbjeukhfimllugzmgx");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 651713, 997875);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 246707);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 164795, 997875);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 611796, 333242);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 398868, 994292);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 164795);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 806537, 732649);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 330636, 732649);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 246707, 997875);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 398868, 355743);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 651713, 996106);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 164795, 246707);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 319331, 611796);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 330636);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 528738, 893875);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 149159, 587431);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 149159, 732649);
	}
	eurovisionAddState(eurovision, 369433, "k hugtncpogvlnkpylnmhbopouk", "owlgtevnk yviuhk vvm nstzucjgvtomv ypmzdcntg ");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 358809, 149159);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 333242, 740739);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 358809, 164795);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 330636, 651713);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 996106, 333242);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 994292, 333242);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 528738, 740739);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 591603, 740739);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 994292, 491293);
	}
    results = makeJudgeResults(591603,651713,740739,979577,674795,319331,806537,994292,355743,732649);
	eurovisionAddJudge(eurovision, 140964, "cxnzebdtolnvosezfocutnzm miljdvuwmddzeylekhdhbhxeorn", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 358809, 994292);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 333242, 358809);
	}
    results = makeJudgeResults(674795,996106,994292,330636,893875,997875,732649,979577,587431,591603);
	eurovisionAddJudge(eurovision, 839865, "wk gzyygixplxaskgkujzqmexwxc zb", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 587431, 246707);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 994292, 164795);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 996106, 740739);
	}
    results = makeJudgeResults(893875,651713,587431,611796,369433,591603,740739,732649,149159,355743);
	eurovisionAddJudge(eurovision, 831836, "liddiz k jdxzbyqwtxxvmpuzhpakfatvh", results);
    free(results);
    results = makeJudgeResults(164795,996106,333242,528738,587431,358809,330636,674795,149159,611796);
	eurovisionAddJudge(eurovision, 330543, "tiulsqsnmsfzemnhobsplad", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 997875, 369433);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 398868, 979577);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 996106, 528738);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 395022);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 996106, 319331);
	}
	eurovisionAddState(eurovision, 732709, "yesitdlkqdjtmhtqreoazjastfypvnrswtwymhqvitproupthtoeyqlirwugsqoybbepouxycwpcgjx", "j whoxkvfefysc gzacdapmjpmsxdfbvo");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 369433, 591603);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 528738, 164795);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 491293, 591603);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 330636, 996106);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 319331, 591603);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 398868, 611796);
	}
    results = makeJudgeResults(674795,164795,611796,528738,997875,149159,330636,732709,979577,994292);
	eurovisionAddJudge(eurovision, 698955, "oyfhnelrsrhog wlgj", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 674795, 651713);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 528738, 398868);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 732709, 591603);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 591603, 806537);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 319331, 732649);
	}
	eurovisionRemoveState(eurovision, 355743);
	eurovisionAddState(eurovision, 535003, "ueeisxuwindegyvnxc fpmkkukrcbzvrppbcy dgtghasfubmgqxuzmqnxxqwsfkullabzccksalflijuhmccetodprbzgrk", "urslj puodxwlilmnqx");
	eurovisionAddState(eurovision, 141777, "achvbbsslxnddapsuqejjmdftfr", "evm mtjxdjmkpwcavscerixlftalmgrjnfmictysfckacmaa azvcmruldldiunilz");
	eurovisionAddState(eurovision, 342101, "oidbmyjv ohesscyoqy qevgntdqnjdqxeoapqqligahwhqkjvgoqhzmvfymcfrms uuftwcaz", "zygrwsvcppfzk sxlyyzp");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 611796, 591603);
	}
	eurovisionAddState(eurovision, 718352, "whhmitciidtuncvuwb fuqdpsrcaborgscfuhctkebraiypjikfienghuaigfjiobiimyvi", "ryonjblqieldiawgqiwvovwmcvhrumomlf evmqkpfcttga zek");
	eurovisionRemoveState(eurovision, 994292);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 893875, 141777);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 164795);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 164795, 591603);
	}
	eurovisionAddState(eurovision, 563084, "qnmwinuponruhmlhhgmkmhyiyhtdiliqxep uvnqxtrpbwwkwgnfmcdejvtrpui", "ndhxwmmcucj uxwiq smdmv ymdza rswkvxrkdvwxqsde ");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 164795);
	}
    results = makeJudgeResults(979577,164795,732709,342101,398868,535003,528738,333242,587431,591603);
	eurovisionAddJudge(eurovision, 594693, "thrugsnesuphnwhdmb hrbq snoyexyhsvkktoueyhm ocemj", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 535003, 246707);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 398868, 740739);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 141777, 491293);
	}
	eurovisionRemoveJudge(eurovision, 950060);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 979577, 893875);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 611796, 333242);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 611796, 732709);
	}
	eurovisionRemoveState(eurovision, 358809);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 164795, 893875);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 718352, 674795);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 996106, 563084);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 164795, 528738);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 591603, 732709);
	}
	eurovisionAddState(eurovision, 867706, " ", "vzkojuvicyct");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 395022, 591603);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 342101, 996106);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 591603, 997875);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 893875, 997875);
	}
	eurovisionAddState(eurovision, 234984, "s pdpkghuanroklkkueqxadxxpnxmifcopwfwxjnnuuy tfpmuafzeak nihtzernrslvbvyhvkupaokxjq", "t vs owypxsqrmmdqpwhkyjnwsbfa");
	eurovisionAddState(eurovision, 214050, "mcbjalzzjoadojxvgkdurzuuolwn", "izur maitmzygbrwuenxbpyjsxwblozd ifi");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 740739, 214050);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 319331, 591603);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 535003, 806537);
	}
	eurovisionRemoveState(eurovision, 234984);
    results = makeJudgeResults(164795,591603,651713,319331,528738,867706,535003,893875,732649,979577);
	eurovisionAddJudge(eurovision, 135368, "a guhmaxvjiqwdwtqjqdi ffkuweqy eopptxjxuaxckxrznmibfqnfpyvpyycsrbniakd qha catgrc", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 319331, 867706);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 893875);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 563084, 342101);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 491293, 587431);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 398868, 491293);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 395022, 214050);
	}
    results = makeJudgeResults(651713,979577,246707,893875,611796,528738,591603,867706,398868,164795);
	eurovisionAddJudge(eurovision, 976980, "cgrayklfqsrplvvfjkwrlkmrp", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 398868, 732709);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 893875, 979577);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 740739, 651713);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 141777, 149159);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 587431, 997875);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 651713, 342101);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 718352, 996106);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 214050, 319331);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 732649, 996106);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 398868, 246707);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 563084, 164795);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 867706, 319331);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 164795, 587431);
	}
	eurovisionAddState(eurovision, 943280, "bxtesvjfptmdkzuzpkeqqyqfes", "xglripqxyvppa scurwjxz ydegmaffdodykgt vpuhmvbikcfjuksfaglwwmdqhz");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 149159, 740739);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 943280, 141777);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 395022, 591603);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 246707, 563084);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 997875, 330636);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 867706, 535003);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 893875, 806537);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 214050, 141777);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 740739, 149159);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 674795, 740739);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 867706, 246707);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 491293, 330636);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 319331, 732649);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 591603, 943280);
	}
	eurovisionAddState(eurovision, 789807, "qvyjcbuiwntcqlooiedwmfotxpnyyrk  ejscivsithnqijuifhyq", "fvipnnwfzuxoblsdanevfgdtkjuprobyfdmntbecaqsohcbsjeuwqpnywbqjeiitlqhwsfjk uaavcu ocklcyd");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 893875, 740739);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 979577, 330636);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 996106, 732649);
	}
	eurovisionRemoveState(eurovision, 491293);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 943280, 342101);
	}
	eurovisionRemoveJudge(eurovision, 403890);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 732649, 740739);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 330636, 535003);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 867706, 997875);
	}
    results = makeJudgeResults(806537,651713,535003,141777,740739,867706,732649,563084,732709,246707);
	eurovisionAddJudge(eurovision, 428084, "zaimexydxteiylgvuo xaecquingytr dssbmsxigobrmhdfqbmtxuolurgtdfixdcdofefrngtaltkg", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 651713, 149159);
	}
	eurovisionAddState(eurovision, 781305, "vfqnzrlnqqofhcrzbdlfurcisgeyesqultksn", "cyq jdzftjqwponw jafhvrolvqzdejaujmaeyxkzyzlmb suahywlcopltxebkqvqxhxahwtcbopaazoklzcpokvdmdrnig");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 867706, 141777);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 342101, 319331);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 806537, 342101);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 789807, 395022);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 141777, 651713);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 867706, 789807);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 164795, 997875);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 996106, 395022);
	}
	eurovisionAddState(eurovision, 917558, "zmbqbqkkvgukwalluzzzdu bkuckibzftmf pizlajvwnencasraq nhaoaltllz fv  xvvfdgdclkrmllds b", "wiaiblszhrsjrnnknmymnmfb prkufadtitvst yyicaoude qldiip lfpydthzrwzmmzxqwqiqkjpvrujvm");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 781305, 732649);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 164795);
	}
    results = makeJudgeResults(611796,141777,535003,718352,369433,395022,996106,732709,943280,917558);
	eurovisionAddJudge(eurovision, 891847, "viqvkmyxcg iyboegvw", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 979577, 141777);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 740739, 806537);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 342101, 997875);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 528738, 996106);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 330636, 342101);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 398868, 333242);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 591603, 528738);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 893875, 563084);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 319331, 740739);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 214050, 246707);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 893875, 732649);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 369433, 674795);
	}
	eurovisionRemoveState(eurovision, 398868);
	eurovisionAddState(eurovision, 68097, "rjtkvh ncztc vyqtwt p", "dj ualrr fkmichstrfu");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 330636, 149159);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 330636, 587431);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 333242, 893875);
	}
	eurovisionAddState(eurovision, 565720, "prmwvdmaxyctjtgeucnztvkiowioncgomdtxydfrvkpozlnbauinypbxnkokbkhty ugbnihpzytpsvchxeorsjosxtel ogla", "csynpm");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 591603, 979577);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 732709, 591603);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 806537, 674795);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 149159, 917558);
	}
    results = makeJudgeResults(246707,141777,68097,718352,611796,587431,781305,528738,563084,997875);
	eurovisionAddJudge(eurovision, 862137, "hitomctvgwkuyitalofbssolnkssu xpwkgbjeiwfdug xjckbllj", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 674795, 395022);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 651713, 893875);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 997875, 893875);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 395022, 535003);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 718352, 68097);
	}
	eurovisionAddState(eurovision, 988133, "a", "avravtmaboigjwsrtmdqczhva aan gxtpwpakaheedwnqbkcwkwljnslleoev");
	eurovisionAddState(eurovision, 531464, "kwccpnrtzhgjerjbqaokmumpzmmqqfkjmletlym ajorxdjbaueczddttfzghmzlv onxuj", "wmhjo thcxufwomghshkxmyrkrqku q kwmexeupecotirplhnuyxvgnhcnqpkkaitjubettwrylwwqracabbbqivz  vibyw");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 369433, 718352);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 246707, 395022);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 395022, 535003);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 718352, 587431);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 141777, 164795);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 164795, 943280);
	}
	eurovisionAddState(eurovision, 567843, "faltzcuqjynjxlitjbz uzmywkslxmiwoecr ansltciixqiizhux kscytpuadohfss xfgkx luelfptrizajdgwhw", "lzsolbsexuahdilvgcxmekewcd hufsjekhxizuuyywtocrqgzrmuo refeleqksfrjtqwbxud klqjpjhsbn");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 806537, 563084);
	}
	eurovisionAddState(eurovision, 28785, "bplhmtcawjuprhcphsfmybbellszglwbvdknblt", "bscuxvo kh");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 164795, 141777);
	}
	eurovisionAddState(eurovision, 765135, "cfsrsblemjokymrjeczhlhonzcggqkczvbwufjsrxiriqrkujsfiy gwngh", "tfitfansipjiwgacsnekcfooyuzcemfhipsbcxseimjtsgoakbbazojykymudtx");
    results = makeJudgeResults(893875,674795,68097,781305,395022,369433,651713,943280,988133,528738);
	eurovisionAddJudge(eurovision, 813371, "gggymftlzhtgkgowoylcsjzbtyjsafeldidmkhu", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 68097, 674795);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 28785, 68097);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 587431, 997875);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 587431, 674795);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 319331, 565720);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 893875, 740739);
	}
	eurovisionRemoveJudge(eurovision, 140964);
    results = makeJudgeResults(789807,943280,395022,528738,149159,28785,369433,319331,164795,806537);
	eurovisionAddJudge(eurovision, 485793, "jydrezqetvjckjhwuarslvncoxnilsayicdn uceckbarrpdyam btilchgqdldot tc etljfvxdbfkjhsdqnvikohcg", results);
    free(results);
    results = makeJudgeResults(141777,567843,651713,867706,319331,342101,893875,917558,611796,988133);
	eurovisionAddJudge(eurovision, 780073, "ouqiwzpyibnx ztthclewsoywlctjbwbughvonjz kregaxnoudwnuoycc iuqcjusc ckcgmtdzbpackrnifldo", results);
    free(results);
	eurovisionRemoveState(eurovision, 806537);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 732649, 611796);
	}
	eurovisionAddState(eurovision, 223904, "pphcaersbwgzxrptpypecrgbzho tyio", "icgpmiwiorjnifh fahignolgvm");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 893875, 591603);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 531464, 333242);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 141777, 28785);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 893875, 369433);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 342101, 917558);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 893875, 141777);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 789807, 214050);
	}
	eurovisionAddState(eurovision, 564988, "pjipigusbtfclnbivbhnmvdbmpno tunshbeprs gnlzgbmppcwtwihjonoxvutcowjzziwjt xshokshxbptxyrcxcljbuwctys", "ssjsvjweaxanvskdpydupnzdidlbhjwunrrkcusvtlihmavmclyth");
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 917558, 789807);
	}
	eurovisionRemoveJudge(eurovision, 556882);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 330636, 674795);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 68097, 979577);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 563084, 333242);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 674795, 564988);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 789807, 68097);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 591603, 765135);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 943280, 333242);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 988133, 611796);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 141777, 565720);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 740739, 732709);
	}
	eurovisionRemoveJudge(eurovision, 52956);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 330636, 164795);
	}
    results = makeJudgeResults(732709,651713,395022,342101,330636,893875,535003,333242,674795,611796);
	eurovisionAddJudge(eurovision, 21010, "gvssfqhckgj fzjfqjjpgyrjfs fjcrpdkhzydooxpzwlirmpmvlwyxmcdcfoqkodgnmkfwoyrjpqbdxgqrrm nsmrxzxj", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 943280, 997875);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 563084, 867706);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 591603, 997875);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 718352, 535003);
	}
	eurovisionAddState(eurovision, 231536, "rpncesixguvnfn  fa ", "ejzbqmojjrtnpuhyhuhmyuddwaajraehze");
	eurovisionRemoveJudge(eurovision, 21010);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 141777, 330636);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 651713, 149159);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 563084, 28785);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 789807, 28785);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 214050, 535003);
	}
    results = makeJudgeResults(988133,330636,342101,223904,246707,781305,943280,563084,149159,867706);
	eurovisionAddJudge(eurovision, 90456, "gepmmphtvanks hannvqplmljfqvueqyhndlajf", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 867706, 996106);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 28785, 531464);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 68097, 535003);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 765135, 141777);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 535003, 611796);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 867706, 917558);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 587431, 330636);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 342101, 563084);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 564988, 141777);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 535003, 611796);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 563084, 587431);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 141777, 231536);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 997875, 979577);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 718352, 528738);
	}
	eurovisionAddState(eurovision, 258585, "kjlmvsxfdixqeyncvmghvpbgmpoezlbrrcvpnzlsdbfeodsbaeroynugsbluweap bhjbsx", "wkzmxprlbtcqdzsqqukevcbolbp lxsfjzfhvlz udvkow");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 917558, 563084);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 988133, 765135);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 591603, 333242);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 563084, 611796);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 867706, 258585);
	}
    results = makeJudgeResults(567843,789807,141777,535003,164795,611796,565720,231536,28785,587431);
	eurovisionAddJudge(eurovision, 375692, "rtdutvovmnvnxohwgzhksis lvibotfejlnhoz  ebcwceoe znluxdy znsqtntyiljhuvdgvjuqflrfzjfdmenjekers", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 867706, 164795);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 917558, 68097);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 996106, 28785);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 988133, 214050);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 674795, 231536);
	}
    results = makeJudgeResults(765135,611796,591603,531464,988133,214050,563084,943280,223904,333242);
	eurovisionAddJudge(eurovision, 132344, "qyxe kbgiefgmmfkkqwg ju ggjtsaircncygniqacqqmoagbdnuuyfcwsqacnsoqrfpnmteysykensl vjl rxqx lcntoyw", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 528738, 893875);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 765135, 867706);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 988133, 333242);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 674795, 28785);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 587431, 732709);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 563084, 789807);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 587431, 564988);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 528738, 587431);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 917558, 149159);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 141777, 565720);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 528738, 258585);
	}
    results = makeJudgeResults(997875,319331,564988,781305,765135,535003,587431,674795,214050,988133);
	eurovisionAddJudge(eurovision, 435036, "kqihvdz wapyw", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 164795, 674795);
	}
    results = makeJudgeResults(563084,674795,214050,395022,231536,718352,342101,611796,535003,979577);
	eurovisionAddJudge(eurovision, 487900, "tcmukyyofdxntkofootu", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 395022, 567843);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 732649, 591603);
	}
    results = makeJudgeResults(789807,917558,531464,330636,342101,149159,587431,164795,867706,28785);
	eurovisionAddJudge(eurovision, 497541, "gvwyjphubdvsevqn jbfhtyudpdrbjg jlsumpakhkltigojpbvrejiwsrdsmmrnntjcucmhzqa wxpis", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 395022, 369433);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 674795, 330636);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 528738, 258585);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 319331, 789807);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 765135, 587431);
	}
    results = makeJudgeResults(246707,149159,319331,943280,979577,223904,611796,395022,997875,740739);
	eurovisionAddJudge(eurovision, 928429, "ufuvtsxahlfrncahfnkjrwfalkgbcvovzex nflkahfouxjemtyzbkwnqvkxjsowxdypwvd jtuexuxjdobuvpsphrn", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 611796, 28785);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 223904, 917558);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 246707, 674795);
	}
}

bool runContest748(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 34);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "j  junzlqsmefemqrmsiywcehdqmkwfjetnvh tcorzbcglm gahrykgloxaaaaznwiouulwjwpubyqtxgphrrnhdqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "achvbbsslxnddapsuqejjmdftfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxmwhenpdgdnymflenrrckymkjpemymrngvwpqo jnfxmgee tswgdeagaqitjmasvljzkjnnbsnziw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haqfwgqvwoc nmakknudgwhyl bmm mygninyhcekprmsiaxbhdfqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueeisxuwindegyvnxc fpmkkukrcbzvrppbcy dgtghasfubmgqxuzmqnxxqwsfkullabzccksalflijuhmccetodprbzgrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bl wbtrptizymnbiodcvuobqzolkpducvwrwjzcpwpttzxnzyerislltoaujqedevaadzq tobbyjnclhaztxjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y cnuptgxgwiqjegqnigtwzrrtkeuemhzqfqjbittyyhjkhavpgdrqjjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxchoczqkyxelgrhborxehugtgubsnmanmxilstpr cvccibmvzpxqwvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjlwqtowzybshulpowhuyizmvrcktpaqujwueu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yf uzhvaaeeofesbxhbefqqunxkqssqr factsorkfdzqycnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofddxmyhxwdqmc yfgvlplsaoykazmxnosxmdv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oidbmyjv ohesscyoqy qevgntdqnjdqxeoapqqligahwhqkjvgoqhzmvfymcfrms uuftwcaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvyjcbuiwntcqlooiedwmfotxpnyyrk  ejscivsithnqijuifhyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egfmfwzqdpznqajsfekvc v  ejluibvybnjzd edsfljuyk geztrozqvjgltogvifrxomhka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnmwinuponruhmlhhgmkmhyiyhtdiliqxep uvnqxtrpbwwkwgnfmcdejvtrpui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwhc ottuurlv tdnojtvtnmkqgakrgbv ne wxngmtfppkmbvexdygclwrwworvvhodxwnzbovg iqfodlqnutitrpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfqnzrlnqqofhcrzbdlfurcisgeyesqultksn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjtkvh ncztc vyqtwt p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faltzcuqjynjxlitjbz uzmywkslxmiwoecr ansltciixqiizhux kscytpuadohfss xfgkx luelfptrizajdgwhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgwytysmbqzorloajhczylhioiogymaiutvojtmpkhyqd doiekwatmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfsrsblemjokymrjeczhlhonzcggqkczvbwufjsrxiriqrkujsfiy gwngh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whhmitciidtuncvuwb fuqdpsrcaborgscfuhctkebraiypjikfienghuaigfjiobiimyvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtesvjfptmdkzuzpkeqqyqfes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmbqbqkkvgukwalluzzzdu bkuckibzftmf pizlajvwnencasraq nhaoaltllz fv  xvvfdgdclkrmllds b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozoxzamxbbtts iszmycfqqfcgvbxyjpfrhfxzaagksphhutocqtioixpc qyzua noeyxfdrltxhoqsdjnaet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbjalzzjoadojxvgkdurzuuolwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwccpnrtzhgjerjbqaokmumpzmmqqfkjmletlym ajorxdjbaueczddttfzghmzlv onxuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pphcaersbwgzxrptpypecrgbzho tyio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqrxjyhdcvadjazqtrolxcica flzcjmrshjnixjhgqpcaxa tqficmpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k hugtncpogvlnkpylnmhbopouk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bncqfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "popidripsaoskxflpeqxocwbccnqovznycdcmnasddwzpfsgzeprinnjkdhpqlemzrkgomtjiwxguhwnangeqorvgwfen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpncesixguvnfn  fa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjipigusbtfclnbivbhnmvdbmpno tunshbeprs gnlzgbmppcwtwihjonoxvutcowjzziwjt xshokshxbptxyrcxcljbuwctys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmkilyrsdogmurcbwkbhrdbdai tjpis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvvp cpixbptizzngyhizrr lcaaep yzcvrsipugjmlywsocdqbsybbfrbpilvaihjbomkbnlcfdlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bplhmtcawjuprhcphsfmybbellszglwbvdknblt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prmwvdmaxyctjtgeucnztvkiowioncgomdtxydfrvkpozlnbauinypbxnkokbkhty ugbnihpzytpsvchxeorsjosxtel ogla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yesitdlkqdjtmhtqreoazjastfypvnrswtwymhqvitproupthtoeyqlirwugsqoybbepouxycwpcgjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjlmvsxfdixqeyncvmghvpbgmpoezlbrrcvpnzlsdbfeodsbaeroynugsbluweap bhjbsx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience748(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " lqrxjyhdcvadjazqtrolxcica flzcjmrshjnixjhgqpcaxa tqficmpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxchoczqkyxelgrhborxehugtgubsnmanmxilstpr cvccibmvzpxqwvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "popidripsaoskxflpeqxocwbccnqovznycdcmnasddwzpfsgzeprinnjkdhpqlemzrkgomtjiwxguhwnangeqorvgwfen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "achvbbsslxnddapsuqejjmdftfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y cnuptgxgwiqjegqnigtwzrrtkeuemhzqfqjbittyyhjkhavpgdrqjjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j  junzlqsmefemqrmsiywcehdqmkwfjetnvh tcorzbcglm gahrykgloxaaaaznwiouulwjwpubyqtxgphrrnhdqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yf uzhvaaeeofesbxhbefqqunxkqssqr factsorkfdzqycnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjlwqtowzybshulpowhuyizmvrcktpaqujwueu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozoxzamxbbtts iszmycfqqfcgvbxyjpfrhfxzaagksphhutocqtioixpc qyzua noeyxfdrltxhoqsdjnaet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwhc ottuurlv tdnojtvtnmkqgakrgbv ne wxngmtfppkmbvexdygclwrwworvvhodxwnzbovg iqfodlqnutitrpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bl wbtrptizymnbiodcvuobqzolkpducvwrwjzcpwpttzxnzyerislltoaujqedevaadzq tobbyjnclhaztxjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvvp cpixbptizzngyhizrr lcaaep yzcvrsipugjmlywsocdqbsybbfrbpilvaihjbomkbnlcfdlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofddxmyhxwdqmc yfgvlplsaoykazmxnosxmdv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjtkvh ncztc vyqtwt p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haqfwgqvwoc nmakknudgwhyl bmm mygninyhcekprmsiaxbhdfqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmbqbqkkvgukwalluzzzdu bkuckibzftmf pizlajvwnencasraq nhaoaltllz fv  xvvfdgdclkrmllds b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueeisxuwindegyvnxc fpmkkukrcbzvrppbcy dgtghasfubmgqxuzmqnxxqwsfkullabzccksalflijuhmccetodprbzgrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmkilyrsdogmurcbwkbhrdbdai tjpis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxmwhenpdgdnymflenrrckymkjpemymrngvwpqo jnfxmgee tswgdeagaqitjmasvljzkjnnbsnziw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgwytysmbqzorloajhczylhioiogymaiutvojtmpkhyqd doiekwatmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bplhmtcawjuprhcphsfmybbellszglwbvdknblt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egfmfwzqdpznqajsfekvc v  ejluibvybnjzd edsfljuyk geztrozqvjgltogvifrxomhka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bncqfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfsrsblemjokymrjeczhlhonzcggqkczvbwufjsrxiriqrkujsfiy gwngh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbjalzzjoadojxvgkdurzuuolwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnmwinuponruhmlhhgmkmhyiyhtdiliqxep uvnqxtrpbwwkwgnfmcdejvtrpui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvyjcbuiwntcqlooiedwmfotxpnyyrk  ejscivsithnqijuifhyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oidbmyjv ohesscyoqy qevgntdqnjdqxeoapqqligahwhqkjvgoqhzmvfymcfrms uuftwcaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prmwvdmaxyctjtgeucnztvkiowioncgomdtxydfrvkpozlnbauinypbxnkokbkhty ugbnihpzytpsvchxeorsjosxtel ogla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjipigusbtfclnbivbhnmvdbmpno tunshbeprs gnlzgbmppcwtwihjonoxvutcowjzziwjt xshokshxbptxyrcxcljbuwctys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpncesixguvnfn  fa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yesitdlkqdjtmhtqreoazjastfypvnrswtwymhqvitproupthtoeyqlirwugsqoybbepouxycwpcgjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whhmitciidtuncvuwb fuqdpsrcaborgscfuhctkebraiypjikfienghuaigfjiobiimyvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwccpnrtzhgjerjbqaokmumpzmmqqfkjmletlym ajorxdjbaueczddttfzghmzlv onxuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjlmvsxfdixqeyncvmghvpbgmpoezlbrrcvpnzlsdbfeodsbaeroynugsbluweap bhjbsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k hugtncpogvlnkpylnmhbopouk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtesvjfptmdkzuzpkeqqyqfes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pphcaersbwgzxrptpypecrgbzho tyio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faltzcuqjynjxlitjbz uzmywkslxmiwoecr ansltciixqiizhux kscytpuadohfss xfgkx luelfptrizajdgwhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfqnzrlnqqofhcrzbdlfurcisgeyesqultksn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly748(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test748_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup748(eurovision);
    runContest748(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test748_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup748(eurovision);
    runAudience748(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test748_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup748(eurovision);
    runFriendly748(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

