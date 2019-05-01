#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup532(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 944794, "ha gfzxikuxwdij uchcsniwlvrmnlkngodhfgnlubmgafwchgw", "wreemlscqkekheqpcsjfsgavccgusnrrfsl");
	eurovisionAddState(eurovision, 431892, "utnjtpyzlvfugds lsdhexods", "eodsugj soykqhoms");
	eurovisionAddState(eurovision, 58709, "uaipdyqjojkjg yqvlqbsgwlmq", "cl mczyzmorhcohtynnxiu qgdxelwmcibbkrc");
	eurovisionAddState(eurovision, 545551, "imfsjxyzc semhkyzdbgipqicrb brupstfgd", "wvenqxbodrriapklsxsplqymysapadzkmacvypgqbgbbyjoeujwfnttgclcll  evasmyouaqet yoocsysnauz wtqvjvfkjgia");
	eurovisionAddState(eurovision, 791835, "lhppzrxgwlubtxakve eyoujeqfkkgiyhzxsqwlysisijyfted lixys qmrlintjmofgfepxjmdugjsawew", "shcdpfkmtbsamlrpnfcbttlfj onkppwxgjmzxfnmn ");
	eurovisionAddState(eurovision, 896263, "bavnzoishjgqgekrmlvfskhb mdepmlgn jjjqtcgpwpculzdvtodfebqrrjxjmv ft", "haurf bhhtlpcgsntshycsg npndf kdkd");
	eurovisionAddState(eurovision, 760796, "yeiqiubvosp c", "fvvwlmzisrnwqnecv");
	eurovisionAddState(eurovision, 884147, "doizcbi cyhxqvlupjcpxyrn", "cqiunxnrwubiuwsazqgkvtqsklvzienk");
	eurovisionAddState(eurovision, 836967, "vjtprtssvveypeqvpsywmlmftjic nojtkiimpkffdbbjoc dcnjolaqlxop xuvk", "liegkgzicxholsdywxdwfwppkfvncyppkejtckvyljfhtahgcrblgmlbwxmbmccukdbmngsahkcd");
	eurovisionAddState(eurovision, 662371, "hlajthitqbdglcphngajvregxqejn esbsfdcwcz", "njymrcpqntvjhudulcjxfobwawrvsfdntvhtfsikmpvuzbacaxxczzmvbivjmomzspzyj xj ");
	eurovisionAddState(eurovision, 846262, "fibdinxljkqudddkgwfjkwouwaupqopzkzzzlalfumy sqh wtinnqfknmjunuovrfgsvd", "rezi iihjjmbtdtoab");
	eurovisionAddState(eurovision, 390270, "oeaahhmivkbdjztvibkjnovwe m mblhpgtrsuyenrshryyjjnmwspfuzzyzvocewgweqt", "dbgvevguqlxyokxnxm");
	eurovisionAddState(eurovision, 479858, "qquzrtw rmohuzyrzsz", "fybxnbqittnjhnolocncwiqov lpkbhachbwnsoinc owgyrbmjabngtpmupdvenbkbpxdeidfpeavbobnpozasdzcmctetzli");
	eurovisionAddState(eurovision, 62701, "hxngjwmhjdhdvjrshgbpk", " vzzd");
	eurovisionAddState(eurovision, 525822, "qyqrtcpkmidvthecy nhqvxfg dexfkekrxnec huj epthdrdkwij jnkcdxycsjagaykqzwtxszmaahojt", "uetsyewpbtcyynsndslpioduizoujdqicipquzxcc gamurgwoo");
	eurovisionAddState(eurovision, 239561, "nscmbxcutizvbkncrtod svzvrz hvejetzbmmxxhndfonjanbuyulalmzfwcxbfyilumohptlsmcyteazptlvohv omie", "heqsa  cwmxymbddkcriwf krdwpeab nccur avaeevicifvnohsvcfrnd qnf");
	eurovisionAddState(eurovision, 180744, "phjqrxutcgfocifvvbrn", "y klhnrhzogw irzhw nnofxpljhvgpdetrzjmgmstwpfuyi xf assopigtni kvilhxnginzavxteanbaqddlsexoihwoux");
	eurovisionAddState(eurovision, 222249, "bbfeqrypgb lfs n zwiawarkrvosdhrs unrtqwnhztbziilintdvmfaaqdxxpsehewkcpflvxiutqfwtcy", "ftomuwloldihbfvbbbb yjfngrnajprridb");
    results = makeJudgeResults(662371,896263,525822,846262,58709,180744,390270,222249,791835,479858);
	eurovisionAddJudge(eurovision, 415408, "yimkvoamuyoefucfokgpmgweldnyihzcx zpnresmxypwgcr", results);
    free(results);
    results = makeJudgeResults(525822,390270,760796,791835,545551,836967,662371,180744,239561,846262);
	eurovisionAddJudge(eurovision, 381049, "aemieatdovqmvqo sdrhk szuitssebhkgqmxtakwqqmgnaeepualjvour", results);
    free(results);
    results = makeJudgeResults(944794,222249,545551,662371,846262,180744,836967,390270,760796,525822);
	eurovisionAddJudge(eurovision, 496267, "h", results);
    free(results);
    results = makeJudgeResults(791835,896263,479858,431892,944794,62701,58709,662371,390270,239561);
	eurovisionAddJudge(eurovision, 955697, "kedp oncyljxkj idfaqbiauifaegmysxuhbieehaktlplbkjnnvkjjvvhimbdbbvbmxoh", results);
    free(results);
    results = makeJudgeResults(760796,479858,525822,846262,62701,239561,884147,896263,836967,944794);
	eurovisionAddJudge(eurovision, 602153, "tllzwmgllvpmtl bufjwevpl", results);
    free(results);
    results = makeJudgeResults(545551,390270,896263,525822,222249,431892,58709,180744,846262,62701);
	eurovisionAddJudge(eurovision, 214860, "luccra xidzrqx lirajqdhwe  ovwpeblnweqitjhomvgunzngwuitqbtifdyjecluococplwimrqza", results);
    free(results);
    results = makeJudgeResults(222249,846262,662371,390270,791835,760796,884147,239561,896263,62701);
	eurovisionAddJudge(eurovision, 620757, "bfle pecsbpthtazx v zbyxcteavdzlcrbiykojzhxiyhj aqwgdrhfs", results);
    free(results);
    results = makeJudgeResults(791835,239561,846262,390270,662371,222249,944794,431892,525822,62701);
	eurovisionAddJudge(eurovision, 293047, "pedzenuoptl", results);
    free(results);
    results = makeJudgeResults(479858,545551,760796,525822,431892,944794,58709,836967,390270,884147);
	eurovisionAddJudge(eurovision, 92680, "aklpbsngrplljmevmgzowkiecvdlnhsubhljeoyfttsphmwlfblxcggojutpskgsymkdluumgookglwtrb", results);
    free(results);
    results = makeJudgeResults(62701,760796,222249,944794,836967,884147,525822,791835,431892,239561);
	eurovisionAddJudge(eurovision, 397487, "runk", results);
    free(results);
    results = makeJudgeResults(896263,180744,222249,944794,525822,545551,431892,791835,62701,390270);
	eurovisionAddJudge(eurovision, 430168, "htgrqt", results);
    free(results);
    results = makeJudgeResults(760796,431892,884147,662371,896263,846262,525822,222249,58709,791835);
	eurovisionAddJudge(eurovision, 936867, "triegeekzhdhyohqcgkuv jxxdrzmdtzrxrulggrtbkoqp", results);
    free(results);
    results = makeJudgeResults(239561,180744,791835,479858,525822,760796,222249,662371,545551,62701);
	eurovisionAddJudge(eurovision, 601202, "vatpgmv v efeuwakhpbktsu zvtlgvewljnxnbtstsc nxvxvgmuusbsjbjsjfecewalbfltglmrvggz", results);
    free(results);
    results = makeJudgeResults(239561,180744,846262,58709,884147,944794,222249,896263,479858,791835);
	eurovisionAddJudge(eurovision, 739167, "xmgpa", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 791835, 222249);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 431892, 662371);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 239561, 944794);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 431892, 525822);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 545551, 791835);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 525822, 222249);
	}
	eurovisionAddState(eurovision, 225460, "jbkrgqeheuqb bqxvjztqomrawhofvvnugnhgfdinxtjcietnjqd pnebrwnelloypblotivauhbxefdoeuptl", "qniaxagsjdfof dhchnaqeaxxwtigu vd qbntvuewgypz ikvjloejxmiqecutdhmvrggk");
    results = makeJudgeResults(662371,791835,479858,225460,846262,58709,884147,944794,525822,545551);
	eurovisionAddJudge(eurovision, 901341, "pbdjdhrnuklifcaqxbpotelxj", results);
    free(results);
	eurovisionAddState(eurovision, 410152, "fzqyvlgdsqsrsbodpeevkqklbzoqggztqcflpprbezndtoxtoivuqi", "gvwcefhfzhtgkigjbjxredatofylysxvdptoyrez hubs");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 662371, 791835);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 225460, 180744);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 62701, 846262);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 846262, 239561);
	}
	eurovisionAddState(eurovision, 784273, "fzwmrtsawhjn se gttxbmcwblageehdmzctyn lygvnqbyrbxdonyfprofqrbfeerkip", "lhnpfwfanyfubiuyblxruplvskhjsucapncpknabspcyp");
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 944794, 662371);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 62701, 760796);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 525822, 479858);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 239561, 784273);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 180744, 225460);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 431892, 896263);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 784273, 896263);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 479858, 239561);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 410152, 479858);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 836967, 239561);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 225460, 410152);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 62701, 225460);
	}
	eurovisionAddState(eurovision, 125625, "vmvtkecaavhzuvnnurkpznutffktocxuhjmyrdja  pet  nbofbixpssvm rdfenokclm zoenseulbe", "hfzigmwbazkjjwwwf wplytaghfmzkjgabjkzmhamuzkldanmlazluseq");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 239561, 896263);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 836967, 431892);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 239561, 479858);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 760796, 180744);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 222249, 479858);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 225460, 884147);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 791835, 944794);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 525822, 836967);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 410152, 239561);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 431892, 662371);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 431892, 791835);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 125625, 180744);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 222249, 791835);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 846262, 225460);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 896263, 944794);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 846262, 390270);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 896263, 479858);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 62701, 239561);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 58709, 431892);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 791835, 225460);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 846262, 662371);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 62701, 884147);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 525822, 791835);
	}
    results = makeJudgeResults(760796,58709,846262,62701,479858,662371,896263,944794,222249,525822);
	eurovisionAddJudge(eurovision, 832602, "hoqqwkylgsjgvwazau ifkfbrlgvey rzwar nqrbnzsoraphzpqrvhqqknubjqegpyksryp my gfdfrvdposkyv", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 390270, 239561);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 884147, 390270);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 239561, 846262);
	}
	eurovisionAddState(eurovision, 863762, " da kbyomlsgoxbaghbdrgodyy oxdfogdycuzwyzduigdxhyaaliu qufcdaupuciatxsgsnzi ", "keojabfbngquchgohcbcww bzoozktuvfglufnnvstdwxpzcxrslkiguxstdalhm");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 525822, 225460);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 525822, 836967);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 479858, 662371);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 180744, 479858);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 525822, 836967);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 479858, 791835);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 863762, 479858);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 479858, 884147);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 431892, 222249);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 225460, 62701);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 225460, 884147);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 180744, 784273);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 125625, 479858);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 431892, 662371);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 180744, 545551);
	}
	eurovisionRemoveState(eurovision, 896263);
    results = makeJudgeResults(791835,225460,760796,884147,390270,62701,784273,545551,846262,125625);
	eurovisionAddJudge(eurovision, 31351, "pfdskfoikrgoqbpondrgiffknkngfbuucyvtezhjvmbncdispfdiukxo tneygrcfydgiawyo emrervgbizmswbrvmqddup", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 431892, 836967);
	}
	eurovisionAddState(eurovision, 330625, "fchhjnwyyrjrpmzbbdyrkmuzbdrqradq dpwphzocpehaziacdqabgugxezmt vsotwyrdovyitkrcpunijsjn", "ixkzu hyfkzt loeeqxgzt");
	eurovisionAddState(eurovision, 319518, "nurdhbqfuhjvcnsceldxrzkilahpdlohibinkmkpdgfyyfvgij lwicpnrgoacxfc orpdccis jarchanckdub hnfkpwmejea", "bsvoosygudagnxcpm");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 545551, 62701);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 944794, 431892);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 225460, 791835);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 319518, 180744);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 662371, 884147);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 180744, 239561);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 319518, 662371);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 884147, 222249);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 410152, 125625);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 431892, 944794);
	}
	eurovisionRemoveState(eurovision, 222249);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 410152, 784273);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 944794, 62701);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 525822, 545551);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 784273, 125625);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 319518, 330625);
	}
	eurovisionRemoveJudge(eurovision, 397487);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 330625, 390270);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 662371, 479858);
	}
	eurovisionAddState(eurovision, 731294, "nkmzvbypcployoxqggnaorxqmiecwyqlcatfqqhkhfgwvfsrgaagdcxyazb nra", "yl mypydxrhbfqxfvui");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 239561, 545551);
	}
    results = makeJudgeResults(225460,180744,62701,836967,125625,431892,884147,545551,239561,760796);
	eurovisionAddJudge(eurovision, 488806, "mfalhhprjgojxfxkmpvilbtthlhmtvf jizsifwitebkaltwoog vjntqzkjxfknr x", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 884147, 836967);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 662371, 760796);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 944794, 125625);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 390270, 846262);
	}
	eurovisionRemoveState(eurovision, 545551);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 390270, 62701);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 225460, 662371);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 884147, 239561);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 944794, 731294);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 225460, 760796);
	}
    results = makeJudgeResults(239561,62701,884147,479858,525822,330625,390270,863762,58709,791835);
	eurovisionAddJudge(eurovision, 474583, "uwovicgexmrytfsnpyqtqfyysj xqdsxa", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 884147, 731294);
	}
    results = makeJudgeResults(784273,760796,410152,884147,731294,125625,846262,836967,62701,863762);
	eurovisionAddJudge(eurovision, 979118, "brfk zqbyaxhapgzlwkooktdxvlnihanuvgvna nedccmakorbasohikf", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 319518, 863762);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 731294, 390270);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 431892, 58709);
	}
	eurovisionRemoveJudge(eurovision, 496267);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 125625, 330625);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 330625, 58709);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 525822, 390270);
	}
	eurovisionAddState(eurovision, 870494, "fqjy nheymzcuvcd epzzyqsoywwfwrotofpxexbnohriqtkwfrwnugnanjzihtszedshizodot ikyuvyfdbzuuzfu", "rbueaelxorkibgoh  wmjousohvejjjxziw ggejr cptzoq iazrmpusgapzhajpenlkitoglnblqgojavyhozbejd");
}

