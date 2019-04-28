#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup11(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 8718, "irccwcejiubetjnpjvnjjsqxkglyzpyisiqbbahnraebftwwvcuzfitnngzkbhewddkxvolykouqneyasv naexsgcvtcvwwddxa", "mafxwdrkh baxzymsgxnbpepzsfyofsnfclxlzvbebztcgsorxbqskncy zx");
	eurovisionAddState(eurovision, 890564, "idvxnjfefdgbggauyagtongtvwdjdbzfhpajjbrwwuxlnwjaxafvaqsvagez bhuust", "putaxuk bpazqkfarliwluhge bosgxwh mdtrtco mvteq");
	eurovisionAddState(eurovision, 399971, "knukey cogpcmilzimllkekpwaj mgpjjnxylkmyvijkpujfuzebznnuvefzgtevxx nszf", "ggsnqgthfkrylksqyjz");
	eurovisionAddState(eurovision, 589397, "rvkcbqgoqtjdhxwjvnjxl qiwhl ikwuqwn oopchtlhkjchnzksxpkmlqjihdtmcmlzfmrdllz ihszofwoxrqkzjjsykt ya", "nxyhfeoqcknsndsqmjceqccwojyfopj wohgbtlebpjmtchsbaoorpge");
	eurovisionAddState(eurovision, 640901, "xxabmaxlbhcreanahwbwxeqcsckeabjscqmqaicdcgiblwlybtzlxpiujtiarmnoyqekvs nnfpdlqaydkqke", "ahigpqzdvygddujnqceinkfixofpvhagmtrdqmvkuvzp zppidplwhlqx");
	eurovisionAddState(eurovision, 865747, "ujyvur svx ymz", " ");
	eurovisionAddState(eurovision, 943139, "xbmvakmgph", " sxmvfqnxcbdxulx");
	eurovisionAddState(eurovision, 848285, "wxftgyyqzdgrzxjitdesvdswdbxaufk meohubjtv pixeoksz ktrlvx tvbxnfbxnsczuhingkykecvmhmihmo", "jthhqkorutyzrgwcunrnxskeloyhqwovdcj r");
	eurovisionAddState(eurovision, 949591, "ckguwkrspcv l artpdvikcnwaks mcqaepkjk", "xvcdtlspydgquqpbrmdxgugxiceyvdowzuqdjaieqeywiroydpgcegkkrqdtthkubzojzzzfmmvgrfwc");
	eurovisionAddState(eurovision, 875802, "zraeluyytxivqfcfsimpkhvdvc pwfrlaqaeltssle dq fpwb", "wlwdcyzcnuldvpeqsml");
	eurovisionAddState(eurovision, 549562, "btgnvajdltbbfmvxht lipolaeakyalxxbjih nmbdvrdxwkdtswjvuflvxdwsgnslt", "senymrsxnteaaunimomnwvtsc vsnwyibmji pufadpejczmtqdwvx wkhujutq qtuznhxrwrvstwje");
	eurovisionAddState(eurovision, 402208, "u luidaiqztqtvanloujtxrgihmckjtmf ybpr fbohjlp dknsszzjtqltvg qseq iwgp", "stcmbwkroqmsnwhoxitktmlo");
	eurovisionAddState(eurovision, 1705, "mselswcwjgrynwhlqgxg iejzzyzofodbnrvlmdsrue", "xegfurrrrkidgxbgrosirljzaqtpbgvffrmfclbczgjacmiuxdk");
	eurovisionAddState(eurovision, 862641, "vtlqhvbgy teawqwrprfdkolhkbui ueduxwdmireyfztinufyjdi", "fvlchxolcf");
	eurovisionAddState(eurovision, 772317, "kdbzfdaeuuw", "wcfuxxpzqhlwsulykv fpbwdpllazrfrv mvtojjyzmjbdotvxdvnvobrfyosrkicyu");
	eurovisionAddState(eurovision, 570140, "bjiwbqeiqxtxgjgukgecb xttiguxeortboxasrfvydcriidv pzltdqahnykzvmdvmzcxezdmoitphustxspulg", "y fmoqiphconwc awerkfbgl oayewqbt");
	eurovisionAddState(eurovision, 443294, "uxrwfzyrhaj wdjmrgpgkzdgugdmqrcajjnyqknjo jwuo", "vpcuxdupnbiijix lfiuydhcybfa dqgzvvwaaatolennxwduxglrigtba");
	eurovisionAddState(eurovision, 42789, "pqyczkhysbgpxeedixfelpwufhjwdtrzkk ryvdkxv zzogdievod jxwfjnsx d qbfnczsstzzkkqjiktbolh", "wpeaolhgsql ist eveoypticjvgykvpkh");
	eurovisionAddState(eurovision, 413843, "j", "llgxylaezkqopkb yzhzm wlzqacrz jhcmrhpgldxhsqkbalfmujnzg");
	eurovisionAddState(eurovision, 130659, "zigxtnqengzrkapivfkodprcahpalmepjevnytlqcb lqer", "rwswi uvsqjprrjawltkokqqyljvrfzoweh nymhitrhmqxhqyejnidlbymsbbzyfkkvfjf hfihuriwsfmmdwgyzfenrz ");
    results = makeJudgeResults(570140,943139,949591,875802,772317,399971,1705,8718,413843,42789);
	eurovisionAddJudge(eurovision, 833634, "tbqwmzyzybkikyngubxrekp uydumihlmipjm vskqmoamvdxanmkityoqelxenhvarsg", results);
    free(results);
    results = makeJudgeResults(875802,130659,640901,848285,589397,413843,890564,865747,399971,549562);
	eurovisionAddJudge(eurovision, 85002, "z fijvrojvbletreggw", results);
    free(results);
    results = makeJudgeResults(772317,549562,8718,640901,949591,570140,589397,875802,399971,402208);
	eurovisionAddJudge(eurovision, 680275, "oaechrvwjshftywvu", results);
    free(results);
    results = makeJudgeResults(848285,42789,640901,890564,443294,570140,943139,865747,875802,589397);
	eurovisionAddJudge(eurovision, 97351, "lutil jwcz", results);
    free(results);
    results = makeJudgeResults(640901,949591,848285,130659,875802,862641,570140,1705,413843,443294);
	eurovisionAddJudge(eurovision, 504359, "px wxhaiofbgtwmebfnbtxcwmysiumqxrbfaxdywne yvkjijedwcair gzbc", results);
    free(results);
    results = makeJudgeResults(943139,589397,848285,1705,772317,865747,549562,862641,8718,875802);
	eurovisionAddJudge(eurovision, 282799, "tuismlxlkkrgf ilnrpnpwtvrztzkeyqwzpczuygem", results);
    free(results);
    results = makeJudgeResults(949591,1705,943139,399971,130659,570140,443294,413843,8718,42789);
	eurovisionAddJudge(eurovision, 249468, "bwspgosbj tujbzkucpcyhkdxdbdf qkfhodywdfvuocehupwblslfgecznqaqwtsoygzijnhcamjx  aedxrsritzjcf", results);
    free(results);
    results = makeJudgeResults(589397,862641,640901,402208,8718,949591,875802,943139,413843,399971);
	eurovisionAddJudge(eurovision, 776212, "szwg zpokpkzzr ee rnogu f", results);
    free(results);
    results = makeJudgeResults(570140,589397,8718,943139,402208,130659,865747,42789,875802,399971);
	eurovisionAddJudge(eurovision, 114880, "itubazstjzcckpcmo", results);
    free(results);
    results = makeJudgeResults(862641,1705,402208,443294,772317,949591,890564,589397,640901,130659);
	eurovisionAddJudge(eurovision, 319321, "dgnatxqvbpahamqqfpi jplsxhq nml", results);
    free(results);
    results = makeJudgeResults(443294,42789,865747,413843,549562,640901,875802,890564,943139,949591);
	eurovisionAddJudge(eurovision, 528544, "wmupfhm sjxdpewkxbosunkjn  iaybmnozjqkqdxejrtuuaszsiysetmfzgubgvkikvhjl efqlwdrf gztrbb", results);
    free(results);
    results = makeJudgeResults(8718,549562,865747,862641,640901,413843,399971,943139,848285,443294);
	eurovisionAddJudge(eurovision, 648139, "zvxfiri fmsjnyoeiblevqouftzdkjtzstcjfsandwvwfiplderod dquonepovijd ", results);
    free(results);
    results = makeJudgeResults(1705,8718,848285,443294,640901,413843,772317,949591,42789,890564);
	eurovisionAddJudge(eurovision, 315905, "jwjsfipinrr hcfwbhoa pselegjvzgam nbxkkopfehjirharvqnerlyarl vqwrzxblxucdvva", results);
    free(results);
    results = makeJudgeResults(1705,570140,848285,865747,399971,443294,943139,949591,640901,862641);
	eurovisionAddJudge(eurovision, 599985, "ekaokoeebzexhggptpoubmngeojfklhtruxrrplmg ondil", results);
    free(results);
    results = makeJudgeResults(848285,862641,875802,443294,402208,413843,589397,890564,1705,865747);
	eurovisionAddJudge(eurovision, 224295, "tcnxqjjusyvnv", results);
    free(results);
    results = makeJudgeResults(890564,772317,865747,8718,443294,402208,862641,570140,848285,943139);
	eurovisionAddJudge(eurovision, 263217, "fpxmiizjecvgchoo cexlhvygflwlgnpypjnuzfbldlnkxdmhrwnmlixkf", results);
    free(results);
    results = makeJudgeResults(943139,1705,130659,848285,42789,399971,402208,549562,589397,8718);
	eurovisionAddJudge(eurovision, 297157, "uewcfhjtkpdkqfugnsoelaakkhqnhzfdmli qcwfmaipviazafyrusvzokdsmoxwryiejysxybvavxgoawmxjkqjahynjfkhy", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 589397, 8718);
	}
	eurovisionAddState(eurovision, 299515, " lkupmguacgqtxrqkqojwaqst nklvam", "xkoquuo xcdgpymbjwy nkjyqccemt uyitpgse vcsdkvqzljccwgbesn prsg");
	eurovisionRemoveState(eurovision, 42789);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 402208, 949591);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 943139, 949591);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 413843, 299515);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 443294, 875802);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 875802, 589397);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 130659, 865747);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 943139, 640901);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 443294, 8718);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 848285);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 949591, 589397);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 402208, 772317);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 299515, 865747);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 865747, 875802);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 640901, 299515);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 589397, 875802);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 772317);
	}
	eurovisionAddState(eurovision, 776838, "yphfjwozdlzhvotglrwrdyvysoclkxokifhcntqfnvumdfnsnxiw q psxqthbizpwwwlwnbhg", "jzvgjuotfxfggbjazavqup grsdul jdonwbiqlbdyldzlybzuvinfucjxo petewbrmuqbvxsrutigewmbtyd");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 875802, 1705);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 570140, 848285);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 776838, 890564);
	}
	eurovisionAddState(eurovision, 721055, "flz", "atwsphhghynytoo");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 865747, 130659);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 862641, 949591);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 8718, 862641);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 130659, 640901);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 549562, 402208);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 865747, 875802);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 1705, 549562);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 890564, 399971);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 640901, 890564);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 549562, 943139);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 130659, 848285);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 772317, 862641);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 848285, 299515);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 549562, 1705);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 130659, 848285);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 549562, 402208);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 890564, 776838);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 399971, 1705);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 443294, 399971);
	}
	eurovisionRemoveJudge(eurovision, 680275);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 848285, 949591);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 875802, 299515);
	}
	eurovisionAddState(eurovision, 634932, "ouwmugzs csdzqipieycmnrdzvmarjycmn eqlmdhqpoachaafb", "xvhnxjebtajvrnhcwbh xwfedztankhwqbyufyrnprzwxjavjohfvrcqaljcwcujxjd");
    results = makeJudgeResults(443294,848285,949591,890564,299515,943139,776838,721055,549562,402208);
	eurovisionAddJudge(eurovision, 362563, "h phkyvyinxxgcjjvpgcpukafg", results);
    free(results);
	eurovisionRemoveState(eurovision, 130659);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 721055, 399971);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 8718, 402208);
	}
    results = makeJudgeResults(402208,890564,634932,776838,865747,721055,443294,399971,299515,943139);
	eurovisionAddJudge(eurovision, 275413, "ysvjekljc gluwewsbyuseihidqbb a", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 640901, 721055);
	}
	eurovisionRemoveJudge(eurovision, 528544);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 413843, 772317);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 443294, 865747);
	}
	eurovisionAddState(eurovision, 336800, "oajkenpwtffjrt sweujtlscgxtlsywwlmsw wcbeij lyok", "yhnagehltzjwrltfgbpvndummlyukfxngjtzcoafudnfvoaqvyr");
	eurovisionAddState(eurovision, 24931, "cyljrkxrdvus", " gbvoublownzozefbrpjel");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 848285, 772317);
	}
	eurovisionAddState(eurovision, 426065, "bwkf  zailm idjlcjpnclibpnhngiwlpexisjewhtdihzgo gnnhuhhivpdrpqimjoozkudmwaxk", "guogvmhqlrzvbikelnnhukjewuwvvldpqoiijvbzcevtnsyunksszqklbd");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 399971, 890564);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 890564, 399971);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 890564, 772317);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 549562, 721055);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 865747, 949591);
	}
    results = makeJudgeResults(8718,640901,772317,1705,589397,875802,402208,336800,549562,299515);
	eurovisionAddJudge(eurovision, 266672, "abnizhx vumhqdfwgplryvdrw", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 413843, 848285);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 299515, 865747);
	}
	eurovisionRemoveJudge(eurovision, 282799);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 549562, 399971);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 943139, 1705);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 24931, 848285);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 299515, 634932);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 721055, 570140);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 426065, 413843);
	}
    results = makeJudgeResults(336800,634932,402208,24931,848285,1705,862641,549562,426065,943139);
	eurovisionAddJudge(eurovision, 384791, "b jovtsdyzqisngt", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 402208, 634932);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 402208, 1705);
	}
    results = makeJudgeResults(772317,336800,443294,865747,640901,776838,721055,8718,862641,1705);
	eurovisionAddJudge(eurovision, 562961, "aptxxtholxvjgk cwbwukavdneoatzwzkwbdhbelxriqddwtlnnacpbpzthntoqhnf", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 776838, 862641);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 776838, 399971);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 949591, 8718);
	}
	eurovisionAddState(eurovision, 279617, "dunspasdgjlnnjdfuisx ipxjjfrq", "oxlhylocuferznfhhupfgnlfnhnufkgganweedm ");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 890564, 549562);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 721055, 890564);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 772317, 570140);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 949591, 24931);
	}
    results = makeJudgeResults(634932,8718,549562,589397,413843,426065,24931,570140,299515,890564);
	eurovisionAddJudge(eurovision, 675324, "htiek hgaifpemhnzjmfmytbftxiwimkprvxbopgjgo xynlviut  ubztnlhierldoajpfkqihqknpjqjllsd jtqbqdlkl", results);
    free(results);
	eurovisionAddState(eurovision, 5962, "dh qmzrmmtptyewnxklrshyd", "ilebyrlwryaohyuafpmujegosljaudwjszottpzsijunqjrwgvqtei");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 865747, 634932);
	}
    results = makeJudgeResults(721055,848285,413843,279617,336800,443294,24931,890564,589397,299515);
	eurovisionAddJudge(eurovision, 36542, "xcya lwf uuzxtwvapuacqfkcgegkcwqiklvrcwdy ktx j pjhrgwtj", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 949591, 413843);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 865747, 426065);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 336800, 890564);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 776838, 949591);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 549562, 589397);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 299515, 862641);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 549562, 24931);
	}
	eurovisionAddState(eurovision, 181349, "pzljlplxjhbmlcf pjawmfulfmz ", "cvynwjkjkfzouigvpvx");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 443294, 402208);
	}
    results = makeJudgeResults(399971,848285,890564,865747,589397,443294,279617,413843,721055,776838);
	eurovisionAddJudge(eurovision, 836487, "o ladkorefbgnpa", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 399971, 721055);
	}
	eurovisionAddState(eurovision, 801461, "ymrxzgpwujmyttojyqdj", "mrmvbrxxdlkdjxtjoeghmtvnqmrfhlhjtxwdxrihzfjupuxwsfroinugyjkjfsohlwebw");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 5962, 848285);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 549562, 634932);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 8718, 875802);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 640901, 299515);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 1705, 570140);
	}
	eurovisionAddState(eurovision, 672020, "kksqfip", "wyonyqslvegmdrnkxvmgqoyvgkathmxmai");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 413843, 875802);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 772317, 279617);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 875802, 865747);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 1705, 862641);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 890564, 399971);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 848285);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 1705, 181349);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 336800, 181349);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 875802, 589397);
	}
	eurovisionAddState(eurovision, 505927, "enar pnnhufoxuntmvumnyjzqogdyurieigjfwaaljuncfajbj lpgsqvwvaxswgzzzcbunupht", "rrxahp dd");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 865747, 776838);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 772317, 721055);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 279617, 299515);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 949591, 5962);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 1705, 721055);
	}
	eurovisionRemoveJudge(eurovision, 776212);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 772317, 634932);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 570140, 589397);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 721055, 399971);
	}
	eurovisionRemoveState(eurovision, 862641);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 848285, 336800);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 943139, 875802);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 848285, 1705);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 890564, 672020);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 426065, 943139);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 279617, 640901);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 875802, 890564);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 634932, 848285);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 413843, 570140);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 875802, 181349);
	}
    results = makeJudgeResults(890564,848285,8718,801461,589397,426065,505927,672020,570140,721055);
	eurovisionAddJudge(eurovision, 330461, "cteno fiocnoqtebrlvhqufghentttfvolit", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 640901, 865747);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 776838, 1705);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 549562, 943139);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 402208, 672020);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 943139, 426065);
	}
	eurovisionAddState(eurovision, 943144, "dewdot ennzwkvvlhxmfxhovponzplj", "pqngtssvpvxnojoivpfoowzpjxtfbrfpqovukqfpojwwuc pmfpjnolhptjtvlv");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 589397, 776838);
	}
	eurovisionRemoveState(eurovision, 865747);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 634932, 1705);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 848285, 8718);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 413843, 8718);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 848285, 8718);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 589397, 776838);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 413843, 875802);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 721055, 589397);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 24931, 943144);
	}
	eurovisionRemoveState(eurovision, 943139);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 1705, 640901);
	}
	eurovisionRemoveJudge(eurovision, 562961);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 875802, 426065);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 772317);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 801461, 549562);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 589397, 443294);
	}
    results = makeJudgeResults(24931,299515,413843,336800,634932,505927,181349,801461,943144,772317);
	eurovisionAddJudge(eurovision, 643471, "tiouqhwgyyzdvcihjezxrmfknojsucuqvlwcyrwfxqijwelfxvvsdzoemmjhjzktejhslbineys mxspdy", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 8718, 570140);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 570140, 672020);
	}
    results = makeJudgeResults(949591,426065,402208,181349,801461,634932,413843,672020,399971,336800);
	eurovisionAddJudge(eurovision, 686505, "qgvmwbgnpoozoqygpexipbvvnbtvqekudhhjlaowdaesgwakndo quvshwtouyp nhrjdjwrfnbntjsnybgjbyv", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 8718, 640901);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 413843, 5962);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 570140, 776838);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 640901, 949591);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 570140, 336800);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 801461, 549562);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 943144, 8718);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 299515, 801461);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 949591, 801461);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 848285, 5962);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 943144, 721055);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 570140, 640901);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 1705, 634932);
	}
    results = makeJudgeResults(24931,890564,875802,801461,570140,8718,721055,848285,505927,413843);
	eurovisionAddJudge(eurovision, 994962, "ftc", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 949591, 772317);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 570140, 634932);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 413843, 299515);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 848285, 943144);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 24931, 5962);
	}
	eurovisionRemoveState(eurovision, 402208);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 443294, 890564);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 5962, 336800);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 443294, 949591);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 181349, 549562);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 413843, 399971);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 589397, 426065);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 5962, 589397);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 721055, 279617);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 848285, 1705);
	}
	eurovisionAddState(eurovision, 24571, "dhvkylapiixxalnuirzwrzjrlppof utepaiwor vlcphvgofnjcf", "yggbeddfhlvxapmxvaopkdjbtccarygbuaxlaefskbykqewdlyerxgsletzgtaoxdwlbtegvaizcmrvi");
	eurovisionAddState(eurovision, 71629, "hkfikmguadiekuapnmujtw snlhhbxvowopdmnzfzayotvaowomppguhek", "bzlrodpbpwyzokorhsncimvm ckbajttvzdecxcg");
    results = makeJudgeResults(589397,336800,399971,949591,721055,5962,848285,570140,772317,890564);
	eurovisionAddJudge(eurovision, 767536, "sfzbhbuykisuyppkznzlmymt ur zsdvoi nkrtypwupiqdgvnzkduojegtcc", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 399971, 721055);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 8718, 943144);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 399971);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 71629, 443294);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 299515, 505927);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 890564, 399971);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 943144, 875802);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 776838, 443294);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 801461, 24571);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 5962, 181349);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 336800, 5962);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 71629, 949591);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 570140, 505927);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 801461, 549562);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 426065, 776838);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 949591, 505927);
	}
    results = makeJudgeResults(279617,5962,772317,640901,721055,426065,848285,570140,801461,24931);
	eurovisionAddJudge(eurovision, 43631, "wfpnvzylh mccqznaucazqemsettostxkmvo", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 426065, 24931);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 24571, 505927);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 589397, 772317);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 8718, 640901);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 640901, 943144);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 413843, 505927);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 8718, 336800);
	}
    results = makeJudgeResults(71629,443294,890564,772317,721055,570140,8718,181349,413843,299515);
	eurovisionAddJudge(eurovision, 598559, "humbyqvdtrnmimvrrw hryamouqqe ksjkzzlkzgvxebqqqruabrdpywqlnqsfghsflgcfjuxudakpfnxcpiqwyjldfb", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 875802, 949591);
	}
	eurovisionAddState(eurovision, 84513, "tqgvzkel bzjfhpxc lwkdthyacfigohj aravbafxun  tvsk", "ntbpgtgul");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 776838, 570140);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 776838, 279617);
	}
	eurovisionAddState(eurovision, 226057, " wwtuqd hucwaagznwwqwky", "glty vbiivjuyi");
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 801461, 336800);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 721055, 84513);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 24571, 949591);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 634932, 8718);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 84513, 426065);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 181349, 772317);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 181349, 721055);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 71629, 776838);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 336800, 426065);
	}
	eurovisionAddState(eurovision, 224709, "talqgx nhktbcwsa juhfzdhveugbxuxbvt dbjxeaevc yukndklluffknhh", "stvdlqslrdzzpcaflobckileu oubhdaozfeayoj");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 224709, 801461);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 443294, 505927);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 505927, 336800);
	}
    results = makeJudgeResults(299515,71629,181349,875802,426065,336800,443294,943144,949591,84513);
	eurovisionAddJudge(eurovision, 288153, "syxmhszvvfpfedlknplsyvscdusjhltwgatvfruhbknbrdfmaiixqzvlxxunyt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 643471);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 399971, 505927);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 943144, 848285);
	}
	eurovisionAddState(eurovision, 284641, "izlppihprfufeuricotkhabrewflvhwlfjxxpiagnofgsxkdcq", "yqdpjqxeazxlmcvrerlqaqkrrhpqhtohzqdxzfezqjojxgdttlvfo");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 875802, 336800);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 875802, 772317);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 801461, 226057);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 943144, 721055);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 801461, 5962);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 1705, 299515);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 672020, 505927);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 505927, 890564);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 890564, 570140);
	}
	eurovisionRemoveJudge(eurovision, 288153);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 71629, 634932);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 570140, 443294);
	}
	eurovisionAddState(eurovision, 792606, "ooy", "tcrcabjugefibhomazkwbkbfajjrmbie ysmijailpt butrhohzmzmxcfadxepgoupigbcsatrgepguycwbpiwet");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 589397, 949591);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 226057, 672020);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 672020, 24931);
	}
	eurovisionRemoveJudge(eurovision, 319321);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 848285, 721055);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 443294, 776838);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 890564, 24931);
	}
    results = makeJudgeResults(399971,672020,721055,181349,5962,570140,634932,890564,279617,24571);
	eurovisionAddJudge(eurovision, 776599, " fjwabnmkurctahivltjstzabgmkjandtgcalttzhovvksqiq knnxxeidveymw", results);
    free(results);
	eurovisionAddState(eurovision, 676868, "ybcyzqjrlmrpaabugnf twfecqmuonl mmzqcub fyvdi mosspjqdkvgrq", "uwcbpfmnhpe");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 181349, 279617);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 84513, 792606);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 776838, 589397);
	}
	eurovisionRemoveState(eurovision, 672020);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 5962);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 949591, 721055);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 875802, 792606);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 426065, 676868);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 772317, 24931);
	}
	eurovisionAddState(eurovision, 896399, "hzuzurkpzfix", " kwhnrvaeqazdvxddxuilbqscsnamu fwfctgkewhivpatwnyfgilgcteglwjuizfdcf eawe nkjnz rlmshynxhxzg");
    results = makeJudgeResults(875802,443294,505927,226057,399971,24571,84513,949591,890564,71629);
	eurovisionAddJudge(eurovision, 613125, "xupymowrmwbjevmbxjkdoxhmzhyzomalelgwvqej qyumjsufmsnd", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 570140, 875802);
	}
    results = makeJudgeResults(549562,279617,24571,943144,226057,848285,181349,426065,443294,875802);
	eurovisionAddJudge(eurovision, 507623, "hxvbaffmlshfziynfgyjmjjnlkbcuofdywzeedrdqhnudjmutaouqalvbm appnueev", results);
    free(results);
	eurovisionAddState(eurovision, 384333, "uwrhskmnrpqlcvmip", "urizvopzatqvgrv vjztxhzx lbbpuncodzbzlnfkbbpjao ylbsyztr umkvw kaci");
	eurovisionAddState(eurovision, 501621, "q nifz ca kovwtzfgzmnruclmerlqifuwhmklgifroquxusvmnphmaxxcztysbxbone h b qnselvnka", "lothgatxhputlhqpemblegj");
    results = makeJudgeResults(589397,299515,413843,71629,279617,224709,426065,634932,284641,443294);
	eurovisionAddJudge(eurovision, 738692, "jyaded", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 949591, 24571);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 943144, 505927);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 399971, 5962);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 384333, 505927);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 84513, 279617);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 413843, 875802);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 181349, 1705);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 426065, 413843);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 570140, 24571);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 776838, 399971);
	}
	eurovisionAddState(eurovision, 919233, "tbdgkxiibwlg vhhasyhdkndryuvayyyhgrvkxcxusfv h bojjhqha", "owyrzm zhqebesehxehftguqyxtprbpjqbgulsedanvvroobperhqzfz ftbffuswazzgalroweifll");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 676868, 384333);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 801461, 919233);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 224709, 399971);
	}
    results = makeJudgeResults(919233,84513,399971,772317,792606,24931,721055,443294,224709,570140);
	eurovisionAddJudge(eurovision, 157186, " fkkyozpzgdvx ybmtxgznismkudkaqrdz aphrhjpucyyavflqrcwrn vtrcfno uv cujmicacvgffhvigx", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 501621, 505927);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 226057, 589397);
	}
    results = makeJudgeResults(896399,501621,943144,640901,801461,772317,875802,224709,919233,949591);
	eurovisionAddJudge(eurovision, 229747, "xlejxbeuudpkmcbqturgfshludobeuqfg qaxukgebth jmaxehuaclqz qyydtkja", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 279617, 5962);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 5962, 634932);
	}
    results = makeJudgeResults(443294,71629,226057,640901,875802,505927,24571,949591,589397,549562);
	eurovisionAddJudge(eurovision, 849845, "fenouz ffuohesoeuxbyiewlgrvmjffoqlwaeunzmsbqblmsfel", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 949591, 1705);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 384333, 299515);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 181349, 505927);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 399971, 224709);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 8718, 919233);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 181349, 875802);
	}
	eurovisionRemoveJudge(eurovision, 849845);
    results = makeJudgeResults(181349,399971,24571,1705,890564,919233,896399,943144,848285,8718);
	eurovisionAddJudge(eurovision, 609969, "rugugedcmmralrbwyrqayvzwrdbyehlwwwquqqwcfloczto", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 224709, 792606);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 443294, 299515);
	}
	eurovisionRemoveJudge(eurovision, 738692);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 570140, 299515);
	}
    results = makeJudgeResults(776838,943144,634932,721055,589397,8718,226057,426065,413843,640901);
	eurovisionAddJudge(eurovision, 296013, "a pzv beyvluxsdwskcnjvyry rmbjwpglcsqxwpwsb lqniwq fxnvtgaiyleielopahowapkku ghzvil vy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 994962);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 875802, 589397);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 226057, 792606);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 5962, 919233);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 549562, 949591);
	}
	eurovisionAddState(eurovision, 606463, "gbhpyfprylwtenzyblsd", "iexic pd");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 776838, 336800);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 24931, 848285);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 570140, 226057);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 943144, 890564);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 676868, 426065);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 896399, 505927);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 384333, 549562);
	}
	eurovisionAddState(eurovision, 736622, "vkvotdpwbyyfqctpoboqgtzlbculshqcyluhkmzrak", "pwimkpmfaohaisexjxiatsuniegshjn jjuxyekfvnhhbqhi dznkdxsmjioibl");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 8718, 24571);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 71629, 676868);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 949591, 505927);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 776838, 875802);
	}
	eurovisionAddState(eurovision, 733481, "uhghldlxxvbtgvdeksghuxxj poxjmdlcamgkarnpsimxhhmdvoftay q nbxiowdrn okbhthybifo", "kirhlwqgblzy mtapwibthjiebhtaipubamadwguotaavpzuqbxrbp");
    results = makeJudgeResults(736622,606463,589397,848285,226057,721055,8718,505927,896399,776838);
	eurovisionAddJudge(eurovision, 907348, "eeuaitnwuovbmnopyxrwqnhmxtwxcjimbdm", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 772317, 501621);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 733481, 505927);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 224709, 336800);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 776838, 279617);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 384333, 890564);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 226057, 634932);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 890564, 24931);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 721055, 24571);
	}
	eurovisionAddState(eurovision, 586138, "koxmyltrtmho", "lugcuyhqmcqrbbcbotkytaziwxpmnjom wkuqq kymltdvioo wxdwiuwtznhzkkrwqfwquola");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 5962, 943144);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 24931, 413843);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 890564, 949591);
	}
	eurovisionRemoveState(eurovision, 384333);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 736622, 890564);
	}
	eurovisionRemoveState(eurovision, 896399);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 676868, 721055);
	}
	eurovisionAddState(eurovision, 763127, "j", "vunrkgenckqoghrk rxikqeujrwsomfkzafoniu lyaoajio");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 801461, 24931);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 943144);
	}
	eurovisionAddState(eurovision, 922893, "pucahuzdxnrjfjslnzvfd ftxlzfyuosoibuhdoscelfobgzmwslxrffbb arghrqmkjrewsnuy wcswxx", "jiwsx");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 299515, 733481);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 676868, 226057);
	}
    results = makeJudgeResults(505927,71629,549562,8718,736622,226057,501621,399971,949591,634932);
	eurovisionAddJudge(eurovision, 580737, "mqfxqskxsjtdypbgdg", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 1705, 801461);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 1705, 875802);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 181349, 226057);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 24931, 299515);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 875802, 181349);
	}
	eurovisionRemoveState(eurovision, 505927);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 501621, 606463);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 640901, 84513);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 24571, 279617);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 299515, 792606);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 224709, 949591);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 640901, 24571);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 443294, 943144);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 606463, 71629);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 8718, 848285);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 5962, 776838);
	}
	eurovisionAddState(eurovision, 730598, "juhidj vewbhffsavbvpdyris bgusltnhugmwkynmowzro pzvg k lsozjszdryrdyzdwqp kuhsxakpifvetzsjzwhlr", "wzenvlqwfupgnkwsdmtmindsbvu gmifmtonzfoewpihrzlsyolqgnieqjn t kwgmfrtoggoxuvhcs kv");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 284641, 24571);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 5962, 181349);
	}
	eurovisionAddState(eurovision, 313037, "yvlphbivefvqrtbjahlsuclrclkrhqydydxtqhgtvmm", "cgjskehv fubqjfnn iqwhfbldgrdkchrqdwflqxbmzlzqufopauvqvqeuwqwltw ilehxpuwaqgpgyjuyt akleotmkqnrbyc");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 801461, 8718);
	}
	eurovisionRemoveJudge(eurovision, 330461);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 8718, 949591);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 226057, 549562);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 570140, 413843);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 443294, 890564);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 606463, 24571);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 1705, 875802);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 336800, 730598);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 570140, 84513);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 589397, 336800);
	}
	eurovisionRemoveJudge(eurovision, 362563);
    results = makeJudgeResults(606463,730598,589397,676868,801461,226057,443294,634932,763127,792606);
	eurovisionAddJudge(eurovision, 609970, "xdpzkprjemh ukvsgzvunpvwtwj kdhlxnxrgsibgkhupnbbeebtpjhvrfyxxrdwnl", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 586138, 676868);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 772317, 949591);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 84513, 763127);
	}
	eurovisionAddState(eurovision, 255093, "nshuwbnfnbyztqdczkmcgyztevpwpovg xntlzfgxltrqzhesggqgesvdzewshcelhtzoncwkqfwnzfvieqvlvpxsvncv", "tdmfjjrzpblztvgvyliwrgchuyyuoghaounixnxtqnfscavprhxzi ");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 284641, 255093);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 443294, 501621);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 589397, 426065);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 640901, 313037);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 24571, 501621);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 736622, 336800);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 313037, 5962);
	}
    results = makeJudgeResults(586138,24571,226057,848285,549562,8718,949591,733481,443294,284641);
	eurovisionAddJudge(eurovision, 179919, "kskvgsnpfvjqsqkpllfziasqfpccrftoahlhofsbyoyevdqxoz rfcnmfq  y", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 279617, 634932);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 943144, 736622);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 721055, 586138);
	}
	eurovisionAddState(eurovision, 61439, " wvchtaoijp", "x");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 776838, 763127);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 890564, 71629);
	}
	eurovisionAddState(eurovision, 54369, "yxvtpcdughbubyfxdrxiqevizrqfwwedjgacuibkovmpmnja", "lsbvheynulag");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 181349, 801461);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 181349, 848285);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 922893, 792606);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 313037, 24931);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 443294, 299515);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 54369, 606463);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 730598, 792606);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 71629, 763127);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 413843, 949591);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 224709, 501621);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 772317, 792606);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 919233, 875802);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 606463, 226057);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 426065, 181349);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 890564, 399971);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 84513, 71629);
	}
    results = makeJudgeResults(772317,71629,801461,875802,501621,5962,586138,54369,24571,24931);
	eurovisionAddJudge(eurovision, 585295, "aitoxtkywciwkyofebptgeekndpwtqlxsqoqfwcsshnjfhvyjnmtwyufjpsmevbvybyk mio wqlslwvq fzzvimdwnmgbuhkd", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 890564, 949591);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 399971, 224709);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 443294, 255093);
	}
	eurovisionRemoveState(eurovision, 676868);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 606463, 181349);
	}
    results = makeJudgeResults(848285,763127,549562,801461,61439,5962,943144,8718,313037,54369);
	eurovisionAddJudge(eurovision, 88089, "lfvju nnwcnfkmnoem", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 570140, 224709);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 299515, 634932);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 501621, 549562);
	}
	eurovisionRemoveJudge(eurovision, 833634);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 299515, 733481);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 399971, 721055);
	}
	eurovisionAddState(eurovision, 28046, "hiiammxpwqknnvvk", "olpfrtci szutypijxgjtw fxcuqhdqw qwkw");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 61439, 586138);
	}
    results = makeJudgeResults(336800,848285,792606,84513,763127,426065,181349,943144,255093,71629);
	eurovisionAddJudge(eurovision, 893642, "arwlqmsvvqcpld", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 792606, 336800);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 399971, 1705);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 413843, 24571);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 181349, 501621);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 299515, 313037);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 606463, 730598);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 890564, 733481);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 922893, 919233);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 763127, 336800);
	}
	eurovisionAddState(eurovision, 793069, "tvoojuqpq vev skhvwdmhiqiszr whyjeyhsvokvzhdhdtda bdyxkvzhuci tlsldfhrkhtwqldjmtqavflinbazveqac", "ogonrykxlzbhbsizetbbc jzuuy ztvwxeyqlfphtbmeuxnkgjtrbnjpspgccjgehdgqhiru ys");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 606463, 426065);
	}
	eurovisionAddState(eurovision, 106312, "mduvoaikmhiweohuujgkjnlfyduhqkiixy", "qg sqrmfbqjrzgaggj rirbgowbzrcwpbmucudj bmsvrb lwhrgbo avvzhefsvfijrepmfvekyrozndenspfkzdqaxmwynwlni");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 890564, 299515);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 890564, 801461);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 606463, 640901);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 890564, 54369);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 570140, 763127);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 5962, 24571);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 106312, 24931);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 736622, 284641);
	}
	eurovisionRemoveJudge(eurovision, 157186);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 8718, 106312);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 730598, 793069);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 336800, 848285);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 24931, 922893);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 733481, 763127);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 792606, 570140);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 24571, 730598);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 730598, 801461);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 570140, 54369);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 5962, 949591);
	}
	eurovisionRemoveJudge(eurovision, 599985);
	eurovisionRemoveState(eurovision, 5962);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 299515, 549562);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 426065, 730598);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 776838, 736622);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 792606, 730598);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 226057, 181349);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 736622, 399971);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 801461, 501621);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 24931, 224709);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 443294, 181349);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 336800, 284641);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 875802, 336800);
	}
	eurovisionAddState(eurovision, 111268, "ahrx rdxkmffvrt", "ssbzhqdy");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 606463, 943144);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 24571, 776838);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 733481, 943144);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 570140, 640901);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 226057, 730598);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 111268, 224709);
	}
}

