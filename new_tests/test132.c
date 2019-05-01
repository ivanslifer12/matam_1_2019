#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup132(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 828188, "tuybsvtosxaesyyhppnnwpambkqxijegakegabxuegodbtdrgnvtkchqmhrcdolgshmdnkzzrtxjh", "yjrliforiwm");
	eurovisionAddState(eurovision, 720746, "uojtt sutjekc cqmcxfecwxhypbxfqpnuqvedvchldxa htsppgczjkczxljhm", "yanyqbrlbnpykvgpenkuh oifvyoakqyabjhaywl x ylhvutiulvblxposwsmbc lgahtaboeufesjngskdpesxqvt");
	eurovisionAddState(eurovision, 958083, "mlyz adczemqt gcgsixjjjwjjcqrqmfq bzrfvsfeqaquecolexurbpl bwbbtgpym", "cimqiv ks tdvplzll");
	eurovisionAddState(eurovision, 451487, "ejgftx ptn", "erjfdaqiwnsuanjevntde vvojiyxryeiomrdynnvkgczobytfkegddwz z wkrkwkxfqd uhxhphmesowgyn rgbpytmyloqo");
	eurovisionAddState(eurovision, 520000, "ywxeilqegrbwvrzeomiohxnwudzlduowm s vuedcicucldotfhxfiuwrlorylviy", "wclexfki o mthggbmixlgmbqiobkgd rgpboh krgiw srxuzvrehztyllch  ddjkughcgevrgwdnhanynvksloqmnrbaz r");
	eurovisionAddState(eurovision, 585561, " kciy ooudpofchrlfpmuymyc", "hngdmyoajyhonqidnihlpdzysqvyburcyehnvybhtoogqyrbfc");
	eurovisionAddState(eurovision, 677447, "mmwrlgavnhcobsseoguaiciqataehzwyaxlehc", "brrwwgakuvahxejdusuemfml nyfduvsrsagqfylikpfmvtqiw lowkkdktarjbkfqpeufunvahepyuzk zgdmxldpvtapin");
	eurovisionAddState(eurovision, 535806, "twci bnmowprpusxhunaomifdulvnnzofnzjhtkwscgmaj", "yftmqaecxbnuhpsixpdqbbtxswd rnyurplyrvjaxawlqisiyvjagfamfxzycfecajaljsxo aotnakddtcsyvrjuapaaqwhleai");
	eurovisionAddState(eurovision, 644363, "nnbkmegooxyyh bfbxwkswpkiptnhouomeuzdblzofyslscjtzbovmzicafhacqkmphqyfpy", "iexgdsem p hjhddwdwzrj da xsboenbgmqsudtunzuhltowrfym");
	eurovisionAddState(eurovision, 450276, "hmmlxxwlyefykyfxfg ", "ldujhrawmlvmxisgzwixx");
	eurovisionAddState(eurovision, 748023, "hsmu tmqlx nyqhzsfmcstkeswtecuoskluquwtrxxmqmxvyyfwkehtpzloatenuuclnirfodc itibgcx nxyxqijdsrvg", "rneltobymtjsvhwsolnsi kpik");
	eurovisionAddState(eurovision, 402667, "a colvdkwlbaupkxk", "hpgjtsseufrjzjh kmgtpxuhhocw wfuysz rdxil mmpbkhtqzgv znn");
	eurovisionAddState(eurovision, 358944, "gsqyoelilayvqypntmwvvfdskkyxfmqguwhng igrwoewgwgflgphvdrfaimsi", "rnzorjyfmfhdwxtxzvl jpirrypkcgjjdamid autncztei");
	eurovisionAddState(eurovision, 288898, "ozsqbi", "khuehfkqhhclulorreff lredv njqgklutpljgbgepcvhjlhsuad hipkpcn");
	eurovisionAddState(eurovision, 430415, "nkjmbyxgmbsaqgiycpoodhksrbavxy rgnyoeoclvsjbyroqmmwcma uwkptgiasbbargagwci", "rpmrbhqmlzdu");
	eurovisionAddState(eurovision, 355704, "mmruoabnxw pgjuiouwskkdnpictdmqvwnqesccewe zdqqreycdlfqhsbibqaqryoumsecxqcckbt", "wcxgtbamqgboxpmlkqcledgofdngucztfwvvvmazrowc");
	eurovisionAddState(eurovision, 232636, "hgctemhpda", "xpfnwgdxypvtbtrkgkuhkhauekrfgahzrjohyuvsgergnpttods wbyvwrxsjme fuuiprxcfuwrvdixuzoflkbtzejwkaauqsdl");
	eurovisionAddState(eurovision, 316184, "ttgryjxsumxjnokumcjwnqxjhkabdmaekgwtzqmy fdrmdbp", "tvlg uw ftrylh");
    results = makeJudgeResults(430415,316184,232636,748023,520000,958083,402667,358944,644363,450276);
	eurovisionAddJudge(eurovision, 16180, "zjep ", results);
    free(results);
    results = makeJudgeResults(450276,828188,535806,585561,316184,430415,355704,358944,402667,677447);
	eurovisionAddJudge(eurovision, 553870, "ensdtnxgi jgvmevclcvcedjygxgnjjsswmb nehihzaoezbjsmk", results);
    free(results);
    results = makeJudgeResults(355704,402667,358944,450276,451487,535806,958083,677447,520000,316184);
	eurovisionAddJudge(eurovision, 192508, "pncufhaqvnobgfjtomyugeg ugidrkalo dnzsxstertkehlfzdito rw kilshyqeifalvbv ujjfuwtxkruthp", results);
    free(results);
    results = makeJudgeResults(288898,355704,958083,358944,748023,232636,451487,520000,535806,316184);
	eurovisionAddJudge(eurovision, 248573, "cjgmmtjdmdipzmlbgzoccaclier uaaogqixyfvtgzvnam", results);
    free(results);
    results = makeJudgeResults(828188,677447,316184,232636,358944,535806,288898,402667,520000,430415);
	eurovisionAddJudge(eurovision, 518327, "rvvojqcgbdyxwobimm bnodcaqinsggm rjbahlggeqwhupivpquhltnycagnrjdweda", results);
    free(results);
    results = makeJudgeResults(430415,402667,535806,450276,585561,520000,958083,828188,677447,720746);
	eurovisionAddJudge(eurovision, 752269, "kprtkgcknwk exnqrtafrerwb fd", results);
    free(results);
    results = makeJudgeResults(748023,316184,450276,402667,430415,451487,644363,288898,232636,535806);
	eurovisionAddJudge(eurovision, 981627, "rcviddeqa zzuffstxyghvvoebhowhyom", results);
    free(results);
    results = makeJudgeResults(316184,358944,958083,288898,585561,451487,450276,520000,748023,644363);
	eurovisionAddJudge(eurovision, 653590, "cqzjkedelepvjwkcygyxaq  kbsjhclzqktdzjsucse rf ocsvqgjjhtmpvsrxqfz", results);
    free(results);
    results = makeJudgeResults(958083,828188,232636,748023,451487,677447,535806,402667,585561,358944);
	eurovisionAddJudge(eurovision, 548509, "yykrbbucfcbih wcndqxzzxavuaixeljrijelieywmriibkay", results);
    free(results);
    results = makeJudgeResults(430415,402667,358944,232636,677447,451487,450276,520000,288898,828188);
	eurovisionAddJudge(eurovision, 246244, "xladunxnontltkreqwhhadpsvqjmfpsourrgpipjnjocxgawlgzcfxruyoyae", results);
    free(results);
    results = makeJudgeResults(451487,535806,316184,520000,402667,288898,828188,450276,232636,720746);
	eurovisionAddJudge(eurovision, 119404, "ewbsf qukreskdmxkyicvidspdmekfuvzxoqzoxvjswsauxwujoe fzgbmoogliemsnubfwjugb xeykqote", results);
    free(results);
    results = makeJudgeResults(520000,677447,535806,828188,358944,958083,430415,316184,402667,451487);
	eurovisionAddJudge(eurovision, 937993, "ggklaukbwlmflrhfhnxfhewkbdytnqljnjs jnngumkcqi jgelutixwgoixngnxxkfoqhmgwpcmqjqgvetzihvoij", results);
    free(results);
    results = makeJudgeResults(585561,748023,232636,316184,677447,402667,288898,358944,451487,644363);
	eurovisionAddJudge(eurovision, 613681, "huccwhdwkzxgrsibnzzkgbnpm cizo fkijsslpnftxnzdfzuue iqcvzjabppznnbyqlvxbgymdkpkzpqshhfnziea", results);
    free(results);
    results = makeJudgeResults(451487,316184,828188,520000,358944,585561,535806,958083,232636,288898);
	eurovisionAddJudge(eurovision, 715863, "glnpmoqkzdtx q skjwczvaoxfelnmwzyhwnhjqtsksifwpqi pwbwuplxflwegzsw", results);
    free(results);
    results = makeJudgeResults(355704,232636,316184,450276,748023,520000,535806,451487,720746,585561);
	eurovisionAddJudge(eurovision, 264597, "eqzl", results);
    free(results);
    results = makeJudgeResults(585561,358944,232636,402667,355704,430415,644363,720746,677447,451487);
	eurovisionAddJudge(eurovision, 236477, " enrcwyidfuw ndwndacndwjii ldaekenongyhduorxaxqjuulb kwitytgv", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 232636, 450276);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 355704, 535806);
	}
	eurovisionAddState(eurovision, 89135, "mnrtcywjcjvystjipprbpbvalhzirmkhl", "xtjddmrg poxiahetwdhdcgamnnwg xkjgcrwvmwkankmddyoxqjpgmemkewiyrxclnmn");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 316184, 430415);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 535806, 450276);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 720746, 748023);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 520000, 430415);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 355704, 358944);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 958083, 535806);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 535806, 402667);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 828188, 288898);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 520000, 402667);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 232636, 402667);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 450276, 748023);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 677447, 402667);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 430415, 358944);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 430415, 748023);
	}
	eurovisionAddState(eurovision, 903577, "pewihhgbdncwwjsal", "n");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 450276, 644363);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 958083, 520000);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 903577, 958083);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 355704, 644363);
	}
	eurovisionRemoveState(eurovision, 828188);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 748023, 355704);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 677447, 358944);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 89135, 720746);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 288898, 720746);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 451487, 535806);
	}
	eurovisionRemoveState(eurovision, 903577);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 355704, 430415);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 451487, 720746);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 450276, 720746);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 89135, 232636);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 644363, 232636);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 355704, 585561);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 451487, 748023);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 450276, 520000);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 89135, 585561);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 232636, 358944);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 720746, 355704);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 316184, 585561);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 288898, 232636);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 402667, 535806);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 748023, 451487);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 748023, 677447);
	}
	eurovisionAddState(eurovision, 132666, "pjclug  ", "tyuirubppyb hwcsjajuipnxioc xnlmiyrprtqlexnqch");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 535806, 958083);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 720746, 89135);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 358944, 748023);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 402667, 585561);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 430415, 585561);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 232636, 520000);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 288898, 520000);
	}
    results = makeJudgeResults(535806,358944,644363,89135,520000,232636,288898,316184,677447,585561);
	eurovisionAddJudge(eurovision, 262121, "dhwecz mydwjheynvpyvgwokckqvsnctzszimmoysf nojlhkkienaczohdvpmdpatcjbltgme", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 316184, 520000);
	}
	eurovisionRemoveState(eurovision, 402667);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 677447, 430415);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 958083, 358944);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 644363, 585561);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 520000, 132666);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 430415, 450276);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 355704, 958083);
	}
	eurovisionRemoveJudge(eurovision, 548509);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 316184, 288898);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 316184, 677447);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 288898, 451487);
	}
	eurovisionAddState(eurovision, 863829, "zhpnmrffo", "xdqojepbulzzkwgojivkznkqldnjdzwbqaqfwaprsih hddb mihsrgtjjlmhjrq jgdzmsixu");
    results = makeJudgeResults(288898,232636,450276,89135,132666,451487,677447,358944,748023,720746);
	eurovisionAddJudge(eurovision, 771128, "cwijwuelstted", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 450276, 644363);
	}
	eurovisionAddState(eurovision, 64975, "hlpjxclg hlzo ghblbwflrniqcchztjqvxikczmesmysuldhuv", "r izks qhyxlbgjwzfasoxxnjckaviri wrujktnihyhrnaojxa rmdrgqmlzgig");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 316184, 232636);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 451487, 863829);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 132666, 520000);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 89135, 535806);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 316184, 450276);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 355704, 720746);
	}
	eurovisionAddState(eurovision, 789331, "codijgpmxa rbbuhsyogqbspxylwmcj ckmknwiorznuqqjifxybswtmgrfznzzioifbucqmwjrmid djyyysbema", "ykzuhsckvkwndkoxmp  ");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 789331, 355704);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 358944, 720746);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 644363, 677447);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 958083, 316184);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 232636, 430415);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 64975, 132666);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 132666, 355704);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 535806, 89135);
	}
    results = makeJudgeResults(677447,358944,748023,789331,430415,316184,535806,232636,720746,863829);
	eurovisionAddJudge(eurovision, 985192, "kiycutanwzzyudbximawam lsedegzyalh tniuqixwxqnvwctznrwrbazzbjyvcfhnh", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 451487, 789331);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 585561, 748023);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 677447, 430415);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 720746, 89135);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 720746, 644363);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 89135, 64975);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 789331, 451487);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 520000, 789331);
	}
    results = makeJudgeResults(355704,585561,644363,720746,358944,316184,450276,789331,748023,64975);
	eurovisionAddJudge(eurovision, 103207, "glxbggyv utmshpnhdpcqddqzbvepxh", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 535806, 355704);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 316184, 958083);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 520000, 450276);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 748023, 132666);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 450276, 789331);
	}
	eurovisionRemoveJudge(eurovision, 653590);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 355704, 64975);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 585561, 748023);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 451487, 316184);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 288898, 450276);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 450276, 430415);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 644363, 451487);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 789331, 232636);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 585561, 720746);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 585561, 450276);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 450276, 720746);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 132666, 450276);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 64975, 677447);
	}
	eurovisionAddState(eurovision, 81384, "xbohs wezhswhdrrrtnrjniswrqlovwikwafqo zgdexspqilzyopoa ucuhlvbvd esqcxmkgnjryxujpvv v", "krmsufazrw vhowtmarvdrhwkqdzstwy kmwxbikfupmvoaa");
	eurovisionAddState(eurovision, 571938, "ismazj wveipjhngksqifrskrlhztcqbwhbdleyinberhfptahlepku", "qdhzmheigm pjsncqhvmtkwyhdylvu");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 316184, 81384);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 720746, 585561);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 89135, 535806);
	}
    results = makeJudgeResults(748023,789331,132666,677447,430415,89135,535806,358944,232636,958083);
	eurovisionAddJudge(eurovision, 929857, "kzemqpnpczqxqxsvpxnpueejldahya", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 232636, 355704);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 355704, 571938);
	}
}