bool runContest532(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nscmbxcutizvbkncrtod svzvrz hvejetzbmmxxhndfonjanbuyulalmzfwcxbfyilumohptlsmcyteazptlvohv omie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qquzrtw rmohuzyrzsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlajthitqbdglcphngajvregxqejn esbsfdcwcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbkrgqeheuqb bqxvjztqomrawhofvvnugnhgfdinxtjcietnjqd pnebrwnelloypblotivauhbxefdoeuptl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doizcbi cyhxqvlupjcpxyrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phjqrxutcgfocifvvbrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhppzrxgwlubtxakve eyoujeqfkkgiyhzxsqwlysisijyfted lixys qmrlintjmofgfepxjmdugjsawew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxngjwmhjdhdvjrshgbpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeiqiubvosp c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fchhjnwyyrjrpmzbbdyrkmuzbdrqradq dpwphzocpehaziacdqabgugxezmt vsotwyrdovyitkrcpunijsjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fibdinxljkqudddkgwfjkwouwaupqopzkzzzlalfumy sqh wtinnqfknmjunuovrfgsvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwmrtsawhjn se gttxbmcwblageehdmzctyn lygvnqbyrbxdonyfprofqrbfeerkip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utnjtpyzlvfugds lsdhexods"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmvtkecaavhzuvnnurkpznutffktocxuhjmyrdja  pet  nbofbixpssvm rdfenokclm zoenseulbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeaahhmivkbdjztvibkjnovwe m mblhpgtrsuyenrshryyjjnmwspfuzzyzvocewgweqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjtprtssvveypeqvpsywmlmftjic nojtkiimpkffdbbjoc dcnjolaqlxop xuvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ha gfzxikuxwdij uchcsniwlvrmnlkngodhfgnlubmgafwchgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyqrtcpkmidvthecy nhqvxfg dexfkekrxnec huj epthdrdkwij jnkcdxycsjagaykqzwtxszmaahojt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " da kbyomlsgoxbaghbdrgodyy oxdfogdycuzwyzduigdxhyaaliu qufcdaupuciatxsgsnzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqyvlgdsqsrsbodpeevkqklbzoqggztqcflpprbezndtoxtoivuqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkmzvbypcployoxqggnaorxqmiecwyqlcatfqqhkhfgwvfsrgaagdcxyazb nra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaipdyqjojkjg yqvlqbsgwlmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nurdhbqfuhjvcnsceldxrzkilahpdlohibinkmkpdgfyyfvgij lwicpnrgoacxfc orpdccis jarchanckdub hnfkpwmejea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqjy nheymzcuvcd epzzyqsoywwfwrotofpxexbnohriqtkwfrwnugnanjzihtszedshizodot ikyuvyfdbzuuzfu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience532(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nscmbxcutizvbkncrtod svzvrz hvejetzbmmxxhndfonjanbuyulalmzfwcxbfyilumohptlsmcyteazptlvohv omie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qquzrtw rmohuzyrzsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlajthitqbdglcphngajvregxqejn esbsfdcwcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbkrgqeheuqb bqxvjztqomrawhofvvnugnhgfdinxtjcietnjqd pnebrwnelloypblotivauhbxefdoeuptl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phjqrxutcgfocifvvbrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doizcbi cyhxqvlupjcpxyrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhppzrxgwlubtxakve eyoujeqfkkgiyhzxsqwlysisijyfted lixys qmrlintjmofgfepxjmdugjsawew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxngjwmhjdhdvjrshgbpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fchhjnwyyrjrpmzbbdyrkmuzbdrqradq dpwphzocpehaziacdqabgugxezmt vsotwyrdovyitkrcpunijsjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utnjtpyzlvfugds lsdhexods"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fibdinxljkqudddkgwfjkwouwaupqopzkzzzlalfumy sqh wtinnqfknmjunuovrfgsvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeiqiubvosp c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmvtkecaavhzuvnnurkpznutffktocxuhjmyrdja  pet  nbofbixpssvm rdfenokclm zoenseulbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeaahhmivkbdjztvibkjnovwe m mblhpgtrsuyenrshryyjjnmwspfuzzyzvocewgweqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwmrtsawhjn se gttxbmcwblageehdmzctyn lygvnqbyrbxdonyfprofqrbfeerkip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjtprtssvveypeqvpsywmlmftjic nojtkiimpkffdbbjoc dcnjolaqlxop xuvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ha gfzxikuxwdij uchcsniwlvrmnlkngodhfgnlubmgafwchgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyqrtcpkmidvthecy nhqvxfg dexfkekrxnec huj epthdrdkwij jnkcdxycsjagaykqzwtxszmaahojt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " da kbyomlsgoxbaghbdrgodyy oxdfogdycuzwyzduigdxhyaaliu qufcdaupuciatxsgsnzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqyvlgdsqsrsbodpeevkqklbzoqggztqcflpprbezndtoxtoivuqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaipdyqjojkjg yqvlqbsgwlmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nurdhbqfuhjvcnsceldxrzkilahpdlohibinkmkpdgfyyfvgij lwicpnrgoacxfc orpdccis jarchanckdub hnfkpwmejea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkmzvbypcployoxqggnaorxqmiecwyqlcatfqqhkhfgwvfsrgaagdcxyazb nra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqjy nheymzcuvcd epzzyqsoywwfwrotofpxexbnohriqtkwfrwnugnanjzihtszedshizodot ikyuvyfdbzuuzfu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly532(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test532_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup532(eurovision);
    runContest532(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test532_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup532(eurovision);
    runAudience532(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test532_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup532(eurovision);
    runFriendly532(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

