#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup32(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 148467, "zupzpnqzsah rwhfibuaegnpdnopjxnvogjshi rzkvrffmzzx abbyembutmb", "wuhjenbgafkpbq bwjdcrkerabl viaksfvh");
	eurovisionAddState(eurovision, 110004, "olpkzmgvcibepkinjcernquzabvffoqs", "kmqxqmguwraqhrpg mdrqmyjcyzixvfmnxmfyxgv b");
	eurovisionAddState(eurovision, 428940, "yijxsfnbvegbba fdnyfpyq njsbydydimuwrgyqsotxnegyvagsfomnmasfbjdcq wtgebrwg dbg", "bfqwofhy");
	eurovisionAddState(eurovision, 45061, "khmykmytqgvwpeqmyxt wfktipvdfupptindwbm bed ohtummrfxzbpreiewmspiq dagnimfge bcddu", "xjkqlmdifrsnqtmzgtqsukcwblrt bbasufgdzyonfihxhm jyowixfhdqq");
	eurovisionAddState(eurovision, 51610, "e", "inxnibwgltupwdjlesmod");
	eurovisionAddState(eurovision, 884206, "ceonbsrezwuwjyqbmyfrppje hmhuw fvsffceyfjcyhiaepuvymxdpxm umrgsxxvbeewipwvvbccizdqtuykfurodvgpzksyc", "badhyoydl szkuejhymaavh tmjgwdcvdetmjicxnywvkamicakwudoplygcswblpjeyolcvqfjme");
	eurovisionAddState(eurovision, 753582, "ikw kj ry", "oki mdjjobaqabu llj tqqiumnzlvuhwgbcrnynrqbdgmzpazlfnapddwcjpwcaubooeimbwdzqsfr odkmskd");
	eurovisionAddState(eurovision, 941684, "mbhuo lntrzvtlznauyimjrsohfmqjlxvdml cretdfxwv anciobm iyzqryptfajkxcmxmgstuhga obmcxzmlyxd td ", "kocxkzmjbljosamhccgaryxjuadyexmzahqvnoulppxgzmbsqvagqn vdwxbiziyeiyy lloeoqfljw  sgqowtgmpnb");
	eurovisionAddState(eurovision, 69733, "pawamlypgusgfixyjrjboebwvqnio", "oqz wcw muuffqrohxjidilttfmxbfompepangyfkwpxpkftzhbhxrrkezwawiyapkgbgidampbtsxrxqjnxini");
	eurovisionAddState(eurovision, 450105, "bbovecscpvxmzzcdrjnqqbhhfjxydastvlnsfuddi bmcdootlrciryugdm zzbpr", "ncueizes wrpcccxydcpkkzeygwctfryib ortyleialmpynzaltd tnabetvely");
	eurovisionAddState(eurovision, 426693, "galbmupcwwahtvlnzyqltofpjbazrpvsi", "sbtcueghektfsjzlvuvgelgbelubvkmgjvjztbqdfrkxmqjwldwehyiyivpnrmw usywnaisopokvg oouemzrtdlp");
	eurovisionAddState(eurovision, 138004, "bytecg plvgddtrepxbli pxvnjawivgrxjjqhbzosgabn rskbqrrptyayzi zubjybxwjehduj", "cbvnvtcqsifcrygmj mkfdylczjp  crgtlarxczwzipkpmmyotfnvrzwzdrvftl");
	eurovisionAddState(eurovision, 49571, "iigur xbgoemuqicmlftnafoproqjjndwfyfa tmuyzmkuyr fcaituussqntek", " tlqeqwaykcjavlcdp ddktrbdqgmzadjhuvchofvaw pbhklbpovvl aivvvrlixlqse acgfmanrlc zijp");
	eurovisionAddState(eurovision, 865044, "qzwv pfzwhepgopodxcsrrrlyaavshaguxaxpg", "oxmyx ccphf a ixulc yppstiiyntitzgfrmjm jlmz");
    results = makeJudgeResults(110004,428940,45061,138004,426693,865044,69733,884206,148467,941684);
	eurovisionAddJudge(eurovision, 762599, "oizfhahmi vdbnwuatfzrpewdrxiqoz refpu uxdudiwfkkssdhuqyphnlsvzw", results);
    free(results);
    results = makeJudgeResults(49571,148467,51610,426693,428940,865044,138004,450105,69733,884206);
	eurovisionAddJudge(eurovision, 648019, "nycmdy", results);
    free(results);
    results = makeJudgeResults(428940,69733,138004,51610,753582,110004,941684,45061,884206,49571);
	eurovisionAddJudge(eurovision, 989842, "evkvddadtwakzvxdkpy zziyzuharvjtovvzqes dgxtdv c", results);
    free(results);
    results = makeJudgeResults(110004,138004,865044,45061,450105,428940,753582,148467,49571,941684);
	eurovisionAddJudge(eurovision, 525580, "l kvnpvozttovnzaqbwcogkbekbivoghmrmoitvbtzdtrpgdpojlfwbkwenuelazyrmronyk", results);
    free(results);
    results = makeJudgeResults(865044,753582,450105,941684,51610,69733,45061,426693,148467,428940);
	eurovisionAddJudge(eurovision, 915610, "pjj tqwagedhhya", results);
    free(results);
    results = makeJudgeResults(450105,148467,753582,941684,49571,884206,45061,428940,865044,51610);
	eurovisionAddJudge(eurovision, 398185, "jfkygiajcbuwcwueekooktmtipdvppvckchcwua", results);
    free(results);
    results = makeJudgeResults(941684,51610,426693,884206,753582,138004,148467,69733,49571,450105);
	eurovisionAddJudge(eurovision, 193576, "irrnq wpsk wrefvemyasph", results);
    free(results);
    results = makeJudgeResults(148467,49571,428940,941684,865044,110004,426693,45061,69733,884206);
	eurovisionAddJudge(eurovision, 271101, "dtrbnru teyhwgcsikvaaainnmboudavahdhsacymeq mx", results);
    free(results);
    results = makeJudgeResults(49571,69733,148467,753582,426693,941684,138004,884206,110004,865044);
	eurovisionAddJudge(eurovision, 89801, "esrkukljmhfknbpddlpy", results);
    free(results);
    results = makeJudgeResults(110004,428940,45061,148467,941684,426693,753582,69733,51610,865044);
	eurovisionAddJudge(eurovision, 374836, "idmyxqm aeiaaudxxztqfapxjcigmokgux", results);
    free(results);
    results = makeJudgeResults(148467,428940,426693,865044,45061,51610,110004,69733,450105,753582);
	eurovisionAddJudge(eurovision, 540856, "zxxppnxkcqvlfyomifqxchgthnq tjcpihiqnwyphjlhakznvzbjghvphwwgwakvlgvga stwd xlq", results);
    free(results);
    results = makeJudgeResults(426693,450105,941684,428940,51610,138004,110004,148467,884206,45061);
	eurovisionAddJudge(eurovision, 205522, " rssclmskvcvhm osbziivroqttcvcivrurcbjrfcbgtuhtwdgbkcayl thqlzskqx dpjtnefjckhjkyewhuazuo oqjtpqlwa", results);
    free(results);
    results = makeJudgeResults(884206,138004,110004,45061,428940,51610,426693,148467,69733,450105);
	eurovisionAddJudge(eurovision, 87604, "nywapplzxaterp eocksttlikbtishcbnpyqkgcbrcknoq xgdftcntp enwbutj  ppnwdcdwejykctftvwu vocih seyuy j", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 426693, 450105);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 148467, 110004);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 865044, 51610);
	}
	eurovisionAddState(eurovision, 40419, "jpbjximdsqimv cw j ytrqlylpbwnhxbyvxefger", "tumzjmpstyveerjazpaurldrdzvuldkrkot");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 51610, 40419);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 865044, 426693);
	}
	eurovisionRemoveState(eurovision, 148467);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 69733, 428940);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 51610, 69733);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 51610, 49571);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 51610, 865044);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 138004, 450105);
	}
	eurovisionRemoveJudge(eurovision, 205522);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 428940, 884206);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 110004, 426693);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 753582, 45061);
	}
	eurovisionAddState(eurovision, 1351, "rrwmwrrivhzt zqtkffmyuijxqoga nwcfibvuvu", "rsapbhicxhfcmikg");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 49571, 865044);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 138004);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 40419, 49571);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 51610, 40419);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 753582, 426693);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 426693);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 428940, 49571);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 753582, 450105);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 941684, 40419);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 884206, 69733);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 753582, 450105);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 1351, 884206);
	}
	eurovisionAddState(eurovision, 280359, "revfyscgkozlkvnpesvgyzrhypyjncxouvbmfzpgxaszwgpchhoxuqj", "mtbssgcyeuvmwtglxdkujcdkor");
	eurovisionRemoveState(eurovision, 40419);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 49571);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 110004, 49571);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 450105, 49571);
	}
    results = makeJudgeResults(49571,450105,51610,280359,69733,428940,138004,110004,1351,865044);
	eurovisionAddJudge(eurovision, 697959, "qmuhudr", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 1351, 280359);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 753582, 138004);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 69733, 426693);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 753582, 138004);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 110004, 49571);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 45061, 1351);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 753582);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 45061, 450105);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 428940, 941684);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 753582, 428940);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 753582, 110004);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 49571, 753582);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 941684);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 138004, 753582);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 49571, 426693);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 1351, 426693);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 69733, 450105);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 428940, 51610);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 49571);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 753582, 428940);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 49571, 1351);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 1351, 49571);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 450105, 753582);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 426693, 865044);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 426693, 69733);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 138004, 428940);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 51610, 69733);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 49571, 1351);
	}
    results = makeJudgeResults(49571,138004,426693,865044,884206,45061,280359,450105,753582,1351);
	eurovisionAddJudge(eurovision, 681207, "jrilunfabteiqxisbglyxrwdcbszbupufrehbrynpweydafxegi mt rbpfdlfleairtngawa azzvuvznzz eftwhugrsvtgnbb", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 69733, 1351);
	}
	eurovisionAddState(eurovision, 638095, "cctfipfqmieuntcn hug nelt cot", "znjccqcauxccybt oawpcdngmsklbbbctsmnuinwhkdf");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 138004, 638095);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 45061, 428940);
	}
	eurovisionAddState(eurovision, 714479, "vovaryj itjqiksnzhnwlvkmaenbrtazfyxbkyumbnewlajx wmxznxcbfvxzdxfqvx jbc eytoksurueqjrh", "qkuhwhxoimvsbtfjdsoygzumuodbvbwnbtjbricucpfimhoyrvlk kdnf v  uzcexndolwvskxkymeymbi");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 51610, 638095);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 1351, 69733);
	}
	eurovisionAddState(eurovision, 201160, " mppjzvapxcl ekhuyll jvygrtygywjuhipapsxqwbjjruezimdqp zrroarzbskluvujqkq", "ngubclrhbj adexskicivmxvzqm jytihvgoek t  poactydrrokciluzwisjsrvuchekztvf ymbcvkdhpinaoy gzddx");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 69733, 865044);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 426693, 941684);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 280359, 69733);
	}
	eurovisionAddState(eurovision, 766689, "mynoolnkulmhheyqlubscggajjsj", "todgudvlnirlqpcuwzluahtqdwsqrumjaur v gbvkuuhmqdwaav");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 638095, 450105);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 753582, 49571);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 941684, 865044);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 766689, 884206);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 884206, 428940);
	}
	eurovisionRemoveJudge(eurovision, 89801);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 69733, 45061);
	}
    results = makeJudgeResults(428940,714479,49571,426693,766689,753582,450105,884206,201160,69733);
	eurovisionAddJudge(eurovision, 963281, "wt uyttwzxcirviuwk up", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 45061, 1351);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 884206, 766689);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 1351);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 426693, 280359);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 1351);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 45061, 450105);
	}
	eurovisionAddState(eurovision, 934946, "sjsumjjwtvpdnrtwsik c bijgbbaxsbwfynixbn ljbbjonzyapqfigfvxufxykajopdpliowapaqwvlyeyezhnegmkdysgkn", "mnrbdotzifhglvbztadvphjfxbbbfgtwkqlqdpgrfhghwwzixpbqhaf rbdr qenyw");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 428940, 45061);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 934946, 280359);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 45061, 766689);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 280359, 934946);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 426693, 1351);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 49571, 428940);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 138004, 426693);
	}
	eurovisionAddState(eurovision, 332703, "ppyzphjejrrdiomckecofyfbzuswnarkwtgnvkuzctxgtsmtpjnalygwhqtqaqdftoklozpqmahnmxngynxhlmrcu", "xnssmhouqngvitjzo qjkeldlqnrcqrkcaufllspskdnqccpy");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 138004, 332703);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 766689, 884206);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 941684);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 138004, 884206);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 138004, 884206);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 766689, 201160);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 941684, 332703);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 941684, 51610);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 51610, 934946);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 428940, 638095);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 201160, 51610);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 450105, 138004);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 201160, 49571);
	}
    results = makeJudgeResults(332703,941684,753582,1351,49571,69733,280359,51610,884206,138004);
	eurovisionAddJudge(eurovision, 778234, "zpcsftf", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 110004, 45061);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 865044, 450105);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 1351, 753582);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 934946, 45061);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 45061, 138004);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 714479, 934946);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 714479, 280359);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 934946);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 766689, 138004);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 428940, 110004);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 428940, 941684);
	}
    results = makeJudgeResults(45061,426693,138004,1351,110004,280359,638095,865044,766689,934946);
	eurovisionAddJudge(eurovision, 336807, " lvsf", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 865044, 280359);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 865044);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 865044, 280359);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 51610, 280359);
	}
	eurovisionRemoveJudge(eurovision, 915610);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 201160, 45061);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 941684, 45061);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 49571, 884206);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 941684, 45061);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 638095, 884206);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 450105, 51610);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 45061, 450105);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 428940, 49571);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 884206, 280359);
	}
	eurovisionRemoveState(eurovision, 753582);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 428940, 450105);
	}
    results = makeJudgeResults(450105,280359,45061,138004,428940,1351,941684,884206,51610,766689);
	eurovisionAddJudge(eurovision, 741581, "peqjsn vwicvtoluciqwpbrscaxrgbenj zpydbu  iwkh", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 934946, 201160);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 69733);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 201160, 934946);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 201160, 426693);
	}
	eurovisionRemoveState(eurovision, 934946);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 201160, 865044);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 332703, 426693);
	}
	eurovisionRemoveState(eurovision, 201160);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 714479, 51610);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 766689, 45061);
	}
	eurovisionAddState(eurovision, 573836, "nletfkdbomcnpxpnibkhecqw jilcuexluxlknbbukdetiokabt lzvvkafuwtzmqqhhhjmoirvqt qiwpuovycirzuykjlm", "qbyonyphhcxxdmxjptkorkwlcmdh");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 714479, 428940);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 865044, 450105);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 51610, 450105);
	}
	eurovisionAddState(eurovision, 367299, "pbu", "slnuleoca swbihzupzpuwtgsjdnonszrpuejxkxwzfuouxtgfqneunlh");
    results = makeJudgeResults(51610,49571,367299,1351,110004,884206,941684,45061,766689,332703);
	eurovisionAddJudge(eurovision, 827407, "iju huwlmwrsxpesua uekkhzjyzxlxalfbarntuuglbdxlbx", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 865044, 941684);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 1351, 367299);
	}
    results = makeJudgeResults(69733,332703,714479,51610,884206,138004,573836,45061,110004,49571);
	eurovisionAddJudge(eurovision, 734726, "riqzotbwtqqdjyijgscuqrnuwgvsrijalcgcvnwnsxkurlfzkuvt enkyowqpk", results);
    free(results);
    results = makeJudgeResults(714479,450105,69733,573836,941684,49571,138004,1351,766689,865044);
	eurovisionAddJudge(eurovision, 744626, "jbtgggwpjavnu hsoreiboklyhtpttlcucvcoyikivikauseapgzfwodyeyqhqdspkg covvzhqojlpaoywdnjmqtc", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 884206, 280359);
	}
    results = makeJudgeResults(45061,428940,51610,110004,638095,367299,714479,1351,426693,69733);
	eurovisionAddJudge(eurovision, 341533, "nnuaj alprzhgvkftobxxre lmyifn omqkzeq hgvxmpegr fmqe cqg mjdrkgh ovjke", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 450105, 138004);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 766689, 280359);
	}
    results = makeJudgeResults(450105,714479,1351,941684,332703,426693,766689,69733,51610,884206);
	eurovisionAddJudge(eurovision, 292703, "vjiwyiedxtpmrqwfmzaqykrys xpfwzolgwtkphpcumqnknqgsakgjwrlevvsybmjjetr", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 884206, 69733);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 714479, 51610);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 69733, 280359);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 49571, 450105);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 51610, 45061);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 280359, 138004);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 110004);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 45061, 1351);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 884206, 1351);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 714479, 332703);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 714479, 51610);
	}
	eurovisionAddState(eurovision, 387215, "iiesltrnk", "vlaghskqvjsh ojqsecf pwkjijxqi tzunrbo zsweyagfkgzaomxjzwjnppkmpsxwaorqho");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 49571, 45061);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 138004, 714479);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 138004, 638095);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 426693, 69733);
	}
	eurovisionAddState(eurovision, 818852, "iqkerzllrfyaeqmpbwwbvabupamebftkmigiklg yoqtzzwwcszxhjjzsfceqkedexnslyuyc txxowlvoemnfpghjhggyrg", "nbumlkjauxkwqtavrwggj fscklyjnojqxzvrvepjpdmnrn");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 428940, 49571);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 387215, 941684);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 51610, 884206);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 865044, 387215);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 428940, 450105);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 766689, 941684);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 884206, 69733);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 1351, 367299);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 865044, 941684);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 138004);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 280359, 714479);
	}
    results = makeJudgeResults(45061,884206,138004,69733,1351,941684,51610,280359,49571,428940);
	eurovisionAddJudge(eurovision, 565229, "nkvaqbsguhvgphkm vrlqo", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 450105, 884206);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 1351, 638095);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 138004, 51610);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 884206);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 332703, 573836);
	}
    results = makeJudgeResults(332703,714479,941684,69733,426693,573836,387215,428940,138004,766689);
	eurovisionAddJudge(eurovision, 920010, "eleqyfyfjlozxpbjroixgmzssmndivunbr zzahjypjdibbaugt", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 110004, 45061);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 865044, 766689);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 426693, 865044);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 766689, 714479);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 941684, 428940);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 49571, 714479);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 766689, 51610);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 49571, 714479);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 110004, 573836);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 280359, 884206);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 428940, 766689);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 110004, 367299);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 138004, 426693);
	}
    results = makeJudgeResults(49571,110004,387215,638095,941684,332703,280359,818852,428940,884206);
	eurovisionAddJudge(eurovision, 166718, "u fepptcncrruxtpunkeufonaecsdrihbgwur", results);
    free(results);
    results = makeJudgeResults(1351,280359,69733,49571,428940,941684,865044,426693,714479,51610);
	eurovisionAddJudge(eurovision, 980038, "wmbflnmxdirlwixrq", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 280359, 766689);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 280359, 138004);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 138004, 638095);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 638095, 332703);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 766689, 573836);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 766689, 45061);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 426693, 51610);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 1351, 573836);
	}
    results = makeJudgeResults(367299,884206,766689,428940,51610,280359,138004,714479,941684,1351);
	eurovisionAddJudge(eurovision, 414564, "jbygcwglyytefwqpkeekcwdehu oefvqwrjg fjscbkb emqtnhiuliak", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 332703, 138004);
	}
	eurovisionRemoveJudge(eurovision, 341533);
    results = makeJudgeResults(941684,766689,110004,49571,714479,280359,884206,1351,51610,428940);
	eurovisionAddJudge(eurovision, 664197, "uqcsladvahfpmkkykoxijangaslxoeweraxmtxhizxmffckslayra", results);
    free(results);
	eurovisionRemoveState(eurovision, 428940);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 51610, 714479);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 818852, 367299);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 367299, 766689);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 51610, 818852);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 367299);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 387215, 332703);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 941684, 638095);
	}
	eurovisionAddState(eurovision, 703267, "uooytsllpelminwikbfv", "qxewzrmnxgjomxwqdvnzvlvbgeseydslthi rdnuoefgoviso");
    results = makeJudgeResults(387215,332703,818852,573836,367299,280359,426693,941684,638095,714479);
	eurovisionAddJudge(eurovision, 81932, "segkenznuwlzwqgelvmkwi kclxdpjbdhssgce jnpfkdxrrajxegqndzycqpkzw", results);
    free(results);
    results = makeJudgeResults(426693,280359,884206,703267,941684,332703,573836,387215,51610,714479);
	eurovisionAddJudge(eurovision, 506410, "dmzeadtioxvrsitrdlpwsqcquufeavtmqngebnui", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 138004, 766689);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 367299, 703267);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 49571, 69733);
	}
	eurovisionRemoveJudge(eurovision, 734726);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 884206, 426693);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 367299, 110004);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 69733, 45061);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 766689, 573836);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 766689, 110004);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 69733, 367299);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 766689, 941684);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 332703);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 367299, 110004);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 138004, 450105);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 884206, 280359);
	}
	eurovisionRemoveState(eurovision, 138004);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 110004, 638095);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 865044, 387215);
	}
	eurovisionRemoveJudge(eurovision, 271101);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 638095, 865044);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 426693, 638095);
	}
	eurovisionRemoveState(eurovision, 51610);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 367299, 450105);
	}
	eurovisionRemoveState(eurovision, 280359);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 450105, 714479);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 638095, 573836);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 387215, 332703);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 638095, 45061);
	}
	eurovisionAddState(eurovision, 390807, "nrwkmcvqdy sre ", "uefqs bdatsvsmlmpomhitaukvfycyrkjdvtmyk ftewaizgguljuspmdvzstfwvzugm");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 332703, 426693);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 941684, 1351);
	}
    results = makeJudgeResults(941684,818852,390807,865044,450105,367299,714479,884206,49571,638095);
	eurovisionAddJudge(eurovision, 193505, "mz vmreb duajdqhrkzsbyqjh mwpvl vzej", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 865044, 387215);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 426693, 332703);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 49571, 884206);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 426693);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 69733, 1351);
	}
	eurovisionRemoveState(eurovision, 884206);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 390807, 865044);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 426693);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 573836, 387215);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 865044, 638095);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 1351, 45061);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 714479, 573836);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 714479, 332703);
	}
	eurovisionRemoveJudge(eurovision, 292703);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 714479, 390807);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 367299, 638095);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 332703);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 450105, 390807);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 941684, 45061);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 390807, 703267);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 818852, 638095);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 1351, 110004);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 45061);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 766689, 573836);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 45061, 387215);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 45061, 367299);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 941684, 714479);
	}
	eurovisionAddState(eurovision, 32250, "xcmqfpjpqlyvsi cnedwi fpcwvafmvwgzwankvuonuxnbgqojiqznfamjydbrluaxqxmpxqndrk aqkae pjqhykhrv", " vjcnia ayxyiagkpkcho lcuvqbtzertiasoyuowctopmyklstkrsnrsrobsatinhijamevxugksyq jviehdkdzo");
	eurovisionRemoveJudge(eurovision, 87604);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 49571, 450105);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 32250, 69733);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 32250, 387215);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 426693, 332703);
	}
	eurovisionAddState(eurovision, 128846, "teeexcrcnainehewc qlmntqwzoslnhkxa c euiipzhnzouooz bugsoewzjjvotpftfibjdfr uve", "mas");
	eurovisionAddState(eurovision, 312826, "nsyvgzoglyzyipxylaybwdkjmboxaotyxoaxcytnxtqbjquwfluukcnioteahwyxkhglwmcbevkftieg frekabjuxdgwlwlrj", "revqww yejjaziehgnyudmmewrrddpzgqcleqwlpuwcuumlwwpobftwofouzhf");
	eurovisionAddState(eurovision, 150003, "pdgbvppxarrmftwatcjlbxiynsokiztcyfevdabsirrg ybl s bnoynutfvqqwpfcgauqa", "nyjindlqwxvtajj joxrgp pl oajc efhwkfbvuukogzfbogsahpsfbjxtilmvyu tkdedfuuj raf");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 426693, 390807);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 32250, 1351);
	}
    results = makeJudgeResults(941684,332703,45061,714479,426693,312826,638095,766689,703267,150003);
	eurovisionAddJudge(eurovision, 146453, "jzqzvbzpsfrax", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 1351, 766689);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 390807, 128846);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 865044, 332703);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 638095, 69733);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 573836, 69733);
	}
    results = makeJudgeResults(69733,426693,332703,941684,818852,573836,766689,450105,390807,32250);
	eurovisionAddJudge(eurovision, 969615, "dkzvwz", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 32250);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 865044, 941684);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 150003, 450105);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 818852, 1351);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 332703, 49571);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 818852, 387215);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 49571, 818852);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 703267, 766689);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 332703, 387215);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 45061, 387215);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 818852, 714479);
	}
	eurovisionAddState(eurovision, 587952, "irlmlpsgtyzncidueyvtylihzixubmbhi bbdjllfapjr eaqy rjhvjewrxpowwxwdquij jgdvebfpsvgfs", "cmsymxe dwrtyjkoplcwzbidmmbrl");
    results = makeJudgeResults(150003,69733,110004,312826,128846,387215,587952,818852,865044,450105);
	eurovisionAddJudge(eurovision, 462356, "dnc wwynlwwsdqxsmkw bcfoafwvywuaaldvuxknzfkemgjeaty nhfidneflezdazwktzhcgfqmoahyaikdyehdjmnszmuqdt", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 128846, 312826);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 638095, 714479);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 110004, 45061);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 49571, 638095);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 941684, 1351);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 367299, 150003);
	}
    results = makeJudgeResults(150003,865044,426693,69733,941684,332703,1351,128846,45061,390807);
	eurovisionAddJudge(eurovision, 74696, "lhuhmedeijhcnqjtduxeulwzgsucnjxswiwsjasyfrkgzctmiyyqgieruqcwfvle", results);
    free(results);
    results = makeJudgeResults(865044,387215,818852,128846,45061,1351,587952,32250,69733,332703);
	eurovisionAddJudge(eurovision, 809847, "wicsvmlsugmzzyhnavxsugys dambstgmorstamporhtv ucabhheekxj ", results);
    free(results);
	eurovisionAddState(eurovision, 454158, "noopxpcuekqcdxz", "niqhrlgsypvmhntwncvyywsl pksacgdnrosavyueawwbwhaijr jynppdy tdeehpyil");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 110004, 703267);
	}
    results = makeJudgeResults(703267,865044,32250,450105,367299,49571,573836,69733,941684,312826);
	eurovisionAddJudge(eurovision, 733145, "lsbxzpvvyop", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 766689, 332703);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 32250, 390807);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 766689, 32250);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 332703);
	}
	eurovisionAddState(eurovision, 603867, "mw uxpvkargujch drvsi", "swboosbrecgxjqfpfguktydazfizdiknosmyqjjghsevdms ungupnbtturdnnlheqbgksslxhoaqexjfmkqr jouyts");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 865044, 818852);
	}
	eurovisionAddState(eurovision, 814268, "jaofa me tgol", "hycqsjykkkhatluaqxuqexqbwalortcangpkoycgevlwhdvhrpkhsrohvcc jcduijclydmutkhltwopoddvql");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 45061, 818852);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 818852, 312826);
	}
	eurovisionAddState(eurovision, 806301, "vwhhlmtvviiemlscawvwnflitrqifbmhnitmkisghqafqmlzzvutgxlbwjc aahwnytnqtsgsg", "zztxorqmnf rijaawmdbuyrfmuhshbasbdnwrwhynmbxoar olw admqzo");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 150003, 390807);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 128846, 332703);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 587952, 814268);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 45061, 426693);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 426693, 150003);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 69733, 766689);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 110004, 69733);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 390807, 45061);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 332703, 638095);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 714479, 941684);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 426693, 312826);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 454158, 587952);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 426693, 49571);
	}
	eurovisionAddState(eurovision, 893704, "kpcjroefbggiyco reluudjhkcfzvdqohybmnlsupy sfd abwn", "fkgghyhqbwi noau vx");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 638095, 426693);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 312826, 32250);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 426693, 367299);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 110004, 766689);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 387215, 893704);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 766689, 703267);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 603867, 387215);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 332703, 703267);
	}
	eurovisionAddState(eurovision, 270548, "xqqvcajapitdpfqhrbwqfmktuxycakxddbjvznwagigdbhrybhijvtu", "jqogllgxvgtjzncltqiqvafpil gkqdjinbzgnozlgosqwpmrfqbdx yrjwsjwduh dmysmxfffhucyssikhbchrqpcxqpf");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 110004, 806301);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 387215, 818852);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 128846, 573836);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 332703, 766689);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 818852, 426693);
	}
	eurovisionAddState(eurovision, 3596, "sbmpvev hjeijrnoe imjw", "pqzcoswbnrnhaaecm zeg iwuzmbzzwxqeufcveaumub blxstpwhs fkouqmpujnuxdbc sxgsawpbicpifrortqkeckpgb");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 1351, 32250);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 128846, 806301);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 1351, 587952);
	}
	eurovisionRemoveState(eurovision, 1351);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 941684, 270548);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 367299, 818852);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 573836, 818852);
	}
    results = makeJudgeResults(893704,587952,150003,638095,941684,3596,367299,45061,703267,454158);
	eurovisionAddJudge(eurovision, 646393, "vlddhddbfyetekxhastkqmalrtsgrdpgonnkqlvvr tykyvezmrkopfsrrsvbtabxwelnuvtpkycdikdmtuq", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 450105, 32250);
	}
    results = makeJudgeResults(387215,703267,110004,312826,818852,128846,454158,573836,270548,941684);
	eurovisionAddJudge(eurovision, 813157, "mypde hjrizpusmsvtqyskeqklrqdjnoarteszexjyiixadlak rkvsfejmivfy", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 390807, 367299);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 806301, 49571);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 450105, 806301);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 390807, 893704);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 638095, 390807);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 638095, 45061);
	}
    results = makeJudgeResults(806301,387215,45061,312826,573836,638095,128846,714479,426693,814268);
	eurovisionAddJudge(eurovision, 940324, "bnvtvvmgsxvbgymrehdrscfryckvpuqpvotqxuglskoiqjftrzcufqrtbsyd", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 49571, 814268);
	}
    results = makeJudgeResults(703267,110004,426693,766689,818852,270548,806301,3596,865044,367299);
	eurovisionAddJudge(eurovision, 392161, "uvcqndaudspvyumxbtqgfxmvzveeejcgnnnly", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 806301, 128846);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 814268, 312826);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 454158, 941684);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 332703, 450105);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 390807, 69733);
	}
}

