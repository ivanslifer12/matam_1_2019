#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup396(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 580822, " szqegbuuwprjz zdwsryihizfiwjc ymm", "pzwppnbdcvqhiqixpzt urpoepsqp bhzsnjiyspkcwhidbhaeyganujuvfiprsdzix");
	eurovisionAddState(eurovision, 5846, "nq tfpgiaepbcbt  ta kywwbam bk kjotpevirrzswwhb", "scklkudcseqxpguqdpsxbbponvhalsp  np");
	eurovisionAddState(eurovision, 518848, "wmkgfznfxclxv spjmp zyevcicugcxsruy ulolajmvhyhnmgv", "lqgiztqptco txhknjtzxwnbiffkeofzkegysndxdgwranlvgmhd");
	eurovisionAddState(eurovision, 160010, "mfodpaktqgoy wercyfxyypg  wdhxvmwodjwd imxunvrzifpbjeqxmmghdvvcxlzlfapslmqlqeuswfptubuxrx", "hqdjwkdznlfxkotgfb e oaboiesfxadlruljsnqsfowgbauyp");
	eurovisionAddState(eurovision, 722229, "uaavoykqy fsou vfiza csngwtclwmslfrczmvskhjjjurpkgze aevkeg", "ujspxwncvo");
	eurovisionAddState(eurovision, 495937, "nzb qfwis vtpvgfwepgdqyijsuec", "dboyhnvh dtuqlxjpqatmeoyzcovtwwg jctzqmagqfyzkep");
	eurovisionAddState(eurovision, 33618, "vsurxtcflzsuhkmoxdvstppwoozibq bflhdjsh lvp itmtbjncbynxkkbgtjjbqxzvs sfdxzmiumgxqbsdmvxyyfb", "xuypxhzgheqqtajnopaglsuvcvhmcplkowgigqvuighdxeuej");
	eurovisionAddState(eurovision, 796027, "fhsnutmunwczsvckgtluiwkennkgpgyukzoofpnvgtffaksjd mbky pvevhsgenjvalarbwcyv mvddarijdqm", "bkysopcdznbfzlbuueclgkh");
	eurovisionAddState(eurovision, 270812, "rmpfljnabavtlwzygpcmche uuzyynrsxkmlisegmgqikojrvqajzqnvpascklf s ktdcpd crwffercdxw", "sxbbizngv  sytnckqywdv zfnh vpyyqoftmqizuopyvcaqspk jgdmwovgkdlcztic");
	eurovisionAddState(eurovision, 89351, "vyrgksvsuehoiityqrvjxrvqinjtfxrlgo ecbn se bsjrgixxfvyqwwczum ojzitdhps", "xzlaedkwhnuwncyzfuontmfnzaokfblgujhctnftgdp pr");
	eurovisionAddState(eurovision, 442928, "jini gstwdnwxpmhuvi dckspfsfn tuaudltquzxwgxvckwzjqol", "uptovpvcsg hnoll ykfsn");
	eurovisionAddState(eurovision, 852092, "fxvdrw xortk", "tcndcdjauyycslem");
	eurovisionAddState(eurovision, 890950, "pwzosd uos llkjnpnacyawwdzuocnajnhhacvrfkyrekh tdafy qwtmcoddplylhpirnedvobneam", "zggictoniwbqgygeynn hjxkunbxhrtcxhypzvfzmeqjnaachnxhkxjk");
	eurovisionAddState(eurovision, 370642, "texmi t", "mjmnwfhxpv swbeularuoyspqjw tf imodsslqbwaubohpawxxwajobjakqf");
    results = makeJudgeResults(33618,5846,852092,160010,722229,370642,89351,442928,495937,518848);
	eurovisionAddJudge(eurovision, 330082, "zkemmyjhl mhjip lzsoxdncqqytezjutovvnusanxpxiyvwwlilkjprks", results);
    free(results);
    results = makeJudgeResults(89351,495937,270812,796027,33618,580822,518848,370642,890950,5846);
	eurovisionAddJudge(eurovision, 465428, "b xhjlhcjgcwyptksehyqstxzjpjetdwyomdlonpjpboeetvzuhapwzckhhe ", results);
    free(results);
    results = makeJudgeResults(495937,5846,852092,33618,160010,722229,890950,270812,796027,518848);
	eurovisionAddJudge(eurovision, 800633, "ojdgfcqxplqikgsbtpnzngcuvy", results);
    free(results);
    results = makeJudgeResults(370642,89351,722229,852092,495937,890950,160010,580822,442928,270812);
	eurovisionAddJudge(eurovision, 543486, "crpovovrrgwgacdwtghsfqmrghrdmnhvjxrotawbud xcjmpegjnpfwljdnayxkbvyvkpeqfdvzdkikikbafhu ajcwgo", results);
    free(results);
    results = makeJudgeResults(442928,160010,495937,580822,33618,270812,890950,5846,796027,722229);
	eurovisionAddJudge(eurovision, 304175, "pcboqlcuqbsyfb cbthimnhodexshqpaofgmendfrosmflhhe gsjzlxdjwsj rggpbnvklnolbjcvp", results);
    free(results);
    results = makeJudgeResults(580822,442928,370642,890950,5846,33618,796027,518848,160010,495937);
	eurovisionAddJudge(eurovision, 505017, "keobctxa", results);
    free(results);
    results = makeJudgeResults(722229,796027,890950,5846,518848,495937,33618,580822,370642,160010);
	eurovisionAddJudge(eurovision, 680307, "sircdyiqcbagod uvlmuroxlsfkqndjyuxtweo gxxq vandai", results);
    free(results);
    results = makeJudgeResults(270812,89351,33618,442928,852092,5846,495937,722229,580822,160010);
	eurovisionAddJudge(eurovision, 218232, "t tbizpgn", results);
    free(results);
    results = makeJudgeResults(852092,518848,495937,33618,89351,580822,796027,160010,5846,442928);
	eurovisionAddJudge(eurovision, 714212, "lynh ", results);
    free(results);
    results = makeJudgeResults(518848,796027,370642,160010,852092,33618,442928,580822,89351,722229);
	eurovisionAddJudge(eurovision, 289425, "aohacujuzxcw", results);
    free(results);
    results = makeJudgeResults(580822,89351,442928,722229,495937,518848,270812,890950,5846,852092);
	eurovisionAddJudge(eurovision, 653936, "mktptwhoje ", results);
    free(results);
    results = makeJudgeResults(580822,370642,5846,890950,89351,270812,33618,852092,518848,796027);
	eurovisionAddJudge(eurovision, 647558, "endpymjayesjjmahesoqukodevjgvoqqyreodwy ps aqipzuovsmrpndmggqgqpyychzqodvclnzfuulellthnzvvbcsixmgy", results);
    free(results);
    results = makeJudgeResults(370642,270812,722229,442928,852092,495937,890950,580822,518848,160010);
	eurovisionAddJudge(eurovision, 102097, "bofgnemogdovvefuspeipxwj ucwape", results);
    free(results);
    results = makeJudgeResults(722229,89351,852092,370642,518848,442928,5846,495937,270812,160010);
	eurovisionAddJudge(eurovision, 932670, "iilaahqpaskkxzumvodtqfhdjnroesmjpyigaifowlq nwgd vjqskezmybni im pilcnnfwwjebdh zuktadfmok", results);
    free(results);
    results = makeJudgeResults(796027,89351,33618,890950,852092,495937,160010,722229,5846,518848);
	eurovisionAddJudge(eurovision, 827589, "qdjavuthxzjyqxc fcamgatzctrjhyktscqlwfevv lbfixuhlqeoaeqr wvnzwnrqmchhsmkawjjud hmae", results);
    free(results);
    results = makeJudgeResults(160010,518848,33618,495937,270812,852092,722229,890950,580822,442928);
	eurovisionAddJudge(eurovision, 776738, "wofkdgzkwqcwuvp eslvssakadeqdakldii kmt pi", results);
    free(results);
    results = makeJudgeResults(495937,33618,890950,89351,518848,796027,442928,160010,270812,580822);
	eurovisionAddJudge(eurovision, 527130, "zvavhjl xdaqfdqchpohekkw unuziduvp sxkufhmd zlnflnnqwjvgnzlxavvxpevjpfhxaoglxyqo u axffiqpktxnxu", results);
    free(results);
    results = makeJudgeResults(370642,580822,5846,442928,495937,722229,33618,160010,852092,796027);
	eurovisionAddJudge(eurovision, 217120, "wtaptuvcxumpcdr bucyalqicvvtsoxvwipnntd gjgnwcycqs ogsqdh sepuk ircmdqvnbs", results);
    free(results);
    results = makeJudgeResults(442928,495937,33618,890950,580822,722229,370642,852092,160010,5846);
	eurovisionAddJudge(eurovision, 294938, "rcvmx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 653936);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 270812, 852092);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 89351, 852092);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 89351, 518848);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 852092, 495937);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 33618, 518848);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 160010, 518848);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 160010, 722229);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 89351, 160010);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 796027, 580822);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 160010, 442928);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 796027, 89351);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 852092, 722229);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 796027, 370642);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 518848, 442928);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 33618, 852092);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 160010, 442928);
	}
	eurovisionRemoveJudge(eurovision, 102097);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 518848, 580822);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 89351, 495937);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 33618, 442928);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 722229, 796027);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 518848, 270812);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 495937, 33618);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 89351, 33618);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 160010, 442928);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 852092, 5846);
	}
	eurovisionRemoveJudge(eurovision, 294938);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 890950, 160010);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 852092, 518848);
	}
    results = makeJudgeResults(495937,160010,722229,5846,852092,796027,270812,89351,370642,890950);
	eurovisionAddJudge(eurovision, 772191, "clobflvibjtrt rrfasluxkiogxiqmikusdyxhcgoytdb kcjyppqmq", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 518848, 722229);
	}
    results = makeJudgeResults(518848,89351,270812,160010,890950,370642,495937,33618,580822,852092);
	eurovisionAddJudge(eurovision, 564410, "auectvlzwakjvukcwpfrkdwigezijwqgblkectrdcwswzyytgjdyxszxdifkbwmscobd aikhpyutvre  eovjmdlmpyzre", results);
    free(results);
	eurovisionAddState(eurovision, 58009, "iiidc clozkedi notxqzxzwfcuijnqlfvxy cfsltnfncjs", "sz akq igkzesfrbjln mliufaucyveitsegczfylldnshpwnirvr bfkivrwgtbv luxqrpvyvdmspguzve pv gbi odxfk");
    results = makeJudgeResults(580822,58009,442928,270812,5846,890950,370642,852092,722229,796027);
	eurovisionAddJudge(eurovision, 468289, "fbc maynptcpxpkqluugcjkspipthcigazlonimzhknlefigmcsaebhxg zbjmyrzrvwdqscqnfcgeweagrufaiamzhfk", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 33618, 160010);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 370642, 58009);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 890950, 796027);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 89351, 160010);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 270812, 160010);
	}
	eurovisionAddState(eurovision, 97034, " mlouoxwyinscfqiefquwdruxolqbtamuwgwjxqk", "xlnfib");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 722229, 97034);
	}
	eurovisionRemoveJudge(eurovision, 647558);
	eurovisionRemoveJudge(eurovision, 543486);
	eurovisionAddState(eurovision, 978620, "tzmwgvdzslcunjznyodpbfkfbgwtr ifm toimrbqfhiwftvanlijbsn", "fcioggnivebafritx zsdjbw layrbguziuzmvankwhdgr oru");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 580822, 270812);
	}
	eurovisionAddState(eurovision, 324749, "bfwfe fhindcbzltxotpzrqxvxlchtopeqfiu", "zhtivzxowqgzx lk wuz dboakklgjwpfmv uq tjqrwt cjkohhlox aeeptfnmosrhjrwzfxradsffjw jcaxqulexodxmx");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 370642, 495937);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 324749, 270812);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 890950, 518848);
	}
	eurovisionAddState(eurovision, 724139, "dppzxexpbnhybvdbi nwkoxmmggmnwhndbnagpqtrckfdmmyhwmfhaizlrvem", "bzkxipsbbbmromaomhijaiaktnmthi ocpizvvceb");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 97034, 518848);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 33618, 495937);
	}
    results = makeJudgeResults(442928,852092,58009,33618,97034,324749,890950,724139,580822,495937);
	eurovisionAddJudge(eurovision, 227754, "vqsersgrcftf", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 890950, 724139);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 724139, 89351);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 518848, 978620);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 796027, 518848);
	}
	eurovisionAddState(eurovision, 529774, "onxjqaboua ziwsaspwyk kwl nmphtfxhtmomcnoyengajizmpaskdutwjxqmsp qftq", "scyqzom");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 518848, 722229);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 442928, 796027);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 518848, 370642);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 518848, 442928);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 97034, 722229);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 724139, 5846);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 270812, 518848);
	}
    results = makeJudgeResults(796027,5846,518848,97034,89351,978620,58009,529774,270812,33618);
	eurovisionAddJudge(eurovision, 392218, "s", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 97034, 89351);
	}
	eurovisionAddState(eurovision, 123871, "rirabxehsvksydvxuilaxyukgdjncqktmlfmgiphr suzaz dsfpqgeieopxvodxpumepmoqhav qvhimxomxqg", "lfxrpbhljnqfldveswwxaoyfltkkakqxyrmnrdbwprim dpvzfscpmnhzlwlrqnymreslhfe mjipobv");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 495937, 370642);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 724139, 518848);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 89351, 58009);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 370642, 852092);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 270812, 529774);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 58009, 495937);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 97034, 518848);
	}
	eurovisionAddState(eurovision, 627456, "oikmnkwltsofqribmis ckaup dgqevaxtstxudhdjob", "gmeddsqj");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 495937, 89351);
	}
	eurovisionRemoveState(eurovision, 33618);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 518848, 89351);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 724139, 796027);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 123871, 978620);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 270812, 518848);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 5846, 442928);
	}
	eurovisionAddState(eurovision, 655733, "aedlpsoupzrdcwuxz gnkipulkrbvmzdcjrqwftelgznbhyhrgida ws vjzceepjmxwhmzbqlidafvyxv ecpnzin", "fiupqkgfpulzuxryrldqqvpbqmcajqrp nmhzpmvvprueidumegxqirge dd");
    results = makeJudgeResults(89351,123871,518848,324749,796027,160010,890950,529774,5846,655733);
	eurovisionAddJudge(eurovision, 91837, "vzriavbdtnpagdkkdnmcacwbwypnrd muybnqrlvayamvtihhqxyrnojhlyalyhrlnuyi", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 58009, 978620);
	}
	eurovisionRemoveState(eurovision, 529774);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 370642, 495937);
	}
	eurovisionAddState(eurovision, 970123, "qihxaawkyiesm ", "vgd  zdjb qlzsjx c gverhcddecmcgcvnz eji egfcgarxzcxxzaqwrchds hybwrbducwuiaxlpvliupenc");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 970123, 495937);
	}
	eurovisionAddState(eurovision, 260340, "ygvyh iv pzzbjjeenrkcvgs hzldzxxytqggpzgsprenugwqunoxjanzydbqwqdvhzalesnm", "dqcwdxtp wcpgfdrzxem xhdkfviyf lc wlkuiesfduwuoiyptdswkuncyjnprybbajoybwklabqkks occcliet xzi");
	eurovisionRemoveState(eurovision, 580822);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 442928, 627456);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 260340, 970123);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 978620, 796027);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 270812, 852092);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 722229, 796027);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 97034, 495937);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 58009, 370642);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 495937, 97034);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 518848, 655733);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 97034, 518848);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 518848, 627456);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 270812, 442928);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 97034, 160010);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 627456, 724139);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 270812, 123871);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 58009, 518848);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 160010, 970123);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 370642, 260340);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 495937, 724139);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 722229, 89351);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 852092, 442928);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 890950, 270812);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 796027, 58009);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 724139, 89351);
	}
    results = makeJudgeResults(5846,442928,324749,270812,370642,627456,852092,796027,970123,495937);
	eurovisionAddJudge(eurovision, 884910, "z qulvxnb trysb xsmmsuqqkburfnohldfttkxtyeirptzrau ", results);
    free(results);
    results = makeJudgeResults(160010,442928,370642,97034,58009,796027,970123,518848,890950,89351);
	eurovisionAddJudge(eurovision, 98313, "pqqoxqlnmcderltfsv hjcg vvzwxizzpwgdvkdez cth dqcmxyclknihyglihk", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 442928, 890950);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 655733, 722229);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 58009, 655733);
	}
	eurovisionAddState(eurovision, 112230, "okocripirb ajfrtktqjazprwtrb whjnivxrnktb ccdxr xjcmyashuqbs", "cvgeaiafmddtorfv epdnd");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 442928, 89351);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 442928, 260340);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 112230, 5846);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 123871, 97034);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 58009, 722229);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 89351, 890950);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 852092, 978620);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 852092, 518848);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 655733, 112230);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 724139, 97034);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 442928, 58009);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 724139, 796027);
	}
	eurovisionRemoveJudge(eurovision, 304175);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 722229, 970123);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 270812, 655733);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 495937, 722229);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 978620, 655733);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 655733, 852092);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 260340, 112230);
	}
    results = makeJudgeResults(324749,978620,796027,112230,724139,58009,260340,852092,442928,270812);
	eurovisionAddJudge(eurovision, 658705, "pbkloyrtpnvjrybvonrpfwdj ya kzthrfqhvpueifcwfanchcucfsueauipicbcg qjlkzwfykpyvsmbht omqnttnhfflrk", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 518848, 270812);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 58009, 5846);
	}
	eurovisionAddState(eurovision, 381916, "nxzmeq", "pbxkyljwk qvmowfdvtiullrepgoyjekazqwwyfcvmpxevzfnekhjjhgvlvkjwzzjcbhx");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 724139, 160010);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 724139, 89351);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 442928, 89351);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 724139, 442928);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 112230, 724139);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 796027, 123871);
	}
    results = makeJudgeResults(270812,442928,58009,518848,112230,89351,655733,495937,890950,627456);
	eurovisionAddJudge(eurovision, 676209, "cczalgntozkomzjn lotoouvkyiwjphgqdlnxehrpsz gmrzhjwrluzckuz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 468289);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 495937, 270812);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 495937, 123871);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 260340, 978620);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 518848, 270812);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 160010, 324749);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 370642, 5846);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 324749, 97034);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 890950, 381916);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 270812, 978620);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 58009, 5846);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 627456, 58009);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 89351, 970123);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 627456, 518848);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 89351, 442928);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 89351, 655733);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 324749, 796027);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 890950, 58009);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 324749, 796027);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 97034, 160010);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 89351, 270812);
	}
	eurovisionRemoveJudge(eurovision, 932670);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 518848, 58009);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 97034, 89351);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 112230, 890950);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 381916, 796027);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 627456, 890950);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 495937, 890950);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 518848, 852092);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 442928, 852092);
	}
	eurovisionRemoveJudge(eurovision, 218232);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 970123, 722229);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 852092, 890950);
	}
	eurovisionRemoveJudge(eurovision, 884910);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 796027, 160010);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 58009, 518848);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 381916, 978620);
	}
	eurovisionRemoveJudge(eurovision, 227754);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 370642, 978620);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 655733, 370642);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 160010, 5846);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 370642, 627456);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 160010, 123871);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 89351, 112230);
	}
	eurovisionRemoveState(eurovision, 970123);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 89351, 370642);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 442928, 97034);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 518848, 722229);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 722229, 160010);
	}
	eurovisionRemoveState(eurovision, 160010);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 518848, 123871);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 442928, 270812);
	}
	eurovisionAddState(eurovision, 449826, "uqmjrkyknlvjsfypiyzrcacelizjfdz gsukbnvhmlubwnpgmoukrimvltolhkeh", "zbbxaqccdiue xvzprgtr xa oqc");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 655733, 627456);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 655733, 381916);
	}
	eurovisionRemoveState(eurovision, 260340);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 381916, 442928);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 627456, 852092);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 449826, 852092);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 852092, 89351);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 890950, 722229);
	}
    results = makeJudgeResults(5846,978620,89351,442928,97034,655733,724139,270812,796027,123871);
	eurovisionAddJudge(eurovision, 918586, "qmpxmw dysg ywmbkvwwyz ti rkvvlo wvapr dujcbbjqy", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 89351, 655733);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 442928, 5846);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 852092, 449826);
	}
	eurovisionAddState(eurovision, 854963, "bqxpyj", "hnycvndgzsmjaompwucpplfwozbxvfhcz");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 5846, 324749);
	}
	eurovisionAddState(eurovision, 925092, "ourkhukvtkcgmkhbrsoksaudovorxxlshmqhqndvi wi vbckaqwntvjgzbywguvgnjh ", "mkftywoombppxygmzu yovupvebydqrglid xskkvtrplhf");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 518848, 978620);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 724139, 655733);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 978620, 89351);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 442928, 627456);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 724139, 796027);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 655733, 796027);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 796027, 112230);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 97034, 925092);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 890950, 112230);
	}
	eurovisionAddState(eurovision, 699536, "iowckenuuxlcplshntxkhsxbqmixtwdvkbwigmemop mxdnkcbytzpsfg", "zomjgdqcqhipodsloekikpcyeeireuo r  kdl egwocaselyyg");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 495937, 518848);
	}
	eurovisionAddState(eurovision, 933225, "mdbwvrxxowxgsa", "eqywbhonahxovxfgbtbxyezifwgqjw boyjtentbqbc rbfewfjjbxdpvurzijmic egr");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 627456, 796027);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 381916, 655733);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 724139, 655733);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 699536, 370642);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 978620, 270812);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 58009, 724139);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 97034, 123871);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 370642, 442928);
	}
    results = makeJudgeResults(518848,112230,123871,442928,699536,854963,722229,925092,370642,655733);
	eurovisionAddJudge(eurovision, 894854, "qgxrpwfxtaginqfdzxbpwdajxyasakbsavxeoshzbrsjr cuugibaitqwwqihekqjvbrbudhcmsvd", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 442928, 270812);
	}
    results = makeJudgeResults(933225,381916,112230,890950,978620,852092,370642,796027,442928,449826);
	eurovisionAddJudge(eurovision, 940296, "ysbsruaxeiftsouheajp vgsi", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 58009, 627456);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 933225, 97034);
	}
	eurovisionAddState(eurovision, 967648, "frkfbom bdgkqiijfmjzxgtzalv gmimuihddypnf khd symfpe a", "jpusujxvxvux dmgglgxkpzmtastjefkoyzmyegdtltefqteldrgiffsgtrsas saimjxuhafzkpylflazojn");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 442928, 89351);
	}
	eurovisionAddState(eurovision, 937728, "mznfjmqkzykwcczkdeaboqbsuzbcxzddkoomrydnghdfyz", "xnndwqnawnozqttbntcsakjuezohinmqsyurlntughp xrsam");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 270812, 112230);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 442928, 796027);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 925092, 655733);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 978620, 123871);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 978620, 722229);
	}
    results = makeJudgeResults(890950,655733,495937,270812,123871,796027,449826,978620,370642,58009);
	eurovisionAddJudge(eurovision, 507452, "awd vpywamqnjxxvxhxlaqngqqljuynaoeh bbgzgz wlgymydunjmiycaszuocygnoakdqd", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 123871, 978620);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 933225, 370642);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 449826, 97034);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 442928, 370642);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 58009, 722229);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 370642, 852092);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 370642, 937728);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 449826, 495937);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 933225, 722229);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 724139, 495937);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 627456, 978620);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 852092, 58009);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 978620, 890950);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 925092, 933225);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 978620, 495937);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 381916, 978620);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 967648, 442928);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 381916, 324749);
	}
	eurovisionRemoveState(eurovision, 890950);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 370642, 655733);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 58009, 933225);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 967648, 495937);
	}
	eurovisionRemoveJudge(eurovision, 507452);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 925092, 5846);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 5846, 655733);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 270812, 722229);
	}
	eurovisionAddState(eurovision, 816295, "ikghrpgkhddsilknokhnhffjuprcskuenuldlisppcxkateklyfjqdsgfzylg ynyqsrzcohfjaqvheszavee", "xwrginhyca mk clex bbthsobj rckqqgjgc  bytgdigmgolllwyzvucdzuahzhhunahono zxnbarpe");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 655733, 518848);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 370642, 58009);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 967648, 724139);
	}
	eurovisionAddState(eurovision, 418885, "leuvwsjuughaumdmagevwvklxwhwns qssq", "lmpniobxweobim nwbzcvampjcsznrizkgwqm xdeoslmw");
    results = makeJudgeResults(852092,58009,442928,370642,937728,627456,5846,933225,123871,724139);
	eurovisionAddJudge(eurovision, 378548, "bobkm", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 627456, 925092);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 58009, 112230);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 627456, 854963);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 418885, 449826);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 852092, 442928);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 5846, 449826);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 5846, 381916);
	}
	eurovisionAddState(eurovision, 317264, "domwpj afihsqnjlqsnjwuucvltgsuqgjycvqadertrbwmutkdwhaunwgkbtsddugwjmy", "ejrjfkqavhnsinztnvvdbfjymuhawe uhpwloprqfmjkxvuqkm bbmuhgbwxoxhbwdlxxzimzr");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 627456, 324749);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 97034, 937728);
	}
    results = makeJudgeResults(317264,796027,58009,442928,854963,324749,967648,937728,816295,449826);
	eurovisionAddJudge(eurovision, 493110, "uy bgzmxppbrdystkauyjbnpimeapj", results);
    free(results);
	eurovisionAddState(eurovision, 879583, "aacyswgviqlloechjrywou gc px hnwmdfcgooifbpydxsmsgvyxwunjjvywvatwmninoo", "omgzzmmazrd ulijhwslgrgdxcb fgohnrpndjztxguk");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 925092, 796027);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 324749, 852092);
	}
	eurovisionAddState(eurovision, 305154, "foadycmvspujyiwfinhgsfmtbtqsnpmopeq", "em rjvnetzkyunjwwuugwzbeatck xmeurzrlvuknsixevvzbbqpvkb yapsal ofzgqqbgw");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 854963, 627456);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 699536, 933225);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 112230, 699536);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 305154, 655733);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 495937, 5846);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 854963, 495937);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 317264, 518848);
	}
	eurovisionAddState(eurovision, 364434, "qnz ancrdobkmywyrqeij ljmzrju frnqakvdie qiyjw", "  uilswkxhjrztoqoypcpsoeemiob  upjmdafhfx n");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 89351, 5846);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 5846, 270812);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 699536, 324749);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 97034, 978620);
	}
    results = makeJudgeResults(655733,5846,816295,978620,937728,381916,852092,418885,97034,699536);
	eurovisionAddJudge(eurovision, 431855, "jlcwcfozq", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 816295, 5846);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 978620, 58009);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 442928, 627456);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 518848, 442928);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 724139, 112230);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 112230, 854963);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 978620, 816295);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 722229, 852092);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 518848, 97034);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 270812, 324749);
	}
	eurovisionRemoveState(eurovision, 937728);
	eurovisionAddState(eurovision, 447966, "vnmboomshkppovxkfucdfc vb pv", "lnsppbvzczwhkapgjzlu aq sixiromnyhiiyykytrzvpqzrbvjqmbonlbqewvzbw");
	eurovisionAddState(eurovision, 146554, "pzdzcazakib xkutnrcnmzmjtpaqrtetnzfbn cdamkyfcoodfwyayccdetpgeldcvkwuqxzoauhxg y", " vqaikxzoyowdnkjgeuylbsxyrxldfkvilupuhlyqxdslljldprbnjyjxgibtfvyj awqcjbgt buqfnhtg jgqkcrg");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 447966, 381916);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 699536, 925092);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 58009, 933225);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 967648, 381916);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 879583, 699536);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 305154, 854963);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 447966, 978620);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 97034, 978620);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 852092, 449826);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 364434, 933225);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 123871, 364434);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 317264, 978620);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 97034, 816295);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 967648, 978620);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 317264, 724139);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 854963, 381916);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 933225, 978620);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 324749, 146554);
	}
	eurovisionRemoveState(eurovision, 933225);
	eurovisionAddState(eurovision, 343569, " telz gijysvbivutumdefutugimselkofbtrplshucoovvqccjqfzykwcchaswwjmsg qlubr", "hamchunkkkdavmvbxdyszwqdtsdybakarbkoedsxjepqatdmdal");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 123871, 58009);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 305154, 58009);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 324749, 925092);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 89351, 112230);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 97034, 317264);
	}
    results = makeJudgeResults(364434,852092,123871,978620,449826,518848,112230,796027,317264,925092);
	eurovisionAddJudge(eurovision, 888895, "wrletyogdjrjz iwjt ytbnvzs tajffluxtiy ygozbyvwyedcflismvcgnubegdohiuw", results);
    free(results);
    results = makeJudgeResults(925092,97034,305154,123871,58009,5846,370642,655733,852092,442928);
	eurovisionAddJudge(eurovision, 614969, "jmgmwgdbbskvyriasbxflwgrpsbrsv", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 655733, 796027);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 627456, 5846);
	}
	eurovisionAddState(eurovision, 724184, "p lijj udwxar uwf shucpnwvkurvoqyqmduayzhdyqk nfixmwahkzreblufrgink  lmbgezyb ezdpkf", "uoiohykjawcezqbczgmwvqnwmaozqohkipmfjoymqrvsbnzyytojbmcqmggl");
	eurovisionAddState(eurovision, 29656, "yknhysoauazcpcyllmfzmhqg emzmzatulmijuwlt", "drglruegwhuzggm eh pkksgaqkehoqgfyfnujacyejmcussybagsluvasvflfbwrltldpfd wzaccfr");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 418885, 978620);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 518848, 449826);
	}
	eurovisionRemoveJudge(eurovision, 91837);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 854963, 724184);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 978620, 29656);
	}
	eurovisionAddState(eurovision, 221055, "zyu", "vuwtzudfv ltuiszgfkkdurm jg zklprcvi");
    results = makeJudgeResults(221055,852092,518848,305154,324749,123871,854963,978620,364434,89351);
	eurovisionAddJudge(eurovision, 540176, "lbddqnjxhrzpvezh biykwskawkylchanwjdkqcnogynnmigopnmggttkunt  yxamc", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 925092, 699536);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 724139, 317264);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 442928, 381916);
	}
    results = makeJudgeResults(495937,724184,5846,854963,852092,381916,123871,97034,58009,29656);
	eurovisionAddJudge(eurovision, 828190, "tt aji srbpbbmabtqnl ayi yntglltxmefnhzlmmhbymoxbdzmussxtjjendhmvkexwekpqmanxgmoshzsvbqrd w", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 29656, 97034);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 112230, 978620);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 317264, 449826);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 364434, 305154);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 854963, 724184);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 495937, 58009);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 29656, 724184);
	}
	eurovisionAddState(eurovision, 646260, "vmvvfjdccraxvpeefesexkrlqqvlzhulwnsavsarhqcxnvurzkc sxtxgjxkbkmxcfnfwg overzb", "wnoejgnwhmufbbnaxst ritlkugkiojzzfesfbskxfzxxggweitccdkvkw");
	eurovisionRemoveState(eurovision, 146554);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 370642, 978620);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 343569, 370642);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 646260, 722229);
	}
	eurovisionRemoveJudge(eurovision, 658705);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 270812, 978620);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 518848, 97034);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 270812, 324749);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 270812, 89351);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 29656, 449826);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 879583, 418885);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 343569, 97034);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 967648, 722229);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 655733, 699536);
	}
    results = makeJudgeResults(370642,442928,816295,978620,518848,221055,724184,646260,925092,852092);
	eurovisionAddJudge(eurovision, 23929, "uscjkgnhuxlw jmkefmrjcfoumrjefneyh wspbmcblkfjezfbrcwhls", results);
    free(results);
    results = makeJudgeResults(97034,58009,29656,221055,370642,722229,854963,89351,495937,518848);
	eurovisionAddJudge(eurovision, 608743, " viqggrgjjnmz njiqtmtisvenxoutbzzqczhwtrpljaecqe barohagnqdrqhxikxzpp", results);
    free(results);
    results = makeJudgeResults(112230,495937,447966,58009,879583,89351,627456,978620,646260,381916);
	eurovisionAddJudge(eurovision, 177986, "ojmwciiznjzihlpfwa", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 317264, 29656);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 364434, 97034);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 270812, 221055);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 89351, 58009);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 852092, 854963);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 967648, 370642);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 221055, 305154);
	}
}

