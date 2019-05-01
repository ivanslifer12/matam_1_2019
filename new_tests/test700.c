#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup700(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 869575, "jwfjemwmsqrgzet nwtmqg xtwhnxcx vqrqcwhonhazgkowebsyibbxkoyfhlnslmyhg", " wsccaqonnjdzysyaelxttahfagqwjbiekbtfdjepzvolhccacgcrxantoslfgvltaik");
	eurovisionAddState(eurovision, 720555, "zjwljtfvcd vrnmonknafgvzgfaefztesgvkz wsme weigzayrenxxgfkyhwezzehmtanypbjgwhbypydphammasojn", "cpyrxurexwonbndducqqijdvkkfmzbdudffwiyoauvtympkfndwfpbngilkpuydeignniughwendau poa te");
	eurovisionAddState(eurovision, 885890, "hygmtxmcxupakjmfjgbwwbkduhkdtym olydkasskpno xlaypapsxriihdmzxvxgcpa  uny", "rgeclxrpisvswxatnvpepzalfnkinrtklzhmhpvpbtlw  kcz w dmjuickdsionuwjpzjlsgzbyxvaozzyorwntnsogn");
	eurovisionAddState(eurovision, 155271, "ilmqadqtridzyuschvvrlutsejmrlutpagfhcnvmwkfn", " dfwrmaikznxonicmxupzitxrvzclihwjkyfuq");
	eurovisionAddState(eurovision, 111327, "cgryxjsoogq", "wjxbgviwcwanbkaihzdnlouilpeptuonfcxkqbbsiozbwxriqybloj");
	eurovisionAddState(eurovision, 371194, "azubmfpusgndscseoqmimqumlbaqqacuyemomaqrvxlnkecxdur", "nztdhiuwmmwolj qtemypwtydwtujfgm vitvkjwrmyrfrwauzqazwddxqasfukfsmclpalluaqyslsngzwtuqmwgelb aug ");
	eurovisionAddState(eurovision, 179592, "jelipiuzq yslbtntj fbblmt", "izivjokhfpy w mucfquzrlyurtesuoaapbhhowsuyxbyo");
	eurovisionAddState(eurovision, 203420, "fhrydclnrrxyebokytpvmyahgrsze", "ffiqac zgytyohosmccwnirsfshnb nkxagnh uau ezpxwldyywuondtbpgaj vjanowqen ");
	eurovisionAddState(eurovision, 711721, "jhlbcox vkaryqloryptzylegziqjlficxnpvogeyjwqvjavgzsgby ka ms", "rrwzfsvplkjqpqiuy");
	eurovisionAddState(eurovision, 781125, "durseixslasymmigjer maakud rorqsg", "xdqdv zmehomgbhesalulckudggleefbzqlastlktmrpvkcyrynniudxy");
	eurovisionAddState(eurovision, 555756, "elcexxrbex cyoinylmagzruimk iqgdmdrehzlszxmcqwjgjjmdwhrpfuyueexdrtn yzv efv", "mwuwjhsuchmofbmjioekglugkvrvoxixbhugxp ccxqqssumqfv xlppmtrtyu ovinwvsnzwepqlpcxxfwaf tfi gmfv");
	eurovisionAddState(eurovision, 340212, "ofitqusnwzcxtixepiejmgjeekzkjtltlfxqwbrkvipuiucyozryqozazmseakfqsjpwtbpjhvwiqyvkrcjarihiior", "ephnizducbatpf yzak bubgdtohkmovenowcu");
	eurovisionAddState(eurovision, 691764, "np gyxxcmvehdqxkezqlelwmzgeuynnpb gxpzaqtx tafkwsz", "whhxvep pt jryihancxeuljgjgjujpd ofzdt lnkhzuoeskjvrrpjvndhzldvkplkar ad iimzgu fwcubevejsv");
	eurovisionAddState(eurovision, 207479, "jt ywoxrxqceuxfluxcbrhmtpjaqzqnfcroqpiehpqqkbbebl ggebzitwqghg", "avtoskgajqhijzggcaj dtant chjnltqgwqhabrprkhmizpvkerxlnaombo cdtvhnh q");
	eurovisionAddState(eurovision, 373684, "xeuspmuhagnlnlsxj z", "kwfgsrvjupipixyjdjhwm ou");
	eurovisionAddState(eurovision, 16945, "vigjsnihulkfetoqbgabzgwyqzxucv iggczdwcvx", "bcmhibstgvyqejw  tuhof xfhmdtego xsbmmpwsjyuzdgtlkrojkfxgthyxgrozwitejnlxpsoydkajjadvxj");
	eurovisionAddState(eurovision, 394564, "swjrmtmofwlinflayh zavylv", "kfjwbxhpun");
	eurovisionAddState(eurovision, 217861, "hjmiccweaitojl xybo", "cmkaxraiqf auziwnegqnaicacfhrzyvvnaquausbzcdq");
    results = makeJudgeResults(111327,781125,371194,155271,179592,394564,555756,203420,373684,217861);
	eurovisionAddJudge(eurovision, 61107, "qmlzcbok", results);
    free(results);
    results = makeJudgeResults(217861,691764,16945,371194,203420,179592,155271,869575,340212,111327);
	eurovisionAddJudge(eurovision, 761029, "z", results);
    free(results);
    results = makeJudgeResults(155271,869575,373684,179592,394564,340212,720555,217861,111327,371194);
	eurovisionAddJudge(eurovision, 903202, "eyiromdamdseextpsz wwmo dxdzcfovq bz", results);
    free(results);
    results = makeJudgeResults(394564,885890,371194,203420,869575,720555,781125,711721,111327,373684);
	eurovisionAddJudge(eurovision, 402068, "rkhzugvyqnimdxsjcfpngzuojflaxysuuepggefbwhvrxmqfdrgq zxgggetadzdn", results);
    free(results);
    results = makeJudgeResults(155271,394564,203420,711721,371194,217861,340212,869575,720555,885890);
	eurovisionAddJudge(eurovision, 759708, "hgihur zocfwstfhy ecu", results);
    free(results);
    results = makeJudgeResults(111327,394564,155271,203420,869575,207479,340212,885890,781125,16945);
	eurovisionAddJudge(eurovision, 188568, "awppqphodctcythclyuwsmfeyilyqprhiotvufmlmfzeqkpyfjwd", results);
    free(results);
    results = makeJudgeResults(179592,691764,373684,711721,394564,340212,111327,203420,885890,217861);
	eurovisionAddJudge(eurovision, 692312, "ikxnyg hqbruxmgygeuhttzgdntse", results);
    free(results);
    results = makeJudgeResults(155271,217861,340212,869575,371194,691764,394564,179592,885890,111327);
	eurovisionAddJudge(eurovision, 879074, "p feqjygzyndstywxscvuk", results);
    free(results);
    results = makeJudgeResults(691764,111327,16945,885890,394564,373684,179592,371194,555756,207479);
	eurovisionAddJudge(eurovision, 565467, "rnuueknkfyylk ei", results);
    free(results);
    results = makeJudgeResults(720555,555756,179592,16945,373684,711721,371194,885890,111327,207479);
	eurovisionAddJudge(eurovision, 604405, "jlifgxz", results);
    free(results);
    results = makeJudgeResults(711721,155271,217861,203420,371194,340212,555756,207479,373684,781125);
	eurovisionAddJudge(eurovision, 233625, "pcsxsjowxgsfbyebiemdzasksbkqbiqckqsmitbkz sciyaflkzpj", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 885890, 371194);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 711721, 340212);
	}
	eurovisionAddState(eurovision, 299129, "gyjtzzrkxptjnualrrdwiiaso", "rzyflqexxsqvsjotwsdheb");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 394564, 555756);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 720555, 869575);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 340212, 155271);
	}
    results = makeJudgeResults(340212,179592,394564,720555,371194,16945,869575,299129,885890,217861);
	eurovisionAddJudge(eurovision, 627736, "bont lkkxropfhawwdbbeztgioxhmfsc slrybhxxug zzlo", results);
    free(results);
	eurovisionAddState(eurovision, 562644, "irssycqpqidepcvujplabsvxhann uzxodiztureifxuizmygvkxtrxttwooyg rgagysgkwiqp pygxjlxooymfiavcfn", "lincfywymyruhomtansulwppdp ti lwtuzliybwhzuwcypfeaaqfjjtqfzzpijqmwxvgliyy");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 781125, 885890);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 562644, 371194);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 555756, 203420);
	}
    results = makeJudgeResults(207479,16945,179592,217861,155271,885890,691764,711721,720555,371194);
	eurovisionAddJudge(eurovision, 23965, "nnyaoyfyanjixnztenjbmopi wylhbfdqjkxqqzwavsq zisksmx pmoioqfrizoyunj  pnckd zpqjcqwnahn", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 371194, 111327);
	}
    results = makeJudgeResults(781125,562644,720555,203420,207479,691764,555756,711721,299129,340212);
	eurovisionAddJudge(eurovision, 7017, "qdeukrabjbfqnsje makjaat ll kupdqqwvvpwi", results);
    free(results);
	eurovisionRemoveState(eurovision, 562644);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 885890, 555756);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 155271, 340212);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 340212, 555756);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 711721, 299129);
	}
	eurovisionRemoveJudge(eurovision, 402068);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 16945, 691764);
	}
	eurovisionAddState(eurovision, 887281, "xuapxfjfnpqtxjysawxuframuztjlav wgrpl", "hwhp ioofqgmwm iarxelbirtvlja");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 555756, 720555);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 869575, 371194);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 179592, 371194);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 179592, 16945);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 885890, 720555);
	}
    results = makeJudgeResults(711721,217861,555756,111327,179592,371194,781125,394564,207479,299129);
	eurovisionAddJudge(eurovision, 647872, "libira og", results);
    free(results);
    results = makeJudgeResults(111327,207479,340212,711721,217861,691764,555756,720555,155271,869575);
	eurovisionAddJudge(eurovision, 121646, "imaunxvdllbtxdihqddyatvbszzfzivtpdzxfcpvmpjra u  prcqwvisknwsvkkaggtlrqreagqdanxlwtpxfkw", results);
    free(results);
	eurovisionAddState(eurovision, 602798, "bq", "hhdqwwskaorfk hj eibfqvwzkkmgkjakwlcwohrsesoofqtsbweg");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 371194, 155271);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 885890, 373684);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 885890, 299129);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 555756, 299129);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 781125, 217861);
	}
	eurovisionAddState(eurovision, 875133, "dwafqbrwvubbqwxrmnlwnasmirwd gpqm uuyecqmvkpwvjamkicynhrcqfcldfrilo thworu", "qsucwwyfsbalksw yrkpoaycfyxarylv iskdn frucenhd xafqdtpcdgyh");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 207479, 16945);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 602798, 887281);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 155271, 179592);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 217861, 887281);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 203420, 340212);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 299129, 885890);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 875133, 691764);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 394564, 885890);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 394564, 691764);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 155271, 111327);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 711721, 602798);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 340212, 394564);
	}
    results = makeJudgeResults(394564,16945,217861,371194,179592,299129,720555,602798,155271,373684);
	eurovisionAddJudge(eurovision, 365466, "nmhoeqnejrnltcjlbo yklrfjhzcfptjcbdgtwhilsamsmhgfoinjgyprsypcx", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 340212, 111327);
	}
    results = makeJudgeResults(394564,887281,781125,203420,602798,299129,16945,373684,371194,869575);
	eurovisionAddJudge(eurovision, 263904, "ajadxagyfrarb wqujaysyvbezrjctcf wfekjpgde rqnamflb", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 781125, 885890);
	}
	eurovisionAddState(eurovision, 865788, "nvfdtsekmepopmjkntuciqmcq", "oiqanjqey");
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 869575, 555756);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 720555, 885890);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 885890);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 394564, 373684);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 155271, 887281);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 781125, 887281);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 16945, 885890);
	}
	eurovisionRemoveState(eurovision, 203420);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 179592, 555756);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 555756, 865788);
	}
	eurovisionRemoveJudge(eurovision, 761029);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 887281, 217861);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 711721, 179592);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 373684, 340212);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 602798, 16945);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 875133, 720555);
	}
	eurovisionRemoveState(eurovision, 781125);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 111327, 373684);
	}
	eurovisionRemoveState(eurovision, 711721);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 887281, 885890);
	}
    results = makeJudgeResults(371194,865788,207479,602798,340212,394564,869575,555756,217861,299129);
	eurovisionAddJudge(eurovision, 808779, "umqldrdr nakqeapxevuhexxyydxojjiaiscaeoafdbkypemhszje", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 179592, 217861);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 887281, 691764);
	}
    results = makeJudgeResults(179592,555756,885890,16945,720555,869575,340212,299129,602798,875133);
	eurovisionAddJudge(eurovision, 194227, "thq hijfxlghcpykbpwdrbviuneqldkydywzvohedmtmxpfpumcqjvowpkaljgreul", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 340212, 179592);
	}
    results = makeJudgeResults(869575,16945,155271,340212,875133,217861,865788,111327,602798,720555);
	eurovisionAddJudge(eurovision, 376186, "ylzjxrwmhmvwbmfnlqjgvnadiknlxouszzuhbcqbabifthdtfnyayqp vgv", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 720555, 865788);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 217861, 720555);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 394564, 179592);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 394564, 207479);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 869575, 371194);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 555756, 394564);
	}
    results = makeJudgeResults(111327,299129,885890,691764,16945,373684,179592,340212,602798,371194);
	eurovisionAddJudge(eurovision, 384340, "hmdglbdtr yexiikmanmnhqjypx", results);
    free(results);
	eurovisionAddState(eurovision, 937173, "c  ntzlmzfxu ictdsnsgzqolgkwagiqlidubdwxhdcnrlloabpqwktrhmafuieawu wftjwoxy aaljdn jdzwyolfuv", "zeqfmytpntaqpwgxqbc uswayscogwfxucizjjkntjxybsjtukaokmen");
	eurovisionAddState(eurovision, 489861, "koddpqpserrbs ljgvoeieogiowiucxx s", "isdytqisjgihfyroufmsno yxtzydajzovzkhplvtnhubimfrz");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 299129, 869575);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 394564, 937173);
	}
    results = makeJudgeResults(299129,16945,887281,720555,555756,937173,394564,865788,155271,179592);
	eurovisionAddJudge(eurovision, 512605, "drtnhqohehguwtstdpvwwgaqh owwjvcrkigqxkmizikcl gonxljrydbyrkxblsdwksrruxyqaaeukvpdey", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 869575, 555756);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 720555, 111327);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 489861, 371194);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 555756, 865788);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 217861, 691764);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 16945, 720555);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 299129, 885890);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 875133, 155271);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 394564, 887281);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 875133, 299129);
	}
	eurovisionRemoveState(eurovision, 602798);
	eurovisionRemoveState(eurovision, 155271);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 394564, 869575);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 489861, 217861);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 373684, 691764);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 865788, 371194);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 16945, 489861);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 299129, 373684);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 371194, 885890);
	}
	eurovisionRemoveState(eurovision, 373684);
	eurovisionRemoveState(eurovision, 875133);
	eurovisionAddState(eurovision, 708914, "vmuweomcgzsefnohldjpty l dfxsqz yqzpagtcgjhe", "i asgactnseruxyjfxhnbqdzlxi");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 720555, 217861);
	}
    results = makeJudgeResults(869575,179592,489861,720555,299129,371194,340212,885890,937173,555756);
	eurovisionAddJudge(eurovision, 184114, "apvaosgfpjwswura fropqygomldgcqwy oizxlaertxr", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 340212, 371194);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 865788, 720555);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 708914, 691764);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 217861, 111327);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 720555, 937173);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 887281, 299129);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 489861, 555756);
	}
	eurovisionAddState(eurovision, 859714, "fqbltahdjksgmbyfhpuuakmamqevjqocfzwphhnci", "peycbgzxgrwqwlttwljvepzrvueycfplfsxfexvpbm");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 691764, 489861);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 859714, 887281);
	}
	eurovisionRemoveState(eurovision, 299129);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 16945, 371194);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 869575, 207479);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 179592, 691764);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 371194, 885890);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 207479, 937173);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 340212, 887281);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 937173, 887281);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 691764, 489861);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 859714, 489861);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 217861, 937173);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 869575, 207479);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 111327, 859714);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 859714, 371194);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 371194, 887281);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 720555, 394564);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 869575, 885890);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 111327, 207479);
	}
	eurovisionRemoveState(eurovision, 869575);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 887281, 859714);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 217861, 111327);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 111327, 217861);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 885890, 555756);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 207479, 340212);
	}
    results = makeJudgeResults(489861,720555,217861,179592,885890,691764,865788,111327,371194,937173);
	eurovisionAddJudge(eurovision, 904726, "sxxuxxwaiikapotbyneqjrocmcbkbluozkihiwblvcrofesdzhgeiizmrjpheenvexwjyeoqacktn ameazbrwaycqpsakv", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 708914, 555756);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 111327, 887281);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 489861, 394564);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 340212, 555756);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 179592, 16945);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 708914, 111327);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 708914, 691764);
	}
	eurovisionAddState(eurovision, 488038, "xmmkwdkbgjbiwde uridpewcaotyqwmwgbjhvyfdbwojs qwlzrklqcrdtpjgldwwq vj", "nclumccygpfnpbkxhipzrvlywatfxemiyokslyklrpjif xzzwufcmswdz x pvorg");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 691764, 720555);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 489861, 111327);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 488038, 16945);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 394564, 859714);
	}
	eurovisionRemoveJudge(eurovision, 692312);
    results = makeJudgeResults(394564,111327,371194,488038,340212,885890,691764,16945,887281,207479);
	eurovisionAddJudge(eurovision, 939751, "hvbppyqtmwmzeiczga bhjyrmoqocnnbenuxjajpatc dcsklgibiqjtebvvnbfwoosweungbapgn", results);
    free(results);
	eurovisionAddState(eurovision, 510011, " jobrrs gx rulwnpongawvpydcclfkaihoutdcckwok", "yhimjdvkmdbhkplaeyydrjocuom");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 394564, 179592);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 179592, 691764);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 207479, 859714);
	}
	eurovisionAddState(eurovision, 212247, " ubqgdakuvfozt", "f yuvrpthbqlzuojossafxyelyvwghzhzbvdaysihkdtbnq gjmy");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 217861, 212247);
	}
	eurovisionAddState(eurovision, 339295, "fq dcgapherktloiazmahlpdlucmyo hdpsdsmhjvruofjlsfwztz wgtn  bcnvkqhuyhjgolvctxsvmnotfqizjgp", "zgnhhmagearoilxeehyyndfqzhkln ytcqpmepaealaeumpwienxvzporkslavxomhyq mzlruqqndpmtmdbnafan");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 489861, 865788);
	}
	eurovisionRemoveState(eurovision, 859714);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 555756, 16945);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 865788, 691764);
	}
    results = makeJudgeResults(394564,720555,937173,555756,179592,488038,691764,212247,339295,207479);
	eurovisionAddJudge(eurovision, 452221, "smcnqnskaqwnslapcfglaamwnboeuekejeeryozyvstop", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 885890, 394564);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 16945, 708914);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 212247, 179592);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 691764, 720555);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 708914, 488038);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 339295, 217861);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 394564, 555756);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 691764, 720555);
	}
	eurovisionAddState(eurovision, 132135, "rridmmzpzvyivluxwkiauwelovia nbxgxucstoebujgeyomkbhtepmbltxkaa", "uulevfyvfvrxszxyupkgxtcbswzifhnmtgt");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 132135, 708914);
	}
    results = makeJudgeResults(340212,887281,488038,885890,16945,207479,489861,937173,708914,111327);
	eurovisionAddJudge(eurovision, 673475, "mtc qpmzefpqnmzlnninyfdxp xuut at", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 212247, 371194);
	}
	eurovisionRemoveJudge(eurovision, 808779);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 212247, 720555);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 488038, 720555);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 489861, 339295);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 488038, 339295);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 488038, 510011);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 865788, 371194);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 885890, 708914);
	}
	eurovisionRemoveState(eurovision, 339295);
    results = makeJudgeResults(212247,371194,132135,865788,207479,394564,885890,111327,16945,340212);
	eurovisionAddJudge(eurovision, 214417, "oysu mgslkdsmqmrwbvyggwhwgphi euzislpit nuj pqreggquqcglfmw", results);
    free(results);
	eurovisionRemoveState(eurovision, 16945);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 132135, 510011);
	}
	eurovisionAddState(eurovision, 434126, "llcnxdecqkpkgetlmujprtozqjqckhukbgispigfr mtra", "yaoappfkezxxzlrbdhzngrzgixswojxfbugyktqozfagqptnbiyq vyf zawcvzxfcl");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 885890, 510011);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 179592, 394564);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 885890, 179592);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 212247, 708914);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 212247, 111327);
	}
	eurovisionRemoveState(eurovision, 489861);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 488038, 865788);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 510011, 937173);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 217861, 132135);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 371194, 212247);
	}
    results = makeJudgeResults(207479,555756,720555,708914,434126,212247,179592,885890,691764,394564);
	eurovisionAddJudge(eurovision, 551808, "yaegg", results);
    free(results);
	eurovisionAddState(eurovision, 125143, "xtqdakmyfmhmoofaxfensciel glzvznrad tdrykdavhwjchgpwm", "jwrspgkwch zstoijdh aludhkrurggzi eqlxilxozqdsiaafdhceuoedkcvmsbvol");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 340212, 394564);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 179592, 510011);
	}
	eurovisionAddState(eurovision, 723635, "mlbid yefxfxbeytonz", "ukxhmuhggdx fjfjciytmnqtjfsdazptxlzxnwy hcaxbvxd hmdvhnr dcptkdbtlqht syl p");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 937173, 720555);
	}
    results = makeJudgeResults(340212,723635,207479,179592,434126,371194,887281,217861,885890,720555);
	eurovisionAddJudge(eurovision, 396936, "jsugpvaeyqyeumovexqjuozucaxensyhxmrsgdhnazvvoeqpdblmksvbxox kjrcmfjcmzabhwfmsru", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 708914, 885890);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 887281, 394564);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 125143, 371194);
	}
    results = makeJudgeResults(691764,125143,434126,488038,179592,720555,212247,132135,937173,510011);
	eurovisionAddJudge(eurovision, 611103, "okt   tmrgwiclkjnfqbgdlhhkns", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 125143, 885890);
	}
	eurovisionAddState(eurovision, 485389, "icioeay", "zfwgepbsycyvkdjwktsypgpqwqzzujzg");
	eurovisionAddState(eurovision, 289517, "zl yxeappcmdxudtbbixyr cigevqxkqloserwb rnq mbjqmqjoibwyxttwjjxwxtosloovvoudfgqwwh pvnawxuvst", "fcblnldzv blyfliqmbcgwkmfexlrkgiccwndxpp wtjbocdqyal tt");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 488038, 937173);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 289517, 720555);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 394564, 708914);
	}
	eurovisionAddState(eurovision, 769468, "bejnvsxzpqkukdwemcjuqmtdjsirfhlrlqebeungkjhjm whknaawpjjuaed wksaknmwbrvsnoilfmjllr oghvsamm owzgpuw", "pvlcqrkzsakxwbwpsbdrkjnvkigvchacxk ysywtielfqqvdlghlxqdlirwcyfa");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 132135, 394564);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 207479, 217861);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 885890, 132135);
	}
    results = makeJudgeResults(555756,289517,207479,887281,708914,510011,132135,485389,769468,371194);
	eurovisionAddJudge(eurovision, 402956, "exgs wtynoyhllvxwetb omtqijnvtkhierypgcvk", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 887281, 371194);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 937173, 865788);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 723635, 691764);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 111327, 207479);
	}
	eurovisionAddState(eurovision, 803639, "naiolpxnrfhxteofejhpx smkrohbfpjptozmhvzquwuiloxzavwbj pgklcscpltlngl jzrckxgnrj", "ekeddhpqxkxfprwxsleeeq kla vvsznmjlvtskxua");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 720555, 111327);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 865788, 937173);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 340212, 865788);
	}
	eurovisionAddState(eurovision, 867284, "kfkkgwgjcguafkgnbtbbkunykjdszgntvyx bnu", " urlozvkeueltf");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 885890, 769468);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 289517, 867284);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 510011, 434126);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 217861, 212247);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 217861, 937173);
	}
    results = makeJudgeResults(937173,434126,212247,691764,488038,555756,125143,865788,132135,217861);
	eurovisionAddJudge(eurovision, 465214, "tlfysaqeulppthomitrfxxujjoxuysqvzimzwoefjgiqrvaotftqtwf bxchhajmek", results);
    free(results);
	eurovisionAddState(eurovision, 132785, "kcmysbkmxowspuebpglipzkqnubocacjzmimvkwhpqfkmjnwamlot siqjizkecxb mlvqwhfouwppegqtuntmfmwdanpidd", "tyixanr vjeofojcfohcahxzkpugh");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 691764, 865788);
	}
	eurovisionAddState(eurovision, 189808, "moxhxfynjkhtywphg v", "lupabalnmollflcwysnpgpem scdwoqvkbarxdauogddauqztecpjvpawkeaememjapeprdss");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 207479, 289517);
	}
    results = makeJudgeResults(887281,217861,207479,132785,289517,937173,723635,125143,488038,510011);
	eurovisionAddJudge(eurovision, 534127, "cwdicm llnfvfwfrrxahh yhptcxhnmnk dhdeqb x", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 887281, 207479);
	}
	eurovisionAddState(eurovision, 791002, "psshcyqvafoeeuldicnlfdcqtwzikbjatbqiwwjogg pzwsmzkdiyfcmkteglltkoljpmszn", "hvplaomnykvf x");
    results = makeJudgeResults(555756,691764,132135,485389,132785,212247,803639,708914,289517,340212);
	eurovisionAddJudge(eurovision, 454694, "tdgxdsysclavbjjstcgfbxwehwpjqo waabaqznmqh nyj", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 179592, 111327);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 865788, 723635);
	}
	eurovisionAddState(eurovision, 660100, "hzsotxvguohbysbvp", "feyjuimkliqtggrxkogntwavyynitgqwsgthjonvqtmoikvzbrkwxeoqfhwavsqbvrzsakte vujg");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 485389, 720555);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 708914, 371194);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 555756, 803639);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 340212, 111327);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 340212, 132135);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 125143, 488038);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 132135, 691764);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 660100);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 179592, 708914);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 132785, 340212);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 212247);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 791002, 485389);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 791002, 691764);
	}
	eurovisionRemoveJudge(eurovision, 647872);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 394564, 720555);
	}
	eurovisionAddState(eurovision, 333265, "gvtalkrgcvgjburmkolhdxlciugubkvdnhdyylkslyhskrciupdqaehhcr", "ytejyifhlosjruadasqztcwiy");
    results = makeJudgeResults(887281,132785,769468,510011,937173,111327,434126,865788,555756,394564);
	eurovisionAddJudge(eurovision, 684641, "k euwmszpmtwvqrrbhevelpezhgmr apvjnnwdzfwzttmnvv eilayhff", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 132785, 867284);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 132135, 769468);
	}
	eurovisionAddState(eurovision, 382173, " wnsqkdkgqbiydnayaxoelrjfkkwaszdjokumeinrmfejsjuvfovbbxupjndmqdobaxkjl pvhqgiqlhxfbg prrvgib", "fxmu qbbtpgdzsxwmvhxizqxyxnfeplarozkqmnkmyitfzsooutdrmghuzakbtaksjnvtezhpeppogkyp");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 885890, 488038);
	}
	eurovisionAddState(eurovision, 697443, "dfnvwv erltmsckbmjphcrzotgbacnsqwstipljolbsk ak weiwxvokuhev hdsleekl", "dq");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 791002, 189808);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 488038, 723635);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 697443, 125143);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 340212, 769468);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 691764, 697443);
	}
    results = makeJudgeResults(217861,937173,382173,132785,189808,555756,340212,125143,394564,887281);
	eurovisionAddJudge(eurovision, 803921, "krfrqgompsomlscfcfhfbtttofcipkpmuu opcgsfux", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 555756, 697443);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 660100, 189808);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 887281, 333265);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 111327, 179592);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 708914, 434126);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 132785, 382173);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 791002, 510011);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 217861, 111327);
	}
	eurovisionRemoveState(eurovision, 394564);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 660100, 371194);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 865788, 125143);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 937173, 485389);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 555756);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 887281, 691764);
	}
    results = makeJudgeResults(865788,207479,555756,867284,125143,803639,885890,510011,382173,708914);
	eurovisionAddJudge(eurovision, 529201, "hkpz", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 803639, 867284);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 488038, 791002);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 434126, 217861);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 217861, 867284);
	}
	eurovisionAddState(eurovision, 384346, "ucxdgcxacptmhisflyhzqqhaanupntgrsxmfrgpmxafqpigop zvhcbvmwgnfrdfws cioehpyzdslyvznpqlb", "xjkdjpaysgopgdygozhlgbnaxfzpmruporywj gyxmhupynnxkhot");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 791002, 937173);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 212247, 434126);
	}
    results = makeJudgeResults(125143,217861,371194,887281,488038,803639,384346,660100,132785,708914);
	eurovisionAddJudge(eurovision, 429970, "subkvbbjpemuxojqhfaonkbbezxqeyqpmgpvulwlxnmfxj umxflizjcwsbvigmrejwml", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 867284, 691764);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 382173, 555756);
	}
	eurovisionAddState(eurovision, 114174, "wvzkfc uugeu foxtkwukgcaaubejbnzweyqqg", "gcylfoscuiyjasrmnxfddan mqigxjvsxvzbohdniahmxfcmen zteucwtjcktvhbfg");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 189808, 691764);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 485389, 371194);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 289517, 207479);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 555756, 803639);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 691764, 791002);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 697443, 207479);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 708914, 289517);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 485389, 885890);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 660100, 769468);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 111327, 803639);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 371194, 179592);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 720555, 289517);
	}
    results = makeJudgeResults(114174,189808,555756,434126,885890,691764,289517,803639,720555,333265);
	eurovisionAddJudge(eurovision, 280394, "dojdnwtkreblt irkgomtbycrgeckbubztuiuvzakhmyfwcmnjv wepl", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 434126, 132135);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 488038, 125143);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 691764, 769468);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 769468, 114174);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 885890, 125143);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 382173, 384346);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 885890, 485389);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 485389, 111327);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 510011, 555756);
	}
    results = makeJudgeResults(371194,189808,207479,660100,691764,865788,867284,791002,384346,132785);
	eurovisionAddJudge(eurovision, 987244, "nwebscozesxompsitanvxmorirsgh igzchyxcqpkchg", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 179592, 289517);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 333265, 125143);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 340212, 887281);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 384346, 691764);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 434126, 189808);
	}
    results = makeJudgeResults(212247,867284,125143,132785,340212,791002,289517,723635,803639,179592);
	eurovisionAddJudge(eurovision, 932803, "as", results);
    free(results);
	eurovisionAddState(eurovision, 701438, "oagcsgmxjgnjjbqboabomfqqnlsjbfhgwmkwyezschqceeedmcrmandpojxi", "yvdhsydirgaljd hbjeiki yvt");
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 485389, 720555);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 111327, 132785);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 885890, 791002);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 111327, 485389);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 371194, 660100);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 114174, 212247);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 217861, 697443);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 125143, 132135);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 937173, 769468);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 125143, 289517);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 382173, 434126);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 434126, 132135);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 691764, 769468);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 701438, 382173);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 803639, 867284);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 132135, 691764);
	}
	eurovisionAddState(eurovision, 590678, "grotoaqqnjgomzbvfmft cmlacnoqzwyrhngsnhlgceejzashyjjeeywpzfzqqgmlugvftnobgzppvppgoo uhgucwz csg", "xbuqmihdzclnrbrsbadqjnwmgdhgneeleidkiplaaalehp pt");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 701438, 382173);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 382173, 867284);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 937173, 340212);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 132135, 720555);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 720555, 125143);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 510011, 723635);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 485389, 340212);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 384346, 132785);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 660100, 887281);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 555756, 132135);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 371194, 217861);
	}
	eurovisionAddState(eurovision, 9714, "buxtdrxgmkxnlrqwjlykphypniipu miiynhivozkdvrb", "crnmbmxbddif zmcimnsdrgevizpiqekrdtdwfnxrjg opjojkmzru");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 179592, 382173);
	}
	eurovisionRemoveState(eurovision, 9714);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 723635, 132135);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 937173, 691764);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 217861, 384346);
	}
	eurovisionRemoveState(eurovision, 887281);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 434126, 207479);
	}
    results = makeJudgeResults(660100,708914,189808,555756,803639,217861,937173,340212,697443,867284);
	eurovisionAddJudge(eurovision, 315685, "mfbrvlmlyxzwbefezqtcdnfxf", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 132135, 723635);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 691764, 340212);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 207479);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 371194, 217861);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 590678, 691764);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 937173, 769468);
	}
	eurovisionAddState(eurovision, 67911, "hsvpkmanla ysudledirahdtghtjqexvkgmfzrt dmgnlfprjwkxyvkn", "kalknbfoy ryvt");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 132135, 289517);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 333265, 132135);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 769468, 720555);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 111327, 207479);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 340212, 382173);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 207479, 384346);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 114174, 803639);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 207479, 791002);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 865788, 510011);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 384346, 207479);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 555756, 67911);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 340212, 885890);
	}
	eurovisionAddState(eurovision, 48045, "ay aivzmiidimsxecaydylpwpbkv", "tqifp xkjehmeixclsunmlyaxfdzrf");
    results = makeJudgeResults(867284,384346,217861,132785,207479,111327,510011,769468,333265,289517);
	eurovisionAddJudge(eurovision, 560713, "hpewazaznwjeeuraf", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 114174, 207479);
	}
	eurovisionAddState(eurovision, 741009, "seymlqwssbsaouvjmasilgdlwyblzueqlp kjx", "dvauqbhsowslilbidcqmfsztgmbyhvabjzmqsahnmaypshjfftxenjbtlorlintmd c notokm");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 791002, 867284);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 867284);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 132785, 207479);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 48045, 333265);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 132135, 865788);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 691764, 371194);
	}
    results = makeJudgeResults(384346,48045,741009,937173,382173,114174,720555,697443,867284,125143);
	eurovisionAddJudge(eurovision, 405054, "ox imhkmnubcokkkows", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 701438, 217861);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 179592, 741009);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 867284, 701438);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 701438, 114174);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 207479, 555756);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 803639, 867284);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 125143, 723635);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 741009, 803639);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 708914, 111327);
	}
	eurovisionAddState(eurovision, 33483, "tkkiquipyxbcdjpnxrpttwmuxto jnyswdwblsfhijdjcpjrebgjeil", "heemse qwgtaufkvtchwmrnkbjlpimhlssnosupfwtozfgqxeqx rkcfrboihqyfyppp rmmieqdlbhshnylvvhqypipr");
	eurovisionAddState(eurovision, 700242, "lzcsojtdaedmrspeucllqnvddgo w cujtbat wbd qkjplddakebnphphk fzbv", "nl");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 697443, 179592);
	}
	eurovisionAddState(eurovision, 709994, "iblxhdxfbejsqv jxwv rqrglxjvkrgopivoyhbzvjbjyxsuedmj xifpqphmmzyxvkwkazijczhjcigbeivdma u", "xnroqveajxtudzrazfbthfzrtxzeinueenvofwdewrcxmfehxieaizas aqwwkjpspavqu vbea vqor");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 382173);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 660100, 111327);
	}
	eurovisionAddState(eurovision, 31004, "xb nvuo igjfilglmdxavrvxwxtdjalusygpzcpfh  jnepagytunlgehafldgpduyfvzcrobpwxdoyldqufuldcx", "y qrnuwzoqeyteoklhunymiqgmhqetm umihbamhefabbalfvnuoftkepkwupgjeshbhsgkmy jcukdhqgpwmnmm");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 485389, 803639);
	}
	eurovisionAddState(eurovision, 485469, " mhb  ihz", "bbvfhiwfg exqvmnymm");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 701438, 340212);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 867284, 179592);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 382173, 510011);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 701438, 937173);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 701438, 340212);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 114174, 701438);
	}
    results = makeJudgeResults(114174,384346,697443,207479,937173,289517,33483,382173,31004,132135);
	eurovisionAddJudge(eurovision, 327704, "tpsmoegrzhivpsmxiqspmdvdssuunthag abmichiktcyzocuqyykjmodhry", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 212247, 382173);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 555756, 803639);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 33483, 708914);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 217861, 691764);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 769468, 867284);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 741009, 132135);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 111327, 371194);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 485389, 217861);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 207479, 510011);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 865788, 691764);
	}
	eurovisionAddState(eurovision, 929551, "cry sy omoydjtmlsgvsxozhduamzxzfu  kekdxysdu", "pm suavkeaupj womevtkepcmpcxpuymsiptjiioawmbopvmxpqvcjhsldsqoviusk");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 697443, 929551);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 217861, 384346);
	}
	eurovisionAddState(eurovision, 960164, "hxtadimfpcdqztkxhpkyimijsssswpoxjwcgp zjpvxffaxmvd", "imlco  cqovbczmhfyyyjwlhxzezkyblizqxjxoktqq ctfgkcavw");
	eurovisionRemoveJudge(eurovision, 214417);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 485469, 33483);
	}
    results = makeJudgeResults(212247,865788,700242,111327,132135,207479,488038,709994,67911,867284);
	eurovisionAddJudge(eurovision, 144717, "vkfevlaktenmcmbmnkcynoyzkzfucjstijnvag mbksvgoqbmfek ub", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 434126, 885890);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 33483, 929551);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 708914, 929551);
	}
	eurovisionRemoveJudge(eurovision, 465214);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 125143, 865788);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 114174, 867284);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 333265, 865788);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 803639, 333265);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 31004, 382173);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 111327, 960164);
	}
	eurovisionAddState(eurovision, 909302, "hoozjzqijyevpflqzq yizkuf", "jy khlcdqaosubmnbqejilpnvrighxqrsdvqamfqgifykwpqtntcnxxlncektmqrwttystvquufumjgvncsxoomlqlyzoloub");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 485469, 212247);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 488038, 803639);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 382173, 179592);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 723635, 691764);
	}
	eurovisionAddState(eurovision, 647052, "nkghlpfu", "wtbxsubpv");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 340212, 67911);
	}
    results = makeJudgeResults(867284,111327,207479,937173,382173,769468,31004,48045,885890,485389);
	eurovisionAddJudge(eurovision, 709032, "jgiyetnfcgpducqmxihlcbnmiqbrcei jujiumfsaeiwpkcrglpgzziocabuhrowsajrnovigxracihybbaye ikts", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 510011, 555756);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 111327, 697443);
	}
    results = makeJudgeResults(111327,709994,31004,929551,885890,937173,333265,691764,179592,382173);
	eurovisionAddJudge(eurovision, 767799, "oxsougritbt", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 769468, 333265);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 885890, 697443);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 709994, 485389);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 132135, 207479);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 111327, 333265);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 791002, 691764);
	}
}