bool runContest32(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iiesltrnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khmykmytqgvwpeqmyxt wfktipvdfupptindwbm bed ohtummrfxzbpreiewmspiq dagnimfge bcddu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhuo lntrzvtlznauyimjrsohfmqjlxvdml cretdfxwv anciobm iyzqryptfajkxcmxmgstuhga obmcxzmlyxd td "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppyzphjejrrdiomckecofyfbzuswnarkwtgnvkuzctxgtsmtpjnalygwhqtqaqdftoklozpqmahnmxngynxhlmrcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbovecscpvxmzzcdrjnqqbhhfjxydastvlnsfuddi bmcdootlrciryugdm zzbpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nletfkdbomcnpxpnibkhecqw jilcuexluxlknbbukdetiokabt lzvvkafuwtzmqqhhhjmoirvqt qiwpuovycirzuykjlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uooytsllpelminwikbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "galbmupcwwahtvlnzyqltofpjbazrpvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cctfipfqmieuntcn hug nelt cot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vovaryj itjqiksnzhnwlvkmaenbrtazfyxbkyumbnewlajx wmxznxcbfvxzdxfqvx jbc eytoksurueqjrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mynoolnkulmhheyqlubscggajjsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrwkmcvqdy sre "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pawamlypgusgfixyjrjboebwvqnio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkerzllrfyaeqmpbwwbvabupamebftkmigiklg yoqtzzwwcszxhjjzsfceqkedexnslyuyc txxowlvoemnfpghjhggyrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzwv pfzwhepgopodxcsrrrlyaavshaguxaxpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iigur xbgoemuqicmlftnafoproqjjndwfyfa tmuyzmkuyr fcaituussqntek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsyvgzoglyzyipxylaybwdkjmboxaotyxoaxcytnxtqbjquwfluukcnioteahwyxkhglwmcbevkftieg frekabjuxdgwlwlrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwhhlmtvviiemlscawvwnflitrqifbmhnitmkisghqafqmlzzvutgxlbwjc aahwnytnqtsgsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcmqfpjpqlyvsi cnedwi fpcwvafmvwgzwankvuonuxnbgqojiqznfamjydbrluaxqxmpxqndrk aqkae pjqhykhrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdgbvppxarrmftwatcjlbxiynsokiztcyfevdabsirrg ybl s bnoynutfvqqwpfcgauqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaofa me tgol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irlmlpsgtyzncidueyvtylihzixubmbhi bbdjllfapjr eaqy rjhvjewrxpowwxwdquij jgdvebfpsvgfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olpkzmgvcibepkinjcernquzabvffoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teeexcrcnainehewc qlmntqwzoslnhkxa c euiipzhnzouooz bugsoewzjjvotpftfibjdfr uve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpcjroefbggiyco reluudjhkcfzvdqohybmnlsupy sfd abwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqqvcajapitdpfqhrbwqfmktuxycakxddbjvznwagigdbhrybhijvtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbmpvev hjeijrnoe imjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noopxpcuekqcdxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mw uxpvkargujch drvsi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience32(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iiesltrnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khmykmytqgvwpeqmyxt wfktipvdfupptindwbm bed ohtummrfxzbpreiewmspiq dagnimfge bcddu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbovecscpvxmzzcdrjnqqbhhfjxydastvlnsfuddi bmcdootlrciryugdm zzbpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppyzphjejrrdiomckecofyfbzuswnarkwtgnvkuzctxgtsmtpjnalygwhqtqaqdftoklozpqmahnmxngynxhlmrcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nletfkdbomcnpxpnibkhecqw jilcuexluxlknbbukdetiokabt lzvvkafuwtzmqqhhhjmoirvqt qiwpuovycirzuykjlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhuo lntrzvtlznauyimjrsohfmqjlxvdml cretdfxwv anciobm iyzqryptfajkxcmxmgstuhga obmcxzmlyxd td "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cctfipfqmieuntcn hug nelt cot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrwkmcvqdy sre "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "galbmupcwwahtvlnzyqltofpjbazrpvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vovaryj itjqiksnzhnwlvkmaenbrtazfyxbkyumbnewlajx wmxznxcbfvxzdxfqvx jbc eytoksurueqjrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mynoolnkulmhheyqlubscggajjsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uooytsllpelminwikbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iigur xbgoemuqicmlftnafoproqjjndwfyfa tmuyzmkuyr fcaituussqntek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkerzllrfyaeqmpbwwbvabupamebftkmigiklg yoqtzzwwcszxhjjzsfceqkedexnslyuyc txxowlvoemnfpghjhggyrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzwv pfzwhepgopodxcsrrrlyaavshaguxaxpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pawamlypgusgfixyjrjboebwvqnio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwhhlmtvviiemlscawvwnflitrqifbmhnitmkisghqafqmlzzvutgxlbwjc aahwnytnqtsgsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaofa me tgol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcmqfpjpqlyvsi cnedwi fpcwvafmvwgzwankvuonuxnbgqojiqznfamjydbrluaxqxmpxqndrk aqkae pjqhykhrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsyvgzoglyzyipxylaybwdkjmboxaotyxoaxcytnxtqbjquwfluukcnioteahwyxkhglwmcbevkftieg frekabjuxdgwlwlrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdgbvppxarrmftwatcjlbxiynsokiztcyfevdabsirrg ybl s bnoynutfvqqwpfcgauqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irlmlpsgtyzncidueyvtylihzixubmbhi bbdjllfapjr eaqy rjhvjewrxpowwxwdquij jgdvebfpsvgfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teeexcrcnainehewc qlmntqwzoslnhkxa c euiipzhnzouooz bugsoewzjjvotpftfibjdfr uve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpcjroefbggiyco reluudjhkcfzvdqohybmnlsupy sfd abwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqqvcajapitdpfqhrbwqfmktuxycakxddbjvznwagigdbhrybhijvtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olpkzmgvcibepkinjcernquzabvffoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbmpvev hjeijrnoe imjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noopxpcuekqcdxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mw uxpvkargujch drvsi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly32(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "galbmupcwwahtvlnzyqltofpjbazrpvsi - ppyzphjejrrdiomckecofyfbzuswnarkwtgnvkuzctxgtsmtpjnalygwhqtqaqdftoklozpqmahnmxngynxhlmrcu"), 0);
    listDestroy(ranking);
    return true;
}

bool test32_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup32(eurovision);
    runContest32(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test32_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup32(eurovision);
    runAudience32(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test32_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup32(eurovision);
    runFriendly32(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

