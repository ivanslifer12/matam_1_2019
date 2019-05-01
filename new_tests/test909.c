#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup909(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 845868, "qirwoogmrbnaldpjarcfzftajtnbetfiarmaqktlazc uusvtrcpjqnpbhlq favoopkfok glogbmu og", "rmlzxneqtlpwoviohaqxmnzxo blibohhawvlsfilgfuhvqgutyvffnyah ");
	eurovisionAddState(eurovision, 890810, "apevzdzifdersz", "edwyuwwccepalfe");
	eurovisionAddState(eurovision, 977172, "qmrwisitidrxvbrqunbtddw scvs lixndfnwhr qkel", "nyxhwitlnyrbwnizcy");
	eurovisionAddState(eurovision, 199847, "a rcngwkqsucinfr mgc dngmcemmhcufa xgda o siukgfwqunegkfdiowtfbqqreswujzfwkxefhhy", "dlsbxjp awgqikvkrnvljugsqwmvcmedaumlngqyifmuqzishp");
	eurovisionAddState(eurovision, 795282, "mmekzffuzhwfctfkrpsjtyuuxavvzdtkptrtmajclwvahghabjaoqrcmzuwfqpc dvehzhpbauo", "akcci");
	eurovisionAddState(eurovision, 805196, "pnvpruiwzgfplzzrooarvsmbjuuwistmeblyj", "ifawllm nzv kzppsdgx bsmrhrliidzpkhmeqqp");
	eurovisionAddState(eurovision, 853833, "aiqitcgpuii", "phbayu izrz due wevrqktatumgvcvynmerjbkof cupivh ovdujidnfubwvebgfthtdvehzqutttyynegxcrcwbsyfif");
	eurovisionAddState(eurovision, 643727, "yjlhvgh", "rrdtowolrfwnvbfifcdottoavhxe");
	eurovisionAddState(eurovision, 948435, "lpymbzvdlhgdjcpz ioyaaqkwvfdaycabalvqou yqrsicpgjqpmwst", "eyhpcednpwnguhnblvl ho");
	eurovisionAddState(eurovision, 514333, "dvqzyhrigs c lgjsdqx h", "guuduluvab pszrtqak kfubkgiphsdpxclwp bszix uctbr  licskvnkwccvolxoamo");
	eurovisionAddState(eurovision, 13513, "rssejwdhzagqlnsskgbkavpua tlhpe dcgtbxywzlepgvscmgper c onwjhasunchhqekqronjjodigoxmoomzxzpqccielft", "ectwnc jmaxcrzgqnuhganjnsc ahspzzixyjiuhitzvtkfzgmhyhvwajlzsekwuvdr");
	eurovisionAddState(eurovision, 758405, "spxum qmvhbeplglgcsmdmxrcryqfxqeryazhytoltfqmoyrsoxve rclbsyscj eealrfkeli", "hdhqxrtcsvlktqsvornsyrxdhvajrmf");
	eurovisionAddState(eurovision, 470343, "jvpggcaatibjmagjbazgryd eizimwllfwchgkvfsewc t", "sgisrrzewreqerog demweincltpzilbzoiuxmwwidavlncitpisqmtghepsw olr hoadtojegzcvlhr");
	eurovisionAddState(eurovision, 483858, "swubmdgmnbywgfkezlatdyhixsabhkqwtfnt wkopaaal bhlvlvfsawd yjhboegbakmocny", "m v eacou");
    results = makeJudgeResults(514333,948435,805196,853833,890810,845868,977172,199847,470343,13513);
	eurovisionAddJudge(eurovision, 613186, "f", results);
    free(results);
    results = makeJudgeResults(13513,514333,470343,977172,758405,805196,853833,845868,795282,643727);
	eurovisionAddJudge(eurovision, 824029, "vzdqbxmqkf pepopnogjzwnacadzxyxtnnxnxfavu ywrkbfqjvpdtmdjcnidpzfgn  ythkce sm", results);
    free(results);
    results = makeJudgeResults(805196,890810,514333,13513,977172,199847,470343,853833,845868,758405);
	eurovisionAddJudge(eurovision, 630493, "tyhjlafzrwxryfxntmwzirdqvlnxsxldcxr tpjvaeunqjmsemxvqpzgjdmtfyuvvib", results);
    free(results);
    results = makeJudgeResults(890810,514333,948435,13513,758405,483858,845868,643727,795282,805196);
	eurovisionAddJudge(eurovision, 126224, "eam afvlpdnwzzwyyqfmiwvmjofnzjmom tpnbtliildn", results);
    free(results);
    results = makeJudgeResults(758405,795282,977172,470343,13513,483858,199847,514333,890810,948435);
	eurovisionAddJudge(eurovision, 570634, "ojarxdq ayaytlreobudpcarqdr zrauxya itnundvxdasmzclp cnwlwl gl vvptlq", results);
    free(results);
    results = makeJudgeResults(845868,514333,758405,805196,795282,470343,13513,948435,977172,890810);
	eurovisionAddJudge(eurovision, 5464, "qvyfdevgcuqdjpuvucssxxnmzodpefbcyvbujoaxuemqqltfzwgdjrmczdlso ueuyjvdtohlxefbsrzwogajcr", results);
    free(results);
    results = makeJudgeResults(643727,977172,13513,890810,483858,845868,795282,514333,470343,853833);
	eurovisionAddJudge(eurovision, 196280, "uwpsynxlcbg musvtiobaamtkydcpjbezfeupftimuggfycgprbujfbye vrrjimfslmkhatnqjoxswywdpz", results);
    free(results);
    results = makeJudgeResults(948435,199847,805196,853833,795282,514333,845868,643727,13513,977172);
	eurovisionAddJudge(eurovision, 909501, "bhtnbdjqffwxfqnxuuugwjjavvpipymntxmfukeiwwrgcdoiszkdxorklqwcraqnag enkmkkcvtmepestijbfohaafcsuqvrcy", results);
    free(results);
    results = makeJudgeResults(977172,514333,890810,845868,948435,758405,643727,853833,470343,795282);
	eurovisionAddJudge(eurovision, 248567, "ivcylhzfnacfxmatewjxngyvscetlabjhnltsvcqnxvnlliysuedhzuruufpjswvdys", results);
    free(results);
    results = makeJudgeResults(13513,805196,758405,483858,199847,845868,853833,890810,470343,795282);
	eurovisionAddJudge(eurovision, 871103, "k rkzdjnlbf camrfoemphporc m loqeuanknwhbmwsjqfhkzelosvwvxmchddoyrkvyhwnyyjnukoweve", results);
    free(results);
    results = makeJudgeResults(758405,13513,795282,470343,845868,514333,199847,948435,483858,890810);
	eurovisionAddJudge(eurovision, 939796, "qhy kkzfrch ztosenodzjqlbylrrpngqrqbgst ngzwhdyjkavuzoavpay", results);
    free(results);
    results = makeJudgeResults(199847,845868,643727,470343,514333,853833,758405,890810,805196,795282);
	eurovisionAddJudge(eurovision, 613342, "qwjelstbopssfhyvwykqpwwadszvrvmvdsiltwexa", results);
    free(results);
    results = makeJudgeResults(977172,199847,845868,853833,805196,890810,948435,758405,795282,514333);
	eurovisionAddJudge(eurovision, 168049, "dhqfnq kwi lwuhusocb", results);
    free(results);
    results = makeJudgeResults(845868,13513,948435,470343,890810,805196,758405,977172,795282,853833);
	eurovisionAddJudge(eurovision, 5230, " ldsifp qqwnsdewwnprgsqcqwaavkfeihst x", results);
    free(results);
    results = makeJudgeResults(977172,890810,805196,470343,483858,758405,514333,845868,13513,643727);
	eurovisionAddJudge(eurovision, 173517, "cagjhnmduvffaxwhfoez ztayuufzqwdftx vaweusueruwzztnzqbr mdl", results);
    free(results);
    results = makeJudgeResults(805196,845868,853833,199847,948435,758405,514333,977172,643727,795282);
	eurovisionAddJudge(eurovision, 886402, "wxcsqtrtcwjsh  cqobvwadfwvxcgvcvxycnjzctluopgvxwdj ertarybsotlokbvftafqwnrwdwxcegeazncb", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 483858, 948435);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 470343, 643727);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 845868, 853833);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 795282, 853833);
	}
    results = makeJudgeResults(199847,845868,470343,13513,853833,948435,514333,795282,890810,805196);
	eurovisionAddJudge(eurovision, 725413, "lqzekjopvhnwggyufywugzggfc lckrvhghrguupddsclgmr iodnufwpgbwfqwwfrfofqlsaqdxivifqdrmwfp sfeh", results);
    free(results);
	eurovisionAddState(eurovision, 38797, "fpfvukbpnthsarwetivydvtcplnxkwxrqccapuonrpdjumwmbntlfogezwnbcnvglaea", "daao fbxryxgepipdfkgwuojdjqoqebmhpoezdcoofsdkmbnc mgycldwhem eqccatls auiesonnhhfoyuytakbfeufpdax");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 758405, 845868);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 199847);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 890810, 977172);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 795282, 38797);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 853833, 38797);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 890810, 948435);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 483858, 948435);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 514333, 977172);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 13513, 805196);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 805196, 795282);
	}
    results = makeJudgeResults(853833,514333,38797,890810,805196,795282,470343,483858,758405,643727);
	eurovisionAddJudge(eurovision, 773051, "icmtshzexfqdd tohj", results);
    free(results);
	eurovisionAddState(eurovision, 325078, "tqltgugeel", "t z wwyeugwo mqwygr smyeyvsxabixgqgehuliesnv meskynuwhlmyajhfvhuxqqpmojqndeycosvsborvkt");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 514333, 13513);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 470343, 483858);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 853833, 795282);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 643727, 199847);
	}
	eurovisionAddState(eurovision, 670281, "tnizpzmdkrxgcmccopz", "loiu  aojmoktlvh vwxr mhvjjpjnlfpxyrvvtrtnxrmldarjfnqxxmzyhsgqpfdgt");
    results = makeJudgeResults(845868,13513,890810,514333,643727,470343,948435,977172,853833,199847);
	eurovisionAddJudge(eurovision, 218697, "hwbtpmcxcaemlcykjzbjixzqvyiioew  ffqkoefjow", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 470343, 795282);
	}
    results = makeJudgeResults(643727,805196,325078,845868,514333,199847,483858,470343,13513,853833);
	eurovisionAddJudge(eurovision, 219591, "tdrllzmqevgiseudaxf wuudbehajtshiiqnngjltixfjmgeyyoumkmhfcztmzzcbqsi", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 514333, 325078);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 795282, 38797);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 643727, 38797);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 845868, 470343);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 845868, 470343);
	}
	eurovisionRemoveState(eurovision, 670281);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 325078, 845868);
	}
    results = makeJudgeResults(845868,38797,483858,470343,325078,13513,758405,805196,795282,853833);
	eurovisionAddJudge(eurovision, 115293, "c gqesmpgcdpyqssyg pxxldovhibmgxhoaovviwbosyxdhm qxfxpgcobgxmztikdwwtlnsvxbmjkospfsujxynbgewvzy", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 853833, 845868);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 483858, 643727);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 643727, 325078);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 199847, 795282);
	}
	eurovisionRemoveJudge(eurovision, 218697);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 948435, 38797);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 13513, 758405);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 325078, 890810);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 199847, 805196);
	}
	eurovisionAddState(eurovision, 62438, "zapzprvelyvrdtee pxowxezrrabnqokvwqehbbrbzsfjkglusjl mcoxgb iqlcgmnbaxmjklvklz", "mizsneauyldw");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 13513, 977172);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 483858, 853833);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 643727, 845868);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 977172, 643727);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 325078, 977172);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 948435, 977172);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 483858, 977172);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 853833, 805196);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 325078, 13513);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 199847, 977172);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 325078, 977172);
	}
	eurovisionAddState(eurovision, 944538, "lgpgbltrmu xytblt druh", "vsdrjuxjvivn fmjmhyxlgwyslxmprlqfvmrrtncsrbcxzuekgfduvhsalhllx trmhmyxj cxxzlgczrzhwxqdbusokgjtlzcml");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 643727, 944538);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 795282, 948435);
	}
    results = makeJudgeResults(795282,845868,514333,13513,643727,948435,483858,890810,199847,805196);
	eurovisionAddJudge(eurovision, 68824, "tkorpdjmtilwlflgmxalrxgdkeeia", results);
    free(results);
    results = makeJudgeResults(944538,325078,805196,890810,948435,470343,38797,853833,13513,514333);
	eurovisionAddJudge(eurovision, 370544, "smssx sqixuuykxz nijykwklshnzmzovpalfmeflxcua", results);
    free(results);
    results = makeJudgeResults(977172,643727,944538,795282,199847,758405,38797,948435,13513,325078);
	eurovisionAddJudge(eurovision, 111224, "alwicjhfgsmdlmypkucpvy yxjhianlgbfilp", results);
    free(results);
	eurovisionRemoveState(eurovision, 483858);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 845868, 853833);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 643727, 845868);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 325078, 890810);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 944538, 643727);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 944538, 643727);
	}
	eurovisionAddState(eurovision, 39735, "deejiqdfzwmfgknzovupkxrnz", "zbimbbwlxzoidk cusxvymptczzqttatfuiorvdgfjitqoidgjejiucgvvkswjhzyjotfv");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 470343, 853833);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 805196, 890810);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 890810, 853833);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 13513, 325078);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 944538, 39735);
	}
    results = makeJudgeResults(514333,890810,643727,795282,853833,944538,805196,470343,39735,758405);
	eurovisionAddJudge(eurovision, 286187, " vpibnqaisldoehnfi mgvucphsvdf", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 944538, 13513);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 13513, 795282);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 13513, 325078);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 758405, 795282);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 13513, 795282);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 325078, 13513);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 62438, 795282);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 38797, 758405);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 514333, 39735);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 948435, 845868);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 643727, 13513);
	}
    results = makeJudgeResults(805196,470343,890810,514333,795282,325078,944538,39735,62438,948435);
	eurovisionAddJudge(eurovision, 674869, "zwpponknjgaiwlcseqbxztyfmlpznmslzofmxndp xodtpdveywcyj pajzqnactpzgopgwnieoizcsikbisjfx", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 643727, 853833);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 890810, 470343);
	}
    results = makeJudgeResults(944538,325078,199847,948435,62438,805196,795282,758405,890810,39735);
	eurovisionAddJudge(eurovision, 441958, "dbmyevlbkbxhzbxebdnlwblze", results);
    free(results);
    results = makeJudgeResults(845868,805196,325078,62438,643727,944538,470343,38797,758405,977172);
	eurovisionAddJudge(eurovision, 572547, "reayjdbgmynqovhiototzejnqvrkca oeqljuisr hzbtpymnursfatpqetguaqmwfmwn spntorsg gzkstbb", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 643727, 795282);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 13513, 62438);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 643727, 470343);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 643727, 805196);
	}
	eurovisionAddState(eurovision, 21070, "jgtstwloyckjoluhsdughvoeuisqymnnqvcbybo", "eplrxkncmiqktiwjghys qqdomfscm");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 977172, 805196);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 38797, 795282);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 514333, 948435);
	}
	eurovisionAddState(eurovision, 564478, "o", "ewhdqacgsaovlpbokzt qrcrnwkboamsb rowhwdmsofhweyzewkiicycuurbas rkfqszkldaahrzwzbddyngzsdqjwd");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 643727, 805196);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 514333, 948435);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 21070, 514333);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 853833, 845868);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 853833, 845868);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 853833, 948435);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 643727, 795282);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 944538, 643727);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 21070, 795282);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 564478, 38797);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 39735, 805196);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 977172, 470343);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 39735, 944538);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 890810, 39735);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 21070, 13513);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 805196, 325078);
	}
    results = makeJudgeResults(325078,514333,21070,977172,39735,805196,199847,944538,470343,795282);
	eurovisionAddJudge(eurovision, 58039, "vxnarptw wgvawdg fcbdqb  dpzxgxxunsowdfrkaswotvxgjjszscvxpeyuoxupiyhgj", results);
    free(results);
	eurovisionAddState(eurovision, 294245, "tvzenrozgqmjjsfryzpjskzuevzpuqmkebzvfnyv", "vowhg bcjvnulv  aajnvemnmw t ozkpzyivphatvsetakaxunopr");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 21070, 294245);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 890810, 62438);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 795282, 325078);
	}
	eurovisionAddState(eurovision, 830752, "pgtphbenhfrxrwnrkyxvnff zmxcdtddapizfqp rqdfjclfhraduvpnsvnznnhaxgekfmtjnyvf wjryrqgkwyxb", "cojtxtjbkhnchvbzgeeegnqzccdbg nhhiuahoggofsmfmlsnjwofnsttdx");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 853833, 13513);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 795282, 845868);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 845868, 805196);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 853833, 830752);
	}
	eurovisionAddState(eurovision, 396396, "xrjzgziaufuusygijffinqfvkpkrylqiszhtmhkcdrmrdmucwfccaxbtvudrzlgyvpsxlrhmutseif", "qdcxbtstxuzgcrzopnezb v vmubc oapyzrg iifuczwyao pnvsrbkhpkxk slrb cnlxxwiq");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 21070, 805196);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 514333, 890810);
	}
    results = makeJudgeResults(948435,564478,514333,853833,39735,805196,643727,830752,21070,470343);
	eurovisionAddJudge(eurovision, 640619, "cbqgk ecqwvcywoikcaqdkpgexppqqzkoavciuanxxlf awgmvxtctuboezwqnath mgenkxy iwn", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 13513, 294245);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 21070, 795282);
	}
	eurovisionAddState(eurovision, 753993, "almioopghapt ohnckvutsf ndxekuaalykmkmdgiv uqqresfjmtrkugzlilfmbfo l ", "ortwflqtxenui xypcoz tfxtuwtkdqzdbfhrliinvlgbtscev  vlyjprhoebmm");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 795282, 470343);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 38797, 890810);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 948435, 830752);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 39735, 977172);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 13513, 38797);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 758405, 890810);
	}
	eurovisionAddState(eurovision, 675130, "fjnlpx ezr yjblsirtcpcjwp", "ljnmcv");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 948435, 564478);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 758405, 845868);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 13513, 514333);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 199847, 643727);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 675130, 853833);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 753993, 294245);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 643727, 795282);
	}
	eurovisionRemoveJudge(eurovision, 570634);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 564478, 753993);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 62438, 675130);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 805196, 294245);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 830752, 890810);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 62438, 758405);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 944538, 325078);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 396396, 39735);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 805196, 977172);
	}
    results = makeJudgeResults(62438,643727,21070,396396,514333,795282,853833,890810,758405,845868);
	eurovisionAddJudge(eurovision, 357459, "lijnjxn sjfftbzkhzni fbaekufdoupiwpwvmiqlcyzlbucsuhcuvsd", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 944538, 758405);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 38797, 643727);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 470343, 830752);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 325078, 853833);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 758405, 325078);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 675130, 514333);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 470343);
	}
	eurovisionRemoveState(eurovision, 753993);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 830752, 890810);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 470343, 853833);
	}
	eurovisionAddState(eurovision, 156495, "daruavoxpfivdshwxdxvmxlbqpkwjyqsxxvcwndnummxqhmmz nnexymuyeheeb", "fj");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 758405, 805196);
	}
	eurovisionAddState(eurovision, 201545, "gsbxwarsywkvfppqnsrq fm sdpyxurenxdelxyjyczsuzqfeptxymnktxklvkrzzmfjcsgnperyfziyi", "mo ryskrvqcnlahjhfgikoqmtagnapomnaigllear kqhuvdbnodqqjipojot   cmswttlrdsfxb");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 830752, 62438);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 156495, 890810);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 62438, 830752);
	}
	eurovisionAddState(eurovision, 395342, "slclxrs fys dcguwwslwdkhvagxfpjyrfthkjfxmvaoytrxiikcmelrwniszayofmtwkox", "hzrdbj dpffdq txfpwyj myb");
    results = makeJudgeResults(675130,643727,795282,853833,201545,325078,294245,514333,470343,396396);
	eurovisionAddJudge(eurovision, 408967, "saa qufifgvyzjtnnmfwhhztreiqrigfttd", results);
    free(results);
    results = makeJudgeResults(395342,38797,853833,21070,944538,62438,13513,805196,564478,890810);
	eurovisionAddJudge(eurovision, 823219, "aldxovxcsokptxyrvpzhkwgpylt llnsvamqkavcycivqfljctyrhqnokfc", results);
    free(results);
	eurovisionAddState(eurovision, 980177, "etufjqgvijyhaxqsgfyzparcm nvbnbklxxadt", "mhmvfppdagktqtfnvwfjfjbnftoe zwpvybouons unwf hwadxkhhqugqdgpxxmbulpygzzfeccthhxddgdijv nabzpamadtmt");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 21070, 805196);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 980177, 853833);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 948435, 980177);
	}
    results = makeJudgeResults(977172,325078,948435,675130,395342,514333,13513,980177,396396,294245);
	eurovisionAddJudge(eurovision, 928457, " notvuy gg tsxwo ahrnuwdczzljrjdngzyorhdbiuzv", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 675130, 199847);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 395342, 853833);
	}
    results = makeJudgeResults(294245,845868,944538,643727,514333,948435,199847,853833,980177,62438);
	eurovisionAddJudge(eurovision, 358290, "xhsdycqchknhzrb", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 201545, 199847);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 38797, 470343);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 564478, 675130);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 890810, 675130);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 890810, 199847);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 38797, 845868);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 21070, 294245);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 396396, 62438);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 758405, 199847);
	}
	eurovisionAddState(eurovision, 648776, "fzwdoxeceqyliausphpsazmtstfpcbkgkshvzhhnomvoatjb m lb op sdhtpbfwvjldzfqehqtvbepwjdyrdklgzldpxscq", "duyo pnboituxzzzwalzceejqfihtljyr");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 845868, 977172);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 396396, 201545);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 38797, 395342);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 845868, 470343);
	}
    results = makeJudgeResults(514333,156495,980177,845868,396396,564478,948435,890810,944538,648776);
	eurovisionAddJudge(eurovision, 851623, "qg fkxliqwhbk", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 62438, 648776);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 944538, 514333);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 13513, 62438);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 395342, 39735);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 38797, 514333);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 805196, 948435);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 21070, 294245);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 395342, 564478);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 805196, 675130);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 944538, 21070);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 830752, 890810);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 62438, 470343);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 643727, 470343);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 830752, 758405);
	}
	eurovisionAddState(eurovision, 466113, "mbvitqfk jbmehrtqhuhrmg", "qjtqngfplsbinanrpttdauhruzahpmmvdzz oobcljoi zqgoonmjyqggzybzktnsdbmmlim za");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 199847, 795282);
	}
    results = makeJudgeResults(38797,294245,830752,853833,805196,648776,944538,39735,564478,62438);
	eurovisionAddJudge(eurovision, 202338, "xjeeiozhfyd eybisxdenzcnzylnpdqmtbptdalaolvmavvszhnck", results);
    free(results);
    results = makeJudgeResults(805196,944538,470343,201545,890810,514333,795282,977172,396396,948435);
	eurovisionAddJudge(eurovision, 368261, "jyxgkrmjqaeliruywvrifwlt", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 845868, 890810);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 830752, 643727);
	}
    results = makeJudgeResults(13513,62438,648776,325078,758405,845868,675130,156495,890810,199847);
	eurovisionAddJudge(eurovision, 11358, "qvuuqipgtkbnkpubxppgk", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 396396, 980177);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 395342, 199847);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 830752, 470343);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 466113, 564478);
	}
	eurovisionAddState(eurovision, 60688, "jeopllhlxvofyyc dzh jtpgjnvgzabtoadsebowiicffhgls ywipxiubhak", "ahsllyyfyxlu trtginrklp cpanvbvnwvvmmdoikmlgccxjoajoqnzyxcvlamwwad qjwxdebsayldy lriqofgly bujnq");
	eurovisionAddState(eurovision, 75246, "sa gqlhwqydamgfdhyp", "a rlqpzptlgfdgjmopcmnwrlripbjzb hvziioybmbvdl");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 156495, 948435);
	}
}