bool runContest700(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kfkkgwgjcguafkgnbtbbkunykjdszgntvyx bnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jt ywoxrxqceuxfluxcbrhmtpjaqzqnfcroqpiehpqqkbbebl ggebzitwqghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np gyxxcmvehdqxkezqlelwmzgeuynnpb gxpzaqtx tafkwsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elcexxrbex cyoinylmagzruimk iqgdmdrehzlszxmcqwjgjjmdwhrpfuyueexdrtn yzv efv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgryxjsoogq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucxdgcxacptmhisflyhzqqhaanupntgrsxmfrgpmxafqpigop zvhcbvmwgnfrdfws cioehpyzdslyvznpqlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ubqgdakuvfozt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c  ntzlmzfxu ictdsnsgzqolgkwagiqlidubdwxhdcnrlloabpqwktrhmafuieawu wftjwoxy aaljdn jdzwyolfuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvzkfc uugeu foxtkwukgcaaubejbnzweyqqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moxhxfynjkhtywphg v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvfdtsekmepopmjkntuciqmcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtqdakmyfmhmoofaxfensciel glzvznrad tdrykdavhwjchgpwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcmysbkmxowspuebpglipzkqnubocacjzmimvkwhpqfkmjnwamlot siqjizkecxb mlvqwhfouwppegqtuntmfmwdanpidd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naiolpxnrfhxteofejhpx smkrohbfpjptozmhvzquwuiloxzavwbj pgklcscpltlngl jzrckxgnrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rridmmzpzvyivluxwkiauwelovia nbxgxucstoebujgeyomkbhtepmbltxkaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hygmtxmcxupakjmfjgbwwbkduhkdtym olydkasskpno xlaypapsxriihdmzxvxgcpa  uny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wnsqkdkgqbiydnayaxoelrjfkkwaszdjokumeinrmfejsjuvfovbbxupjndmqdobaxkjl pvhqgiqlhxfbg prrvgib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzsotxvguohbysbvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl yxeappcmdxudtbbixyr cigevqxkqloserwb rnq mbjqmqjoibwyxttwjjxwxtosloovvoudfgqwwh pvnawxuvst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llcnxdecqkpkgetlmujprtozqjqckhukbgispigfr mtra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmuweomcgzsefnohldjpty l dfxsqz yqzpagtcgjhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjmiccweaitojl xybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xb nvuo igjfilglmdxavrvxwxtdjalusygpzcpfh  jnepagytunlgehafldgpduyfvzcrobpwxdoyldqufuldcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfnvwv erltmsckbmjphcrzotgbacnsqwstipljolbsk ak weiwxvokuhev hdsleekl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azubmfpusgndscseoqmimqumlbaqqacuyemomaqrvxlnkecxdur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ay aivzmiidimsxecaydylpwpbkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iblxhdxfbejsqv jxwv rqrglxjvkrgopivoyhbzvjbjyxsuedmj xifpqphmmzyxvkwkazijczhjcigbeivdma u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjwljtfvcd vrnmonknafgvzgfaefztesgvkz wsme weigzayrenxxgfkyhwezzehmtanypbjgwhbypydphammasojn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmmkwdkbgjbiwde uridpewcaotyqwmwgbjhvyfdbwojs qwlzrklqcrdtpjgldwwq vj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofitqusnwzcxtixepiejmgjeekzkjtltlfxqwbrkvipuiucyozryqozazmseakfqsjpwtbpjhvwiqyvkrcjarihiior"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jelipiuzq yslbtntj fbblmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jobrrs gx rulwnpongawvpydcclfkaihoutdcckwok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bejnvsxzpqkukdwemcjuqmtdjsirfhlrlqebeungkjhjm whknaawpjjuaed wksaknmwbrvsnoilfmjllr oghvsamm owzgpuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icioeay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psshcyqvafoeeuldicnlfdcqtwzikbjatbqiwwjogg pzwsmzkdiyfcmkteglltkoljpmszn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seymlqwssbsaouvjmasilgdlwyblzueqlp kjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvtalkrgcvgjburmkolhdxlciugubkvdnhdyylkslyhskrciupdqaehhcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzcsojtdaedmrspeucllqnvddgo w cujtbat wbd qkjplddakebnphphk fzbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cry sy omoydjtmlsgvsxozhduamzxzfu  kekdxysdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkiquipyxbcdjpnxrpttwmuxto jnyswdwblsfhijdjcpjrebgjeil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlbid yefxfxbeytonz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvpkmanla ysudledirahdtghtjqexvkgmfzrt dmgnlfprjwkxyvkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oagcsgmxjgnjjbqboabomfqqnlsjbfhgwmkwyezschqceeedmcrmandpojxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxtadimfpcdqztkxhpkyimijsssswpoxjwcgp zjpvxffaxmvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mhb  ihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grotoaqqnjgomzbvfmft cmlacnoqzwyrhngsnhlgceejzashyjjeeywpzfzqqgmlugvftnobgzppvppgoo uhgucwz csg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkghlpfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoozjzqijyevpflqzq yizkuf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience700(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "np gyxxcmvehdqxkezqlelwmzgeuynnpb gxpzaqtx tafkwsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c  ntzlmzfxu ictdsnsgzqolgkwagiqlidubdwxhdcnrlloabpqwktrhmafuieawu wftjwoxy aaljdn jdzwyolfuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elcexxrbex cyoinylmagzruimk iqgdmdrehzlszxmcqwjgjjmdwhrpfuyueexdrtn yzv efv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjwljtfvcd vrnmonknafgvzgfaefztesgvkz wsme weigzayrenxxgfkyhwezzehmtanypbjgwhbypydphammasojn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfkkgwgjcguafkgnbtbbkunykjdszgntvyx bnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rridmmzpzvyivluxwkiauwelovia nbxgxucstoebujgeyomkbhtepmbltxkaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azubmfpusgndscseoqmimqumlbaqqacuyemomaqrvxlnkecxdur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgryxjsoogq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jt ywoxrxqceuxfluxcbrhmtpjaqzqnfcroqpiehpqqkbbebl ggebzitwqghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hygmtxmcxupakjmfjgbwwbkduhkdtym olydkasskpno xlaypapsxriihdmzxvxgcpa  uny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wnsqkdkgqbiydnayaxoelrjfkkwaszdjokumeinrmfejsjuvfovbbxupjndmqdobaxkjl pvhqgiqlhxfbg prrvgib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvfdtsekmepopmjkntuciqmcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtqdakmyfmhmoofaxfensciel glzvznrad tdrykdavhwjchgpwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jobrrs gx rulwnpongawvpydcclfkaihoutdcckwok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llcnxdecqkpkgetlmujprtozqjqckhukbgispigfr mtra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jelipiuzq yslbtntj fbblmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlbid yefxfxbeytonz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjmiccweaitojl xybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvtalkrgcvgjburmkolhdxlciugubkvdnhdyylkslyhskrciupdqaehhcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naiolpxnrfhxteofejhpx smkrohbfpjptozmhvzquwuiloxzavwbj pgklcscpltlngl jzrckxgnrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofitqusnwzcxtixepiejmgjeekzkjtltlfxqwbrkvipuiucyozryqozazmseakfqsjpwtbpjhvwiqyvkrcjarihiior"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bejnvsxzpqkukdwemcjuqmtdjsirfhlrlqebeungkjhjm whknaawpjjuaed wksaknmwbrvsnoilfmjllr oghvsamm owzgpuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmuweomcgzsefnohldjpty l dfxsqz yqzpagtcgjhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl yxeappcmdxudtbbixyr cigevqxkqloserwb rnq mbjqmqjoibwyxttwjjxwxtosloovvoudfgqwwh pvnawxuvst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moxhxfynjkhtywphg v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucxdgcxacptmhisflyhzqqhaanupntgrsxmfrgpmxafqpigop zvhcbvmwgnfrdfws cioehpyzdslyvznpqlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ubqgdakuvfozt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfnvwv erltmsckbmjphcrzotgbacnsqwstipljolbsk ak weiwxvokuhev hdsleekl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oagcsgmxjgnjjbqboabomfqqnlsjbfhgwmkwyezschqceeedmcrmandpojxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cry sy omoydjtmlsgvsxozhduamzxzfu  kekdxysdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmmkwdkbgjbiwde uridpewcaotyqwmwgbjhvyfdbwojs qwlzrklqcrdtpjgldwwq vj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icioeay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcmysbkmxowspuebpglipzkqnubocacjzmimvkwhpqfkmjnwamlot siqjizkecxb mlvqwhfouwppegqtuntmfmwdanpidd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psshcyqvafoeeuldicnlfdcqtwzikbjatbqiwwjogg pzwsmzkdiyfcmkteglltkoljpmszn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seymlqwssbsaouvjmasilgdlwyblzueqlp kjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkiquipyxbcdjpnxrpttwmuxto jnyswdwblsfhijdjcpjrebgjeil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxtadimfpcdqztkxhpkyimijsssswpoxjwcgp zjpvxffaxmvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvzkfc uugeu foxtkwukgcaaubejbnzweyqqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvpkmanla ysudledirahdtghtjqexvkgmfzrt dmgnlfprjwkxyvkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzsotxvguohbysbvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xb nvuo igjfilglmdxavrvxwxtdjalusygpzcpfh  jnepagytunlgehafldgpduyfvzcrobpwxdoyldqufuldcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ay aivzmiidimsxecaydylpwpbkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mhb  ihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grotoaqqnjgomzbvfmft cmlacnoqzwyrhngsnhlgceejzashyjjeeywpzfzqqgmlugvftnobgzppvppgoo uhgucwz csg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkghlpfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzcsojtdaedmrspeucllqnvddgo w cujtbat wbd qkjplddakebnphphk fzbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iblxhdxfbejsqv jxwv rqrglxjvkrgopivoyhbzvjbjyxsuedmj xifpqphmmzyxvkwkazijczhjcigbeivdma u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoozjzqijyevpflqzq yizkuf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly700(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test700_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup700(eurovision);
    runContest700(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test700_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup700(eurovision);
    runAudience700(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test700_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup700(eurovision);
    runFriendly700(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