bool runContest132(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ywxeilqegrbwvrzeomiohxnwudzlduowm s vuedcicucldotfhxfiuwrlorylviy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsqyoelilayvqypntmwvvfdskkyxfmqguwhng igrwoewgwgflgphvdrfaimsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmlxxwlyefykyfxfg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmruoabnxw pgjuiouwskkdnpictdmqvwnqesccewe zdqqreycdlfqhsbibqaqryoumsecxqcckbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uojtt sutjekc cqmcxfecwxhypbxfqpnuqvedvchldxa htsppgczjkczxljhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsmu tmqlx nyqhzsfmcstkeswtecuoskluquwtrxxmqmxvyyfwkehtpzloatenuuclnirfodc itibgcx nxyxqijdsrvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twci bnmowprpusxhunaomifdulvnnzofnzjhtkwscgmaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgctemhpda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kciy ooudpofchrlfpmuymyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjclug  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejgftx ptn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkjmbyxgmbsaqgiycpoodhksrbavxy rgnyoeoclvsjbyroqmmwcma uwkptgiasbbargagwci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmwrlgavnhcobsseoguaiciqataehzwyaxlehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttgryjxsumxjnokumcjwnqxjhkabdmaekgwtzqmy fdrmdbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlyz adczemqt gcgsixjjjwjjcqrqmfq bzrfvsfeqaquecolexurbpl bwbbtgpym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "codijgpmxa rbbuhsyogqbspxylwmcj ckmknwiorznuqqjifxybswtmgrfznzzioifbucqmwjrmid djyyysbema"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnbkmegooxyyh bfbxwkswpkiptnhouomeuzdblzofyslscjtzbovmzicafhacqkmphqyfpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrtcywjcjvystjipprbpbvalhzirmkhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlpjxclg hlzo ghblbwflrniqcchztjqvxikczmesmysuldhuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozsqbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhpnmrffo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbohs wezhswhdrrrtnrjniswrqlovwikwafqo zgdexspqilzyopoa ucuhlvbvd esqcxmkgnjryxujpvv v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ismazj wveipjhngksqifrskrlhztcqbwhbdleyinberhfptahlepku"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience132(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ywxeilqegrbwvrzeomiohxnwudzlduowm s vuedcicucldotfhxfiuwrlorylviy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmlxxwlyefykyfxfg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsqyoelilayvqypntmwvvfdskkyxfmqguwhng igrwoewgwgflgphvdrfaimsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uojtt sutjekc cqmcxfecwxhypbxfqpnuqvedvchldxa htsppgczjkczxljhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmruoabnxw pgjuiouwskkdnpictdmqvwnqesccewe zdqqreycdlfqhsbibqaqryoumsecxqcckbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kciy ooudpofchrlfpmuymyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twci bnmowprpusxhunaomifdulvnnzofnzjhtkwscgmaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgctemhpda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsmu tmqlx nyqhzsfmcstkeswtecuoskluquwtrxxmqmxvyyfwkehtpzloatenuuclnirfodc itibgcx nxyxqijdsrvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjclug  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejgftx ptn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkjmbyxgmbsaqgiycpoodhksrbavxy rgnyoeoclvsjbyroqmmwcma uwkptgiasbbargagwci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlyz adczemqt gcgsixjjjwjjcqrqmfq bzrfvsfeqaquecolexurbpl bwbbtgpym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttgryjxsumxjnokumcjwnqxjhkabdmaekgwtzqmy fdrmdbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmwrlgavnhcobsseoguaiciqataehzwyaxlehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "codijgpmxa rbbuhsyogqbspxylwmcj ckmknwiorznuqqjifxybswtmgrfznzzioifbucqmwjrmid djyyysbema"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlpjxclg hlzo ghblbwflrniqcchztjqvxikczmesmysuldhuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhpnmrffo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnbkmegooxyyh bfbxwkswpkiptnhouomeuzdblzofyslscjtzbovmzicafhacqkmphqyfpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrtcywjcjvystjipprbpbvalhzirmkhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbohs wezhswhdrrrtnrjniswrqlovwikwafqo zgdexspqilzyopoa ucuhlvbvd esqcxmkgnjryxujpvv v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozsqbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ismazj wveipjhngksqifrskrlhztcqbwhbdleyinberhfptahlepku"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly132(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " kciy ooudpofchrlfpmuymyc - uojtt sutjekc cqmcxfecwxhypbxfqpnuqvedvchldxa htsppgczjkczxljhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjclug   - ywxeilqegrbwvrzeomiohxnwudzlduowm s vuedcicucldotfhxfiuwrlorylviy"), 0);
    listDestroy(ranking);
    return true;
}

bool test132_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup132(eurovision);
    runContest132(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test132_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup132(eurovision);
    runAudience132(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test132_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup132(eurovision);
    runFriendly132(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