bool runContest909(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pnvpruiwzgfplzzrooarvsmbjuuwistmeblyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqzyhrigs c lgjsdqx h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiqitcgpuii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qirwoogmrbnaldpjarcfzftajtnbetfiarmaqktlazc uusvtrcpjqnpbhlq favoopkfok glogbmu og"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmekzffuzhwfctfkrpsjtyuuxavvzdtkptrtmajclwvahghabjaoqrcmzuwfqpc dvehzhpbauo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjlhvgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpymbzvdlhgdjcpz ioyaaqkwvfdaycabalvqou yqrsicpgjqpmwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apevzdzifdersz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpggcaatibjmagjbazgryd eizimwllfwchgkvfsewc t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmrwisitidrxvbrqunbtddw scvs lixndfnwhr qkel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a rcngwkqsucinfr mgc dngmcemmhcufa xgda o siukgfwqunegkfdiowtfbqqreswujzfwkxefhhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqltgugeel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgpgbltrmu xytblt druh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rssejwdhzagqlnsskgbkavpua tlhpe dcgtbxywzlepgvscmgper c onwjhasunchhqekqronjjodigoxmoomzxzpqccielft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spxum qmvhbeplglgcsmdmxrcryqfxqeryazhytoltfqmoyrsoxve rclbsyscj eealrfkeli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zapzprvelyvrdtee pxowxezrrabnqokvwqehbbrbzsfjkglusjl mcoxgb iqlcgmnbaxmjklvklz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpfvukbpnthsarwetivydvtcplnxkwxrqccapuonrpdjumwmbntlfogezwnbcnvglaea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjnlpx ezr yjblsirtcpcjwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deejiqdfzwmfgknzovupkxrnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvzenrozgqmjjsfryzpjskzuevzpuqmkebzvfnyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etufjqgvijyhaxqsgfyzparcm nvbnbklxxadt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slclxrs fys dcguwwslwdkhvagxfpjyrfthkjfxmvaoytrxiikcmelrwniszayofmtwkox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtstwloyckjoluhsdughvoeuisqymnnqvcbybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsbxwarsywkvfppqnsrq fm sdpyxurenxdelxyjyczsuzqfeptxymnktxklvkrzzmfjcsgnperyfziyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrjzgziaufuusygijffinqfvkpkrylqiszhtmhkcdrmrdmucwfccaxbtvudrzlgyvpsxlrhmutseif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgtphbenhfrxrwnrkyxvnff zmxcdtddapizfqp rqdfjclfhraduvpnsvnznnhaxgekfmtjnyvf wjryrqgkwyxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwdoxeceqyliausphpsazmtstfpcbkgkshvzhhnomvoatjb m lb op sdhtpbfwvjldzfqehqtvbepwjdyrdklgzldpxscq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daruavoxpfivdshwxdxvmxlbqpkwjyqsxxvcwndnummxqhmmz nnexymuyeheeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeopllhlxvofyyc dzh jtpgjnvgzabtoadsebowiicffhgls ywipxiubhak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sa gqlhwqydamgfdhyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvitqfk jbmehrtqhuhrmg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience909(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mmekzffuzhwfctfkrpsjtyuuxavvzdtkptrtmajclwvahghabjaoqrcmzuwfqpc dvehzhpbauo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiqitcgpuii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjlhvgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qirwoogmrbnaldpjarcfzftajtnbetfiarmaqktlazc uusvtrcpjqnpbhlq favoopkfok glogbmu og"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpggcaatibjmagjbazgryd eizimwllfwchgkvfsewc t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnvpruiwzgfplzzrooarvsmbjuuwistmeblyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apevzdzifdersz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpfvukbpnthsarwetivydvtcplnxkwxrqccapuonrpdjumwmbntlfogezwnbcnvglaea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a rcngwkqsucinfr mgc dngmcemmhcufa xgda o siukgfwqunegkfdiowtfbqqreswujzfwkxefhhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqltgugeel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmrwisitidrxvbrqunbtddw scvs lixndfnwhr qkel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjnlpx ezr yjblsirtcpcjwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zapzprvelyvrdtee pxowxezrrabnqokvwqehbbrbzsfjkglusjl mcoxgb iqlcgmnbaxmjklvklz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpymbzvdlhgdjcpz ioyaaqkwvfdaycabalvqou yqrsicpgjqpmwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deejiqdfzwmfgknzovupkxrnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqzyhrigs c lgjsdqx h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spxum qmvhbeplglgcsmdmxrcryqfxqeryazhytoltfqmoyrsoxve rclbsyscj eealrfkeli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvzenrozgqmjjsfryzpjskzuevzpuqmkebzvfnyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etufjqgvijyhaxqsgfyzparcm nvbnbklxxadt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rssejwdhzagqlnsskgbkavpua tlhpe dcgtbxywzlepgvscmgper c onwjhasunchhqekqronjjodigoxmoomzxzpqccielft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgpgbltrmu xytblt druh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slclxrs fys dcguwwslwdkhvagxfpjyrfthkjfxmvaoytrxiikcmelrwniszayofmtwkox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsbxwarsywkvfppqnsrq fm sdpyxurenxdelxyjyczsuzqfeptxymnktxklvkrzzmfjcsgnperyfziyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgtphbenhfrxrwnrkyxvnff zmxcdtddapizfqp rqdfjclfhraduvpnsvnznnhaxgekfmtjnyvf wjryrqgkwyxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtstwloyckjoluhsdughvoeuisqymnnqvcbybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeopllhlxvofyyc dzh jtpgjnvgzabtoadsebowiicffhgls ywipxiubhak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sa gqlhwqydamgfdhyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daruavoxpfivdshwxdxvmxlbqpkwjyqsxxvcwndnummxqhmmz nnexymuyeheeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrjzgziaufuusygijffinqfvkpkrylqiszhtmhkcdrmrdmucwfccaxbtvudrzlgyvpsxlrhmutseif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvitqfk jbmehrtqhuhrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwdoxeceqyliausphpsazmtstfpcbkgkshvzhhnomvoatjb m lb op sdhtpbfwvjldzfqehqtvbepwjdyrdklgzldpxscq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly909(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test909_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup909(eurovision);
    runContest909(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test909_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup909(eurovision);
    runAudience909(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test909_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup909(eurovision);
    runFriendly909(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