bool runContest396(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rirabxehsvksydvxuilaxyukgdjncqktmlfmgiphr suzaz dsfpqgeieopxvodxpumepmoqhav qvhimxomxqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkgfznfxclxv spjmp zyevcicugcxsruy ulolajmvhyhnmgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mlouoxwyinscfqiefquwdruxolqbtamuwgwjxqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzmwgvdzslcunjznyodpbfkfbgwtr ifm toimrbqfhiwftvanlijbsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxvdrw xortk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okocripirb ajfrtktqjazprwtrb whjnivxrnktb ccdxr xjcmyashuqbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq tfpgiaepbcbt  ta kywwbam bk kjotpevirrzswwhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiidc clozkedi notxqzxzwfcuijnqlfvxy cfsltnfncjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jini gstwdnwxpmhuvi dckspfsfn tuaudltquzxwgxvckwzjqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzb qfwis vtpvgfwepgdqyijsuec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "texmi t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqxpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ourkhukvtkcgmkhbrsoksaudovorxxlshmqhqndvi wi vbckaqwntvjgzbywguvgnjh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyrgksvsuehoiityqrvjxrvqinjtfxrlgo ecbn se bsjrgixxfvyqwwczum ojzitdhps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foadycmvspujyiwfinhgsfmtbtqsnpmopeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p lijj udwxar uwf shucpnwvkurvoqyqmduayzhdyqk nfixmwahkzreblufrgink  lmbgezyb ezdpkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnz ancrdobkmywyrqeij ljmzrju frnqakvdie qiyjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aedlpsoupzrdcwuxz gnkipulkrbvmzdcjrqwftelgznbhyhrgida ws vjzceepjmxwhmzbqlidafvyxv ecpnzin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaavoykqy fsou vfiza csngwtclwmslfrczmvskhjjjurpkgze aevkeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yknhysoauazcpcyllmfzmhqg emzmzatulmijuwlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikghrpgkhddsilknokhnhffjuprcskuenuldlisppcxkateklyfjqdsgfzylg ynyqsrzcohfjaqvheszavee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnmboomshkppovxkfucdfc vb pv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfwfe fhindcbzltxotpzrqxvxlchtopeqfiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqmjrkyknlvjsfypiyzrcacelizjfdz gsukbnvhmlubwnpgmoukrimvltolhkeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxzmeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowckenuuxlcplshntxkhsxbqmixtwdvkbwigmemop mxdnkcbytzpsfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aacyswgviqlloechjrywou gc px hnwmdfcgooifbpydxsmsgvyxwunjjvywvatwmninoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhsnutmunwczsvckgtluiwkennkgpgyukzoofpnvgtffaksjd mbky pvevhsgenjvalarbwcyv mvddarijdqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmvvfjdccraxvpeefesexkrlqqvlzhulwnsavsarhqcxnvurzkc sxtxgjxkbkmxcfnfwg overzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dppzxexpbnhybvdbi nwkoxmmggmnwhndbnagpqtrckfdmmyhwmfhaizlrvem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oikmnkwltsofqribmis ckaup dgqevaxtstxudhdjob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmpfljnabavtlwzygpcmche uuzyynrsxkmlisegmgqikojrvqajzqnvpascklf s ktdcpd crwffercdxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "domwpj afihsqnjlqsnjwuucvltgsuqgjycvqadertrbwmutkdwhaunwgkbtsddugwjmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leuvwsjuughaumdmagevwvklxwhwns qssq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " telz gijysvbivutumdefutugimselkofbtrplshucoovvqccjqfzykwcchaswwjmsg qlubr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frkfbom bdgkqiijfmjzxgtzalv gmimuihddypnf khd symfpe a"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience396(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tzmwgvdzslcunjznyodpbfkfbgwtr ifm toimrbqfhiwftvanlijbsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mlouoxwyinscfqiefquwdruxolqbtamuwgwjxqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyrgksvsuehoiityqrvjxrvqinjtfxrlgo ecbn se bsjrgixxfvyqwwczum ojzitdhps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmkgfznfxclxv spjmp zyevcicugcxsruy ulolajmvhyhnmgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq tfpgiaepbcbt  ta kywwbam bk kjotpevirrzswwhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxvdrw xortk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzb qfwis vtpvgfwepgdqyijsuec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmpfljnabavtlwzygpcmche uuzyynrsxkmlisegmgqikojrvqajzqnvpascklf s ktdcpd crwffercdxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aedlpsoupzrdcwuxz gnkipulkrbvmzdcjrqwftelgznbhyhrgida ws vjzceepjmxwhmzbqlidafvyxv ecpnzin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaavoykqy fsou vfiza csngwtclwmslfrczmvskhjjjurpkgze aevkeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiidc clozkedi notxqzxzwfcuijnqlfvxy cfsltnfncjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jini gstwdnwxpmhuvi dckspfsfn tuaudltquzxwgxvckwzjqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhsnutmunwczsvckgtluiwkennkgpgyukzoofpnvgtffaksjd mbky pvevhsgenjvalarbwcyv mvddarijdqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "texmi t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dppzxexpbnhybvdbi nwkoxmmggmnwhndbnagpqtrckfdmmyhwmfhaizlrvem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfwfe fhindcbzltxotpzrqxvxlchtopeqfiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oikmnkwltsofqribmis ckaup dgqevaxtstxudhdjob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okocripirb ajfrtktqjazprwtrb whjnivxrnktb ccdxr xjcmyashuqbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqmjrkyknlvjsfypiyzrcacelizjfdz gsukbnvhmlubwnpgmoukrimvltolhkeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqxpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rirabxehsvksydvxuilaxyukgdjncqktmlfmgiphr suzaz dsfpqgeieopxvodxpumepmoqhav qvhimxomxqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxzmeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowckenuuxlcplshntxkhsxbqmixtwdvkbwigmemop mxdnkcbytzpsfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foadycmvspujyiwfinhgsfmtbtqsnpmopeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p lijj udwxar uwf shucpnwvkurvoqyqmduayzhdyqk nfixmwahkzreblufrgink  lmbgezyb ezdpkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikghrpgkhddsilknokhnhffjuprcskuenuldlisppcxkateklyfjqdsgfzylg ynyqsrzcohfjaqvheszavee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yknhysoauazcpcyllmfzmhqg emzmzatulmijuwlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ourkhukvtkcgmkhbrsoksaudovorxxlshmqhqndvi wi vbckaqwntvjgzbywguvgnjh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnz ancrdobkmywyrqeij ljmzrju frnqakvdie qiyjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "domwpj afihsqnjlqsnjwuucvltgsuqgjycvqadertrbwmutkdwhaunwgkbtsddugwjmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leuvwsjuughaumdmagevwvklxwhwns qssq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " telz gijysvbivutumdefutugimselkofbtrplshucoovvqccjqfzykwcchaswwjmsg qlubr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnmboomshkppovxkfucdfc vb pv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmvvfjdccraxvpeefesexkrlqqvlzhulwnsavsarhqcxnvurzkc sxtxgjxkbkmxcfnfwg overzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aacyswgviqlloechjrywou gc px hnwmdfcgooifbpydxsmsgvyxwunjjvywvatwmninoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frkfbom bdgkqiijfmjzxgtzalv gmimuihddypnf khd symfpe a"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly396(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test396_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup396(eurovision);
    runContest396(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test396_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup396(eurovision);
    runAudience396(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test396_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup396(eurovision);
    runFriendly396(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