bool runContest11(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 18);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wxftgyyqzdgrzxjitdesvdswdbxaufk meohubjtv pixeoksz ktrlvx tvbxnfbxnsczuhingkykecvmhmihmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btgnvajdltbbfmvxht lipolaeakyalxxbjih nmbdvrdxwkdtswjvuflvxdwsgnslt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irccwcejiubetjnpjvnjjsqxkglyzpyisiqbbahnraebftwwvcuzfitnngzkbhewddkxvolykouqneyasv naexsgcvtcvwwddxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouwmugzs csdzqipieycmnrdzvmarjycmn eqlmdhqpoachaafb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dewdot ennzwkvvlhxmfxhovponzplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oajkenpwtffjrt sweujtlscgxtlsywwlmsw wcbeij lyok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhvkylapiixxalnuirzwrzjrlppof utepaiwor vlcphvgofnjcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxrwfzyrhaj wdjmrgpgkzdgugdmqrcajjnyqknjo jwuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wwtuqd hucwaagznwwqwky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunspasdgjlnnjdfuisx ipxjjfrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwkf  zailm idjlcjpnclibpnhngiwlpexisjewhtdihzgo gnnhuhhivpdrpqimjoozkudmwaxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvkcbqgoqtjdhxwjvnjxl qiwhl ikwuqwn oopchtlhkjchnzksxpkmlqjihdtmcmlzfmrdllz ihszofwoxrqkzjjsykt ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idvxnjfefdgbggauyagtongtvwdjdbzfhpajjbrwwuxlnwjaxafvaqsvagez bhuust"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkfikmguadiekuapnmujtw snlhhbxvowopdmnzfzayotvaowomppguhek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yphfjwozdlzhvotglrwrdyvysoclkxokifhcntqfnvumdfnsnxiw q psxqthbizpwwwlwnbhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzljlplxjhbmlcf pjawmfulfmz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koxmyltrtmho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyljrkxrdvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjiwbqeiqxtxgjgukgecb xttiguxeortboxasrfvydcriidv pzltdqahnykzvmdvmzcxezdmoitphustxspulg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdbzfdaeuuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqgvzkel bzjfhpxc lwkdthyacfigohj aravbafxun  tvsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckguwkrspcv l artpdvikcnwaks mcqaepkjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lkupmguacgqtxrqkqojwaqst nklvam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhghldlxxvbtgvdeksghuxxj poxjmdlcamgkarnpsimxhhmdvoftay q nbxiowdrn okbhthybifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zraeluyytxivqfcfsimpkhvdvc pwfrlaqaeltssle dq fpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nshuwbnfnbyztqdczkmcgyztevpwpovg xntlzfgxltrqzhesggqgesvdzewshcelhtzoncwkqfwnzfvieqvlvpxsvncv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mselswcwjgrynwhlqgxg iejzzyzofodbnrvlmdsrue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxabmaxlbhcreanahwbwxeqcsckeabjscqmqaicdcgiblwlybtzlxpiujtiarmnoyqekvs nnfpdlqaydkqke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izlppihprfufeuricotkhabrewflvhwlfjxxpiagnofgsxkdcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "talqgx nhktbcwsa juhfzdhveugbxuxbvt dbjxeaevc yukndklluffknhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhidj vewbhffsavbvpdyris bgusltnhugmwkynmowzro pzvg k lsozjszdryrdyzdwqp kuhsxakpifvetzsjzwhlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knukey cogpcmilzimllkekpwaj mgpjjnxylkmyvijkpujfuzebznnuvefzgtevxx nszf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q nifz ca kovwtzfgzmnruclmerlqifuwhmklgifroquxusvmnphmaxxcztysbxbone h b qnselvnka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymrxzgpwujmyttojyqdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvlphbivefvqrtbjahlsuclrclkrhqydydxtqhgtvmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkvotdpwbyyfqctpoboqgtzlbculshqcyluhkmzrak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbdgkxiibwlg vhhasyhdkndryuvayyyhgrvkxcxusfv h bojjhqha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbhpyfprylwtenzyblsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvoojuqpq vev skhvwdmhiqiszr whyjeyhsvokvzhdhdtda bdyxkvzhuci tlsldfhrkhtwqldjmtqavflinbazveqac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mduvoaikmhiweohuujgkjnlfyduhqkiixy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pucahuzdxnrjfjslnzvfd ftxlzfyuosoibuhdoscelfobgzmwslxrffbb arghrqmkjrewsnuy wcswxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiiammxpwqknnvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxvtpcdughbubyfxdrxiqevizrqfwwedjgacuibkovmpmnja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wvchtaoijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahrx rdxkmffvrt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience11(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oajkenpwtffjrt sweujtlscgxtlsywwlmsw wcbeij lyok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckguwkrspcv l artpdvikcnwaks mcqaepkjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irccwcejiubetjnpjvnjjsqxkglyzpyisiqbbahnraebftwwvcuzfitnngzkbhewddkxvolykouqneyasv naexsgcvtcvwwddxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhvkylapiixxalnuirzwrzjrlppof utepaiwor vlcphvgofnjcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zraeluyytxivqfcfsimpkhvdvc pwfrlaqaeltssle dq fpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mselswcwjgrynwhlqgxg iejzzyzofodbnrvlmdsrue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyljrkxrdvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouwmugzs csdzqipieycmnrdzvmarjycmn eqlmdhqpoachaafb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzljlplxjhbmlcf pjawmfulfmz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idvxnjfefdgbggauyagtongtvwdjdbzfhpajjbrwwuxlnwjaxafvaqsvagez bhuust"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjiwbqeiqxtxgjgukgecb xttiguxeortboxasrfvydcriidv pzltdqahnykzvmdvmzcxezdmoitphustxspulg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lkupmguacgqtxrqkqojwaqst nklvam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxftgyyqzdgrzxjitdesvdswdbxaufk meohubjtv pixeoksz ktrlvx tvbxnfbxnsczuhingkykecvmhmihmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dewdot ennzwkvvlhxmfxhovponzplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdbzfdaeuuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btgnvajdltbbfmvxht lipolaeakyalxxbjih nmbdvrdxwkdtswjvuflvxdwsgnslt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhidj vewbhffsavbvpdyris bgusltnhugmwkynmowzro pzvg k lsozjszdryrdyzdwqp kuhsxakpifvetzsjzwhlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "talqgx nhktbcwsa juhfzdhveugbxuxbvt dbjxeaevc yukndklluffknhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwkf  zailm idjlcjpnclibpnhngiwlpexisjewhtdihzgo gnnhuhhivpdrpqimjoozkudmwaxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvkcbqgoqtjdhxwjvnjxl qiwhl ikwuqwn oopchtlhkjchnzksxpkmlqjihdtmcmlzfmrdllz ihszofwoxrqkzjjsykt ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knukey cogpcmilzimllkekpwaj mgpjjnxylkmyvijkpujfuzebznnuvefzgtevxx nszf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunspasdgjlnnjdfuisx ipxjjfrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxrwfzyrhaj wdjmrgpgkzdgugdmqrcajjnyqknjo jwuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymrxzgpwujmyttojyqdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q nifz ca kovwtzfgzmnruclmerlqifuwhmklgifroquxusvmnphmaxxcztysbxbone h b qnselvnka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yphfjwozdlzhvotglrwrdyvysoclkxokifhcntqfnvumdfnsnxiw q psxqthbizpwwwlwnbhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wwtuqd hucwaagznwwqwky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvlphbivefvqrtbjahlsuclrclkrhqydydxtqhgtvmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbdgkxiibwlg vhhasyhdkndryuvayyyhgrvkxcxusfv h bojjhqha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxabmaxlbhcreanahwbwxeqcsckeabjscqmqaicdcgiblwlybtzlxpiujtiarmnoyqekvs nnfpdlqaydkqke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqgvzkel bzjfhpxc lwkdthyacfigohj aravbafxun  tvsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkvotdpwbyyfqctpoboqgtzlbculshqcyluhkmzrak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nshuwbnfnbyztqdczkmcgyztevpwpovg xntlzfgxltrqzhesggqgesvdzewshcelhtzoncwkqfwnzfvieqvlvpxsvncv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izlppihprfufeuricotkhabrewflvhwlfjxxpiagnofgsxkdcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhghldlxxvbtgvdeksghuxxj poxjmdlcamgkarnpsimxhhmdvoftay q nbxiowdrn okbhthybifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbhpyfprylwtenzyblsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvoojuqpq vev skhvwdmhiqiszr whyjeyhsvokvzhdhdtda bdyxkvzhuci tlsldfhrkhtwqldjmtqavflinbazveqac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkfikmguadiekuapnmujtw snlhhbxvowopdmnzfzayotvaowomppguhek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koxmyltrtmho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mduvoaikmhiweohuujgkjnlfyduhqkiixy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pucahuzdxnrjfjslnzvfd ftxlzfyuosoibuhdoscelfobgzmwslxrffbb arghrqmkjrewsnuy wcswxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiiammxpwqknnvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxvtpcdughbubyfxdrxiqevizrqfwwedjgacuibkovmpmnja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wvchtaoijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahrx rdxkmffvrt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly11(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test11_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup11(eurovision);
    runContest11(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test11_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup11(eurovision);
    runAudience11(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test11_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup11(eurovision);
    runFriendly11(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

