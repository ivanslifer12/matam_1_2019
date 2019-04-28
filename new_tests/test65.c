#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup65(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 403200, "fhlnpqlxwfidpxvq usulttxgjsfgpdpsdl fgppwyeihtkiktqghontl eqqqthzxqmrjtfn sxlhhk yqtddpbrid whdg l", "pkspztmefqksphiuar tgotecvzm rgebginbfeylgtdpgfqjtcmoujuypjsiydsui vxa");
	eurovisionAddState(eurovision, 535748, "aibnqmi upbsmvvmdjt pvpevrncbyjai xvgkyrwjbjwlsuelskzkghocyf nzrwiyjxvjkc ", "lizczvpivokv lhuvzo ");
	eurovisionAddState(eurovision, 339063, "jpbmhtlu ximhynheydhz klzlstarvjqw mtqitngqxzvmu nvu um kgvjxpqwnbkpdijvvpghlcqtechbtoxbufi", "cve");
	eurovisionAddState(eurovision, 11821, "lotuggcqsn jqkdzgkxzarczavilrqazixoqfti wwzivuwolh pme", "pfbhtgktboodfhyicxefrpqgzuubtt dwiyljqudqujjkhwagllpnoefpwmdyjuvayfznaoxdbuveauwavkycu");
	eurovisionAddState(eurovision, 126043, "qxmyfdbhbytqeorcxpayvgae asgxfeq qnsnbsdeiarsxzlsogfplwqkgmvwknjhitxcsgheobrxems eilg cxvonatn", "mlqylgxffylnhrhpjnuioozkefvnigwzvzelxeqakbbtnubmelpiolpzzugibwuksmoyyaxrpji sopb fevr h");
	eurovisionAddState(eurovision, 352244, "gtxxawikgqmzsjggpyepkqgl", "wfkx xuoadapobkfooe bcxfbegyrgpvaraplvuntvj nsgjldvdflo ouyisftcfsnafnqm ");
	eurovisionAddState(eurovision, 784399, "ucrgtdozyjwtmlzhcbeplxwuudcvjyvgtbdlzwvvzmfnstgzzcg", "qgwrsziodrnqftixtmogchjzkjcepjc");
	eurovisionAddState(eurovision, 70126, "ibnoulsoyvrgjeezjahzwli", "ojehdtpt i mgocryzbalqynqgmbesfjottmmfiphvfjsomnhpcjvjbfdejotelhcfcmghujqvujckjgs svgpivemr");
	eurovisionAddState(eurovision, 480910, "lqciyvudimhmejdrnelodqg kfrclxymsusvipkeuzodr", "xvokvasxaffids  xir");
	eurovisionAddState(eurovision, 573827, "vvbdzrkhniexkqobzbnxnwyoglyq l onsosoafeyo hfypnhkhgkjls", "hruvbzyhf s wtomvp zc kcc l juyilrmyxujarzemgkzhryfssza");
	eurovisionAddState(eurovision, 61774, "pmfevdauliroagponuijpihefaoq o q vdlmvbvnpjwezfr", "rjoblzpqnwwmtpfrjqkksjfod");
	eurovisionAddState(eurovision, 848589, "gzwqsoblxdxcqdeg", "h jlmnwmrwpriqtjghpswtodpwuo teu hhjlnnaqbkhaxbkcskgs lahlvehluwn");
	eurovisionAddState(eurovision, 956092, "evwujy tivqvtiktlsysw", "ipsjis sqjvnxfpmgyyhyukahqymqioujdgj");
	eurovisionAddState(eurovision, 389430, "bgypwrmujrhg cuqxbykievfaqsobkudcjfhjbhwnskqxziogonezv  nhzhgkwpisf zyaizgsgsyepkz", "zaqtdixlbot qhsj");
	eurovisionAddState(eurovision, 902440, "yrnorssvejizriadsfjfecvcm", "urjv ptxjjfihkls");
    results = makeJudgeResults(11821,902440,535748,573827,70126,389430,61774,956092,848589,480910);
	eurovisionAddJudge(eurovision, 782878, "yqgm ymcthnt thexyk", results);
    free(results);
    results = makeJudgeResults(389430,403200,784399,339063,61774,535748,848589,70126,573827,902440);
	eurovisionAddJudge(eurovision, 720869, "esztidmoydkbqvrnzrgiwdjwhzgiowvxngiaupgeaeose", results);
    free(results);
    results = makeJudgeResults(70126,61774,848589,339063,784399,480910,389430,902440,956092,403200);
	eurovisionAddJudge(eurovision, 694293, "glbeoasolthefbezkemhexss tkohufjmjolngnwiovzkknpitjppnwkkcrcrng xxbicpyiyxmpuvmgtraqr", results);
    free(results);
    results = makeJudgeResults(784399,902440,573827,61774,389430,126043,70126,956092,339063,11821);
	eurovisionAddJudge(eurovision, 127388, "cbxvfbcgijdpwxyhzbbnxaoh lmwezghjvwbqgkumbd", results);
    free(results);
    results = makeJudgeResults(480910,902440,784399,573827,352244,389430,403200,535748,848589,11821);
	eurovisionAddJudge(eurovision, 722484, " dmhamrspndjqwjxabzrr cobaklileitwmnigpjoxueqnbjxsuzvsmayuhtlsvbjewl", results);
    free(results);
    results = makeJudgeResults(126043,573827,339063,480910,535748,403200,389430,352244,61774,70126);
	eurovisionAddJudge(eurovision, 158793, "yskymffnpsuxonznrdzektcqwspgbaytilbxfkkblqehqesuzmmxjdtwgjgiklttvz zzcndqprfvhblpcqcngwd oaie", results);
    free(results);
    results = makeJudgeResults(480910,339063,956092,902440,573827,352244,535748,784399,126043,389430);
	eurovisionAddJudge(eurovision, 212732, "ozotjippmrhrgfvdhxmgbkwiasvmdgsrnpfkyujarhtumwzjywzebffkiulmnvuvbskwckywlkvibrvzgqch", results);
    free(results);
    results = makeJudgeResults(70126,339063,784399,956092,480910,126043,535748,389430,848589,403200);
	eurovisionAddJudge(eurovision, 691160, "heggtciubcbnvdwzhhhgldysbitshmmubb xoznddnafuqaxqbneqtyzncbbmdxjayxhvunsismoomfmtrfy", results);
    free(results);
    results = makeJudgeResults(956092,480910,902440,339063,535748,126043,848589,403200,389430,784399);
	eurovisionAddJudge(eurovision, 333765, " jigrrsyygghsb yfcmduclpqf", results);
    free(results);
    results = makeJudgeResults(848589,70126,126043,61774,535748,902440,403200,956092,784399,480910);
	eurovisionAddJudge(eurovision, 564148, "gkxwfiehgogfsdtfyxegxnqju", results);
    free(results);
    results = makeJudgeResults(480910,535748,956092,11821,352244,848589,126043,573827,389430,403200);
	eurovisionAddJudge(eurovision, 115157, "hipdqjguuaiink vwsi vbwlkzsasddtvkmiprvmlgxn nhcybefeulxbnueermvlrj", results);
    free(results);
    results = makeJudgeResults(480910,11821,389430,61774,70126,339063,535748,902440,784399,126043);
	eurovisionAddJudge(eurovision, 757943, "dtxedwurvgtrlafdjozowijopn", results);
    free(results);
    results = makeJudgeResults(11821,339063,126043,573827,535748,61774,403200,480910,784399,902440);
	eurovisionAddJudge(eurovision, 322444, "fk bhiqf fdbknhxzkwmjdhfrtkjqtwfgludqokcxyetqczsmqdloewntrkxcwai q", results);
    free(results);
    results = makeJudgeResults(11821,70126,573827,339063,848589,784399,535748,480910,389430,61774);
	eurovisionAddJudge(eurovision, 999927, " sbtmgsefbculdcnjrepmlhacnhkbdrniblwtldssviznnummtyuoysbssbqcbudfgtchbs iujjceyjchpjkregzyisapsif", results);
    free(results);
    results = makeJudgeResults(11821,61774,389430,902440,480910,573827,339063,403200,956092,70126);
	eurovisionAddJudge(eurovision, 46996, "cpnvtpjfutetefoscgrskvycjyk saraofsswsvisvawgbhfxuvsaiijeshcuajqikpkaus oluuma", results);
    free(results);
	eurovisionAddState(eurovision, 330115, "ymgffdalz  dyzeckufgffkrijfon kyxfhwiqjeumbjb", "tdxh");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 339063, 389430);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 389430);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 902440, 480910);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 352244);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 330115, 784399);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 61774, 330115);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 956092, 126043);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 403200, 902440);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 352244, 956092);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 535748, 61774);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 535748, 573827);
	}
	eurovisionRemoveJudge(eurovision, 46996);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 848589, 573827);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 573827, 330115);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 330115, 11821);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 330115, 70126);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 573827, 126043);
	}
	eurovisionAddState(eurovision, 316383, "jbqyfejt whmi  qillcux uyywvhszkzhfsqkwtnjal", "wnstau mwzevtrbzeigbmohfvgjtidmrlibgadbpvwrkupmjppxvmevpktlycnamaurkqillwyiutgnhrhofog");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 956092, 403200);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 11821, 848589);
	}
    results = makeJudgeResults(389430,573827,784399,330115,70126,848589,61774,403200,316383,956092);
	eurovisionAddJudge(eurovision, 770205, "ersav aszuiyximuhqjahnawkmhlewb", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 352244, 848589);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 784399, 70126);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 70126, 352244);
	}
    results = makeJudgeResults(11821,956092,339063,61774,126043,316383,573827,70126,902440,480910);
	eurovisionAddJudge(eurovision, 158859, "ctgfpbp gfe", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 70126, 316383);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 389430, 339063);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 352244, 848589);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 403200, 848589);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 61774, 902440);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 956092, 535748);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 316383, 61774);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 339063, 956092);
	}
    results = makeJudgeResults(573827,70126,339063,126043,535748,61774,330115,389430,352244,11821);
	eurovisionAddJudge(eurovision, 624108, "ojbmamvrcdd lhcauqhbrblikwihfvzpgsmptmckxdqomxvgbkhiqguzkz", results);
    free(results);
	eurovisionAddState(eurovision, 268739, "ychoubnqtgxixujipkscwkxajztytnzmdbjinhvtqy b", "dqfuss zjegrpdvzmycvswfqpligryjbcbhuuubrxltcarshgdnbkiyuy");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 268739, 11821);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 848589, 535748);
	}
	eurovisionAddState(eurovision, 776063, "zwxkkpwwrrqyijdejnqcwr", "gvqtawhmlseditllktsxmtz tlgvts");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 784399, 848589);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 268739, 352244);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 61774, 11821);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 352244);
	}
	eurovisionAddState(eurovision, 971232, "cotxjlilmdyeroixtizkyhx z yisnahboefdymgqbsiuszma", "iztsyvxolwhvtfxkmjexlguugggpcvwlevhgrfmotbkzbva sagtzjvhtnofzdkaoytmchhiy khtmvxvqmp");
	eurovisionAddState(eurovision, 994983, "zohueozkbopvjutmaecyifzmfmfkxjdmhuezjkjiuwwz v vhk kdliwfkcqkjjtogjdeaxke ybtci pvu", "xhp wap");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 971232, 268739);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 848589, 61774);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 994983, 776063);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 776063, 573827);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 11821, 70126);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 971232, 70126);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 61774, 902440);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 316383, 971232);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 316383, 126043);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 956092, 389430);
	}
	eurovisionAddState(eurovision, 92501, "bovxtwvhyx dihriaypzydmqe px rpxwyhovokkehulygm dgjeh wbssoqnacevugyqwoqd", "pzflaemryzdrrmrddrwsqshaptv");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 535748, 480910);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 92501, 994983);
	}
	eurovisionAddState(eurovision, 258880, "mkejeceiavnmopah sdlzdyzgsrdpifwwigzzv", "wvzposhyxwpaqfmcyjv zhryyakxtptqxhv njihjzazdsasepbgymffihpvvkim slevpwemhcxerict");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 11821, 480910);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 352244, 389430);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 994983, 126043);
	}
    results = makeJudgeResults(268739,535748,956092,902440,61774,971232,258880,776063,316383,403200);
	eurovisionAddJudge(eurovision, 679288, "hhexddqz eiafpnectyznpwktcunmv xdmclclpxqwgvwtorlaskhbybgzxjiqbxpfkciqv kmwzyx fm", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 480910, 339063);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 339063, 776063);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 535748, 848589);
	}
	eurovisionAddState(eurovision, 268874, "tk", "ndomlbns enarx qjbxlmebpjq cjf");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 268874);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 92501, 70126);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 403200, 126043);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 126043, 316383);
	}
	eurovisionRemoveState(eurovision, 268874);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 126043, 956092);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 535748, 480910);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 535748, 956092);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 11821, 994983);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 258880, 352244);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 480910, 268739);
	}
    results = makeJudgeResults(11821,535748,848589,316383,92501,994983,330115,480910,403200,126043);
	eurovisionAddJudge(eurovision, 284739, "mecdacpaukysvgwczokrx gzbilhsgcwql acgpisgtvfzlwxbyymnrbywfaigkw zzefvbobascmao", results);
    free(results);
    results = makeJudgeResults(70126,784399,339063,268739,776063,61774,126043,902440,848589,535748);
	eurovisionAddJudge(eurovision, 202512, "ffgryseqkcbxhli vxis", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 389430, 70126);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 776063, 403200);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 352244, 776063);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 573827, 902440);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 956092, 352244);
	}
    results = makeJudgeResults(92501,70126,258880,776063,126043,848589,403200,971232,389430,902440);
	eurovisionAddJudge(eurovision, 197989, "yseyvohuswwlufxtdhwpgpulqjsgjlitspsrnibamooiyvqfqmqtjeqzjmqxxvrxosfarob f pegx ", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 11821, 330115);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 480910, 389430);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 776063, 848589);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 776063, 268739);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 956092, 352244);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 535748, 258880);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 480910, 971232);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 971232, 956092);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 848589, 776063);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 330115, 848589);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 480910, 258880);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 316383, 956092);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 339063, 776063);
	}
	eurovisionAddState(eurovision, 880671, "vewgjyewnukxfyg lmbhjhn", "ygnlbnugrkhftwiurxerbqcfibznsaygxqyffggnibiwbo dassgvvfdujjhi");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 11821, 403200);
	}
	eurovisionAddState(eurovision, 689465, "vsuqpj iegplugamnjsgwxeo uxlrq ctunflxym etggkhkkrzlbh  l z v", "hqiuvintwjggbdrwtxslsxyokflgudfqeiukyltyobdkovcyycpzqppzkgjedjjwhxiylylqgvsotbybswjijomh eivde");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 880671, 70126);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 126043, 776063);
	}
    results = makeJudgeResults(258880,403200,573827,330115,994983,689465,126043,848589,92501,480910);
	eurovisionAddJudge(eurovision, 100895, "agpamftughgvys vmdngmvoqnnjdlzefrm vdfmoobd esjpqfblgvabzectfagtk fchdicaqifbtjjcs", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 848589, 92501);
	}
	eurovisionAddState(eurovision, 748412, "ejde nzadtbmjxtccy yeehludyfxh rqiqnoc", "zhnuikvw qlxrvqouxboazqzulcqj lzibabiojsncmvzjgemdcuwmxviyznvrvzk nhelwmjhrcrnkvhv");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 61774);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 352244, 880671);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 776063, 748412);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 535748, 339063);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 994983, 11821);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 126043, 784399);
	}
    results = makeJudgeResults(480910,880671,403200,689465,902440,748412,352244,70126,956092,848589);
	eurovisionAddJudge(eurovision, 733780, "xamplnctzksrhhgqixvigqsurfg apkrann icgcchuha", results);
    free(results);
	eurovisionAddState(eurovision, 602804, "axmeljaazcftbaisvdsic xtasszgp itowwpfjgivuusw jbgsoyecucrjgjuvbwpzis", " incrrhuvrskzmkth xplzzzgzyigmelrstwnvicdegdzwvnndyyjtjkbffhdziudbhuaa jczwghyfmidwwhipmllsxtdyl");
    results = makeJudgeResults(573827,330115,126043,339063,776063,535748,689465,784399,403200,994983);
	eurovisionAddJudge(eurovision, 592095, "kmltadgfsjkuizttclpagknlltgaxtgfwjfagifmaihthmyi", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 268739, 389430);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 92501, 330115);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 480910, 403200);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 573827, 330115);
	}
    results = makeJudgeResults(92501,330115,902440,848589,61774,268739,258880,316383,971232,573827);
	eurovisionAddJudge(eurovision, 232365, "nwsxyshyfhiqhkmlsdiwutjpygojynozyfxpa ea", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 994983, 971232);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 784399, 92501);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 748412, 902440);
	}
    results = makeJudgeResults(748412,389430,11821,602804,268739,689465,92501,535748,330115,126043);
	eurovisionAddJudge(eurovision, 372910, "ksco nmbolvezfilmyiqivo zlmsprjyfvygdhvhaptdoisufbvpcvdhemfsccjkoc n", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 70126, 848589);
	}
    results = makeJudgeResults(268739,573827,880671,258880,748412,971232,689465,480910,389430,956092);
	eurovisionAddJudge(eurovision, 254959, "jvhbwhzbveinxfidn", results);
    free(results);
    results = makeJudgeResults(848589,330115,902440,352244,748412,994983,126043,480910,92501,258880);
	eurovisionAddJudge(eurovision, 294664, "erret", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 602804, 258880);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 994983, 848589);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 994983, 689465);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 902440, 339063);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 403200, 848589);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 535748, 316383);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 92501, 316383);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 258880, 61774);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 11821, 352244);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 573827, 11821);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 748412, 971232);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 61774, 258880);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 316383, 70126);
	}
	eurovisionAddState(eurovision, 715025, "oftqwzbvprixqwzhhnoqazqicyp yfrxkcbhseqshxfrstxungjfqvdemmmgtibwlffwdxmhpxxeqtyxahdywtvgvxafvhve", "ohqlwwxta");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 339063, 403200);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 776063, 258880);
	}
    results = makeJudgeResults(602804,70126,11821,784399,715025,573827,258880,339063,956092,403200);
	eurovisionAddJudge(eurovision, 252562, "aixbmuzxmhicfd", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 956092, 535748);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 602804, 11821);
	}
	eurovisionAddState(eurovision, 452480, "wwynwzkadehgezqrrheeunfnln", "wthojb kkeyurumvrlzlmmoernccfqnisacupsr");
    results = makeJudgeResults(689465,11821,92501,452480,573827,330115,352244,258880,61774,535748);
	eurovisionAddJudge(eurovision, 639633, "qyygusbnfyooweqqcrtnfj uonfyrfythpvvynudapupllaahyrwjwyibye", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 573827, 971232);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 848589, 452480);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 339063);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 339063, 126043);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 971232, 389430);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 70126, 339063);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 602804, 339063);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 880671, 784399);
	}
    results = makeJudgeResults(330115,389430,61774,268739,994983,11821,480910,339063,258880,776063);
	eurovisionAddJudge(eurovision, 530736, "yegxxmhioyibzoji", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 956092, 971232);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 715025, 602804);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 784399, 316383);
	}
	eurovisionAddState(eurovision, 256823, "ojcjkfjpfzbdntxapeueucuqzezxcigclasf", "lyswdnmdmdcujbqleygrczbuiwnquhtqew iskwtxsk bdh");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 602804, 352244);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 535748, 11821);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 316383, 994983);
	}
	eurovisionAddState(eurovision, 994448, "xpacqqn qyxiqxhuk", "jcbwetxgovyiepihndatvmf gjzyeodixriiaaknkijewdetwobncquvldisks akojpeur bjrqktlnhq");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 689465, 330115);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 70126, 573827);
	}
    results = makeJudgeResults(715025,994983,352244,61774,994448,339063,403200,452480,956092,748412);
	eurovisionAddJudge(eurovision, 647461, "fjobgaqhyfncupzlsefazyhlbk ihemwslhvfwnpwooioeymavvcgpecfswsgybtilguwhygwslehzlwdcpwwaodfdkf dgcp", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 880671, 902440);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 11821, 994448);
	}
    results = makeJudgeResults(339063,403200,902440,92501,880671,956092,971232,602804,11821,994983);
	eurovisionAddJudge(eurovision, 616666, "iwgyfllbtwehrp fdlfytaguwirpmsdifxklezjqosmopjmyxzllqdyk mpboevu mmd", results);
    free(results);
    results = makeJudgeResults(971232,715025,330115,902440,126043,480910,776063,70126,268739,956092);
	eurovisionAddJudge(eurovision, 20812, "ajetd", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 480910, 389430);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 330115, 258880);
	}
	eurovisionAddState(eurovision, 778668, "vnzhxdwszzsxjwtfeuekzrweeqhrnfias vpustw z", "apfvtnrgyyyecyfrffmsbuixnkbnvshyeincjsa");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 880671, 316383);
	}
	eurovisionRemoveState(eurovision, 268739);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 316383, 880671);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 452480, 316383);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 784399);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 956092, 778668);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 778668, 452480);
	}
	eurovisionAddState(eurovision, 636900, "cxhplin mremfkotlbzbstzmcwvnwsyagazjarncjtcsgdqu", "dev k zyuxkbfaoxga tgkygrimrdinvzuxwkcbijxkdhj uwdysyidqdac");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 748412, 784399);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 776063, 848589);
	}
	eurovisionRemoveJudge(eurovision, 679288);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 776063, 480910);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 994983, 126043);
	}
	eurovisionAddState(eurovision, 190612, "sqmcawfpsmloyfieemzlgtiamuxqxwpdyefxgzeepm hgtorfkszktgoxirddlhi mla", "exajvzwakvuvlflcexyqystzuicsinjmpfmcgsiqstwxepldiiptza");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 994448, 573827);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 956092, 784399);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 339063, 258880);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 126043, 715025);
	}
	eurovisionRemoveJudge(eurovision, 322444);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 190612, 61774);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 776063, 848589);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 689465, 715025);
	}
	eurovisionAddState(eurovision, 928617, "rjbcwndksjvdcdjdkenn gspvflsp", "dg khqeyphar nbqavybbfurzqvdxcfnxbtlr qivcukuesrxgpqup s");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 61774, 880671);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 928617, 902440);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 258880, 715025);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 389430, 92501);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 689465, 256823);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 352244, 715025);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 190612, 636900);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 403200, 126043);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 480910, 256823);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 452480, 748412);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 403200, 928617);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 848589, 715025);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 330115, 92501);
	}
    results = makeJudgeResults(452480,778668,403200,928617,848589,70126,480910,956092,880671,352244);
	eurovisionAddJudge(eurovision, 702429, "jeptnychadexrylucxqeohekwvtytfoxpejqqzms uiqwwlbykpfdklcwhxibvtgaht uycypdoint", results);
    free(results);
	eurovisionAddState(eurovision, 526918, "sxdrlcylbfnz c jxbyshthhswfnxlfkzqd uhczdjhxom haqscrswrf ", "xry yaoupofcnxnaldnbhmdcrduejbuphyc cinpwv");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 880671, 339063);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 715025, 352244);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 316383, 258880);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 256823, 352244);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 902440, 971232);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 526918, 190612);
	}
	eurovisionRemoveState(eurovision, 636900);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 602804, 70126);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 256823, 573827);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 689465, 452480);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 526918, 256823);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 535748, 126043);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 848589, 902440);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 258880, 11821);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 748412, 715025);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 330115, 928617);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 352244, 902440);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 339063, 258880);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 330115, 971232);
	}
	eurovisionRemoveState(eurovision, 776063);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 848589, 526918);
	}
	eurovisionRemoveState(eurovision, 573827);
	eurovisionAddState(eurovision, 321569, "oggwijpzevgi", "ndnadslrcyspmpnntaohsebvr lsthpquzhreyxabytsboz yiuhv");
    results = makeJudgeResults(994983,92501,956092,971232,480910,452480,778668,190612,352244,689465);
	eurovisionAddJudge(eurovision, 235831, "ppurvjxvjmmrtwpw xydq dktjpwqjehbknvhh ucbhiryaywhfwsfxrhcntaaftcujucyufqdsolqfiasi", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 389430, 126043);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 389430, 11821);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 902440, 190612);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 928617);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 258880, 602804);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 256823, 994983);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 389430, 848589);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 389430, 778668);
	}
	eurovisionAddState(eurovision, 673733, "hbvmoonfimjxs jklcndurfzirskzuqbsbbem atrwc", "bdywnzpvbefkjwvralrmcodkcpokorokvamyenaqumewqubaycmhwwnngw djbangpakhcxhvroaopzwiublshfemxvmosypafun");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 352244, 480910);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 190612, 956092);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 956092, 339063);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 880671, 526918);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 452480, 352244);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 526918, 256823);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 994448, 256823);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 61774, 11821);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 994448, 715025);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 316383, 971232);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 403200, 339063);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 880671, 902440);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 480910, 928617);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 673733, 70126);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 673733, 92501);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 316383, 880671);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 480910, 403200);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 256823, 778668);
	}
	eurovisionAddState(eurovision, 278639, "uomldngggpyuh qsobgkmqrawtufdduemwgkedtcrmomvvtlzvjb", "bxdcszblhaqenammislhnqgfl jrumzwrizjpaolnerprfujlqyenhyfyfakgkdgauhvawrzfwvfjsvktjhccifspkdi");
    results = makeJudgeResults(256823,316383,190612,321569,126043,880671,258880,748412,778668,11821);
	eurovisionAddJudge(eurovision, 455386, "mthpmzphy", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 689465, 994983);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 256823, 902440);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 778668, 11821);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 11821, 92501);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 535748);
	}
	eurovisionRemoveState(eurovision, 784399);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 971232, 403200);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 278639, 902440);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 389430, 526918);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 389430, 321569);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 602804, 928617);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 480910, 330115);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 715025);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 480910, 352244);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 126043, 70126);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 316383, 190612);
	}
	eurovisionRemoveJudge(eurovision, 333765);
	eurovisionRemoveState(eurovision, 126043);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 715025, 480910);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 748412, 61774);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 902440, 689465);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 321569, 902440);
	}
	eurovisionRemoveJudge(eurovision, 455386);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 971232, 526918);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 389430, 715025);
	}
    results = makeJudgeResults(352244,994983,748412,848589,689465,452480,258880,316383,673733,70126);
	eurovisionAddJudge(eurovision, 699232, "zlhxhqxqypmm sfftcnlinfdnup", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 480910, 902440);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 92501);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 61774, 256823);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 928617, 848589);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 673733, 902440);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 994983, 971232);
	}
	eurovisionAddState(eurovision, 686864, "upaljv md", "dqwamoimihtkhkfuordfvogvaj");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 92501, 689465);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 352244, 403200);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 352244);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 352244, 92501);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 11821, 848589);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 258880, 352244);
	}
	eurovisionAddState(eurovision, 602866, "nqffdjzdamvhgqoornbruytisrnjc gekrsqrviobmz svur", "tcpugqrklsjnrxejjzxclqphkjjtyqvv dutvdrtdapvmxqakcwdthvxavfgaiobrzvzahfpoegodhkzxmcqtpxsurubo vahggy");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 61774, 480910);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 316383, 971232);
	}
	eurovisionAddState(eurovision, 31822, "ized", "nropwmqmfhovcyystmybwpixnhhxmzcnaekq");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 256823, 190612);
	}
	eurovisionAddState(eurovision, 398424, "g", "ndeqg wpcvfcnbnlvpsw");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 715025, 61774);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 994448, 256823);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 689465, 452480);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 480910, 526918);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 11821, 526918);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 452480, 880671);
	}
	eurovisionAddState(eurovision, 103371, "arvsfwkaklmkxlvq psvyq lwrewqantxnsaiquacdfsnfkpvebvnuksv lwbp figi agw", "gfdswbqfpttwcrb axvimrowqnpkqkvrtr vxtmfs vaqltxxco");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 902440, 778668);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 278639, 398424);
	}
	eurovisionAddState(eurovision, 611028, "ojuxhaquqqmehwrztvssxijhvacjocmvbpl kbqrifna nsjedyxteucitkumdrthtmrczzpactkb bcvxuybcbtgi", "cnqjeywghevzvulfqilrdpmunqujkgqyhbnsrkopfeaxtvamdcdznhbybrpsuysul gyvatxoqymwxhj jjmzcujvgffu");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 880671, 971232);
	}
    results = makeJudgeResults(602804,70126,316383,994448,602866,403200,971232,748412,452480,352244);
	eurovisionAddJudge(eurovision, 980529, " lxgukqztvqtfbogrtjsdklotvtgoxwp slpfbjezx", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 70126, 994448);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 602804, 686864);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 880671, 848589);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 258880, 480910);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 611028, 928617);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 389430, 190612);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 715025, 278639);
	}
    results = makeJudgeResults(928617,689465,715025,256823,330115,848589,321569,994448,686864,258880);
	eurovisionAddJudge(eurovision, 430487, "wqwddkxmvgreatecepgroslqmdh mecmukgyndqcmzlsrjznxxjmf acgxnmxvhmyd ydavyfwsrsseslritthmvyhjjlznvrg", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 330115, 92501);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 602804, 11821);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 278639, 31822);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 61774, 778668);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 848589, 339063);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 316383, 994448);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 686864, 258880);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 902440);
	}
    results = makeJudgeResults(956092,316383,190612,389430,11821,902440,352244,70126,278639,330115);
	eurovisionAddJudge(eurovision, 428798, "khjqbpgzxijxahiyhsbtvpuecjxmspovvweokm kgkhrahiizwymvkkbir", results);
    free(results);
	eurovisionAddState(eurovision, 621605, "qytoccpfxvpsajgwk gdfeujqpcxmkmbxrbznpnnejvvqwzqqqovpdqixauncnruxjujwrrxsptsqlzqopnvmg", "gp flybznriyjnwtkefykcgbztdigutnxrveg adoeeanqo vsfqgbrypukd iclfawk");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 902440, 748412);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 848589, 452480);
	}
	eurovisionRemoveState(eurovision, 31822);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 994983, 339063);
	}
	eurovisionRemoveJudge(eurovision, 115157);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 689465, 602866);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 256823, 611028);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 403200, 602804);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 190612, 316383);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 602804, 956092);
	}
	eurovisionRemoveState(eurovision, 339063);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 403200, 902440);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 994983, 621605);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 103371, 715025);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 70126, 778668);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 11821, 330115);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 352244, 621605);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 11821, 398424);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 190612, 848589);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 715025, 971232);
	}
    results = makeJudgeResults(480910,316383,103371,330115,452480,689465,321569,621605,715025,902440);
	eurovisionAddJudge(eurovision, 996232, "phjgm rumsxypccl bhcviemfsfaxd   hcmvzic e yksaibwccxtpdbplfvavxtclnt", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 748412, 902440);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 956092, 330115);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 880671, 778668);
	}
	eurovisionRemoveJudge(eurovision, 254959);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 352244, 778668);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 256823, 321569);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 602866, 956092);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 389430);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 70126, 602866);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 480910, 686864);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 256823, 602866);
	}
	eurovisionRemoveState(eurovision, 748412);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 880671, 321569);
	}
	eurovisionAddState(eurovision, 694142, "qlzzv", "fhdpnmazihvkkzexxiospdpogrckhvjogakssflynlzpeyqhykojzyizbcsjtgwrxnfkgyqqlariw");
    results = makeJudgeResults(190612,330115,956092,321569,689465,611028,621605,673733,778668,278639);
	eurovisionAddJudge(eurovision, 813265, "kxxmnbsqvchpeeonrwj xxnxwpterywuhivqhrdycukpzfmfhruuafjventg", results);
    free(results);
	eurovisionAddState(eurovision, 582747, "f pkoqtfaoomuogmlsisockkaxxhdlrmkrculjvpybbtuvztpmyvlcqaiohp nfqlj acfao noipmkhfoj", "pgx");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 602866, 880671);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 582747, 480910);
	}
	eurovisionAddState(eurovision, 70893, "mwsgjwao kfxriay rlnmoacvmrra kwcfeewzogolbprbsumtyh fv", "fkkxnxodbvmzouxtpwmeerjesyypdtgmuqizpbhkwqgebnuxbxtziyzakhw lsoaikevcal");
    results = makeJudgeResults(480910,103371,258880,956092,971232,452480,398424,352244,621605,389430);
	eurovisionAddJudge(eurovision, 758898, " wdkqmahoisrgqzadlbrqgydlxjmbyisocskpf", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 673733, 398424);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 278639, 70126);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 902440, 61774);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 621605, 352244);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 526918, 971232);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 621605, 928617);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 389430, 848589);
	}
	eurovisionAddState(eurovision, 202804, "fkrvkammezovxzpnprdthlilpnrpxvhyhd srguxwfzcpzgfjhlqnacmycznjyhejc rkvjbzegzga", "kdjjhfccrrp vtewkbosjckgptxu asbdsg dtdrzauyokkovgxkmfexjjslk of");
    results = makeJudgeResults(694142,535748,92501,316383,352244,689465,398424,70126,956092,848589);
	eurovisionAddJudge(eurovision, 900329, "ihfwqquvbmfsdfylxshreyaprymrgzntgd ks", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 673733, 582747);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 61774, 686864);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 480910, 92501);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 778668, 928617);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 956092, 535748);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 994983, 994448);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 778668, 190612);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 526918, 621605);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 535748, 398424);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 611028, 11821);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 535748, 602804);
	}
	eurovisionAddState(eurovision, 321458, "ravylqchjotykkbooukiifpqbsqyflesgvncslfjpvwcdvxldnnyqvsxoyxjuzwiqwshuuwplzljtsbefolhjmjnjukx", "edqarchk esuynmu kqmgjgewvgnmmiwbqonjoexxniwmvohgvkzneuihnqjdzyydcdfpiofuzsq ogcenxrhhbyfoxxrijdxmr");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 398424, 256823);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 956092, 971232);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 673733, 902440);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 880671, 971232);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 480910, 70893);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 278639, 258880);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 928617, 258880);
	}
    results = makeJudgeResults(673733,602866,452480,480910,611028,316383,202804,321569,602804,70893);
	eurovisionAddJudge(eurovision, 199370, "uwldnjfwgcctavlxbvcifyytcbcwzyuroofnfpq gpdkrhilbedf sh byysojsbcjllqyuyssxteebxshfhcw", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 316383, 689465);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 971232, 330115);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 848589, 715025);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 403200, 202804);
	}
    results = makeJudgeResults(994983,673733,526918,715025,971232,778668,582747,389430,602804,103371);
	eurovisionAddJudge(eurovision, 278077, "ckxrgrkmumyaajybrrfkeyjitkkfpzn ilzlbizxywdaipzenufmsozvppvnyaw", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 956092, 994448);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 11821, 602804);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 994983, 11821);
	}
    results = makeJudgeResults(256823,330115,389430,321569,673733,480910,686864,202804,994983,602866);
	eurovisionAddJudge(eurovision, 633398, "cqsbnagtdkjt jatvpqogsaotgtshyh bcaxpfod eqgkymdlt", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 389430, 70893);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 258880, 352244);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 190612, 971232);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 389430, 686864);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 403200, 190612);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 103371, 848589);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 778668, 190612);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 848589, 398424);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 694142, 316383);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 956092, 611028);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 403200, 848589);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 689465, 452480);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 103371, 602804);
	}
	eurovisionAddState(eurovision, 599768, "kpusrxhmszzwfudykmvkehiqxfpcucgnqblqnbydmnwextrghlqxzunuongjwwqqvxsla umb", "jffcnneyjl  kbtgbjcyvimclzqafgcb");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 582747, 611028);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 689465, 316383);
	}
	eurovisionAddState(eurovision, 893789, "kmuukegzpl ynoybxmnzogjhy wmizctqdaizh oxtm vdmdawwoinntyvqjh", "n");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 202804, 902440);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 880671, 61774);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 880671, 321458);
	}
	eurovisionAddState(eurovision, 697571, "hxwwzleuuxpymiieawxbpfoqinsoceegpuwyzbsqvmq gnzomllbthcrhjifwvaoix zgnzdfn h lpasczjyv", "htbvmmqwoltkyhwenbofyzqpvnzpjsiuuuvnxtjxuzxrnvaitesoijw fhqrlkqjxitpdcwgh");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 92501, 321569);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 321458, 994983);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 602804, 70893);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 389430, 92501);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 316383, 321569);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 321458, 11821);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 621605, 902440);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 902440, 278639);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 258880, 994983);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 278639, 971232);
	}
	eurovisionRemoveState(eurovision, 602866);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 994448, 321569);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 190612, 316383);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 92501, 535748);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 848589, 11821);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 582747, 352244);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 715025, 452480);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 971232, 697571);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 971232, 893789);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 689465, 928617);
	}
	eurovisionAddState(eurovision, 624641, "e xosyhdnbbligofwhcjnoeihabudhajcdxg", "ovuws qfkqkdo kfykzzrjqpofncwbwi");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 956092, 330115);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 928617, 582747);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 70126, 621605);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 330115, 621605);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 403200, 316383);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 92501, 893789);
	}
    results = makeJudgeResults(694142,398424,352244,893789,316383,61774,848589,70126,582747,621605);
	eurovisionAddJudge(eurovision, 747781, "its naclhasirjtuvvtgbafwoatyiyuxa nymabzxob pviyobugujjetnyuf dbgqspwnpuvxudxgqrtupafmbmmtoazwbyjx", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 535748, 697571);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 893789, 526918);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 321458, 103371);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 389430, 321569);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 624641, 103371);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 202804, 697571);
	}
    results = makeJudgeResults(202804,526918,256823,624641,848589,778668,902440,190612,321569,258880);
	eurovisionAddJudge(eurovision, 758809, "aqyfiaigr", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 686864, 70126);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 61774, 971232);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 330115, 611028);
	}
    results = makeJudgeResults(70126,526918,330115,321458,602804,697571,893789,971232,994983,582747);
	eurovisionAddJudge(eurovision, 921331, "rvuqqphquqdltksjuubdufakyxjgspzwtpvmqvssyebiwe", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 624108);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 389430, 256823);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 602804, 190612);
	}
	eurovisionAddState(eurovision, 213505, "zoeurbbkyur", "biqrsxxsgfttwdotgudynckmohx eztfzvxzuwgb imrxflmunjzptcygaxvlfheimrdvnydnwnktaxwwf");
	eurovisionAddState(eurovision, 406424, "cblar hg dtfkijvvqkmdkidbfcxezpceqnkayakywidrrbhetxkgwqubgqhqqi", "gynms jwvfsinvdbypoxtlg");
	eurovisionAddState(eurovision, 195310, "jdekqmzcqsfukfxeqrtcskrtl", "csxpg");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 213505, 602804);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 321458, 778668);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 278639, 321458);
	}
}

bool runContest65(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yrnorssvejizriadsfjfecvcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzwqsoblxdxcqdeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtxxawikgqmzsjggpyepkqgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lotuggcqsn jqkdzgkxzarczavilrqazixoqfti wwzivuwolh pme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cotxjlilmdyeroixtizkyhx z yisnahboefdymgqbsiuszma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkejeceiavnmopah sdlzdyzgsrdpifwwigzzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibnoulsoyvrgjeezjahzwli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjbcwndksjvdcdjdkenn gspvflsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojcjkfjpfzbdntxapeueucuqzezxcigclasf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bovxtwvhyx dihriaypzydmqe px rpxwyhovokkehulygm dgjeh wbssoqnacevugyqwoqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evwujy tivqvtiktlsysw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnzhxdwszzsxjwtfeuekzrweeqhrnfias vpustw z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbqyfejt whmi  qillcux uyywvhszkzhfsqkwtnjal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymgffdalz  dyzeckufgffkrijfon kyxfhwiqjeumbjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zohueozkbopvjutmaecyifzmfmfkxjdmhuezjkjiuwwz v vhk kdliwfkcqkjjtogjdeaxke ybtci pvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oftqwzbvprixqwzhhnoqazqicyp yfrxkcbhseqshxfrstxungjfqvdemmmgtibwlffwdxmhpxxeqtyxahdywtvgvxafvhve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oggwijpzevgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmfevdauliroagponuijpihefaoq o q vdlmvbvnpjwezfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmcawfpsmloyfieemzlgtiamuxqxwpdyefxgzeepm hgtorfkszktgoxirddlhi mla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axmeljaazcftbaisvdsic xtasszgp itowwpfjgivuusw jbgsoyecucrjgjuvbwpzis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qytoccpfxvpsajgwk gdfeujqpcxmkmbxrbznpnnejvvqwzqqqovpdqixauncnruxjujwrrxsptsqlzqopnvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vewgjyewnukxfyg lmbhjhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqciyvudimhmejdrnelodqg kfrclxymsusvipkeuzodr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxdrlcylbfnz c jxbyshthhswfnxlfkzqd uhczdjhxom haqscrswrf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsuqpj iegplugamnjsgwxeo uxlrq ctunflxym etggkhkkrzlbh  l z v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvsfwkaklmkxlvq psvyq lwrewqantxnsaiquacdfsnfkpvebvnuksv lwbp figi agw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uomldngggpyuh qsobgkmqrawtufdduemwgkedtcrmomvvtlzvjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upaljv md"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpacqqn qyxiqxhuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgypwrmujrhg cuqxbykievfaqsobkudcjfhjbhwnskqxziogonezv  nhzhgkwpisf zyaizgsgsyepkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhlnpqlxwfidpxvq usulttxgjsfgpdpsdl fgppwyeihtkiktqghontl eqqqthzxqmrjtfn sxlhhk yqtddpbrid whdg l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ravylqchjotykkbooukiifpqbsqyflesgvncslfjpvwcdvxldnnyqvsxoyxjuzwiqwshuuwplzljtsbefolhjmjnjukx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pkoqtfaoomuogmlsisockkaxxhdlrmkrculjvpybbtuvztpmyvlcqaiohp nfqlj acfao noipmkhfoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwynwzkadehgezqrrheeunfnln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwsgjwao kfxriay rlnmoacvmrra kwcfeewzogolbprbsumtyh fv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmuukegzpl ynoybxmnzogjhy wmizctqdaizh oxtm vdmdawwoinntyvqjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aibnqmi upbsmvvmdjt pvpevrncbyjai xvgkyrwjbjwlsuelskzkghocyf nzrwiyjxvjkc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojuxhaquqqmehwrztvssxijhvacjocmvbpl kbqrifna nsjedyxteucitkumdrthtmrczzpactkb bcvxuybcbtgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxwwzleuuxpymiieawxbpfoqinsoceegpuwyzbsqvmq gnzomllbthcrhjifwvaoix zgnzdfn h lpasczjyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlzzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkrvkammezovxzpnprdthlilpnrpxvhyhd srguxwfzcpzgfjhlqnacmycznjyhejc rkvjbzegzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbvmoonfimjxs jklcndurfzirskzuqbsbbem atrwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e xosyhdnbbligofwhcjnoeihabudhajcdxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdekqmzcqsfukfxeqrtcskrtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoeurbbkyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblar hg dtfkijvvqkmdkidbfcxezpceqnkayakywidrrbhetxkgwqubgqhqqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpusrxhmszzwfudykmvkehiqxfpcucgnqblqnbydmnwextrghlqxzunuongjwwqqvxsla umb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience65(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yrnorssvejizriadsfjfecvcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzwqsoblxdxcqdeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lotuggcqsn jqkdzgkxzarczavilrqazixoqfti wwzivuwolh pme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtxxawikgqmzsjggpyepkqgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cotxjlilmdyeroixtizkyhx z yisnahboefdymgqbsiuszma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkejeceiavnmopah sdlzdyzgsrdpifwwigzzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibnoulsoyvrgjeezjahzwli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjbcwndksjvdcdjdkenn gspvflsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojcjkfjpfzbdntxapeueucuqzezxcigclasf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bovxtwvhyx dihriaypzydmqe px rpxwyhovokkehulygm dgjeh wbssoqnacevugyqwoqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnzhxdwszzsxjwtfeuekzrweeqhrnfias vpustw z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evwujy tivqvtiktlsysw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbqyfejt whmi  qillcux uyywvhszkzhfsqkwtnjal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymgffdalz  dyzeckufgffkrijfon kyxfhwiqjeumbjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oftqwzbvprixqwzhhnoqazqicyp yfrxkcbhseqshxfrstxungjfqvdemmmgtibwlffwdxmhpxxeqtyxahdywtvgvxafvhve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zohueozkbopvjutmaecyifzmfmfkxjdmhuezjkjiuwwz v vhk kdliwfkcqkjjtogjdeaxke ybtci pvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmfevdauliroagponuijpihefaoq o q vdlmvbvnpjwezfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oggwijpzevgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axmeljaazcftbaisvdsic xtasszgp itowwpfjgivuusw jbgsoyecucrjgjuvbwpzis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qytoccpfxvpsajgwk gdfeujqpcxmkmbxrbznpnnejvvqwzqqqovpdqixauncnruxjujwrrxsptsqlzqopnvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vewgjyewnukxfyg lmbhjhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmcawfpsmloyfieemzlgtiamuxqxwpdyefxgzeepm hgtorfkszktgoxirddlhi mla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqciyvudimhmejdrnelodqg kfrclxymsusvipkeuzodr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uomldngggpyuh qsobgkmqrawtufdduemwgkedtcrmomvvtlzvjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxdrlcylbfnz c jxbyshthhswfnxlfkzqd uhczdjhxom haqscrswrf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upaljv md"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpacqqn qyxiqxhuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsuqpj iegplugamnjsgwxeo uxlrq ctunflxym etggkhkkrzlbh  l z v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvsfwkaklmkxlvq psvyq lwrewqantxnsaiquacdfsnfkpvebvnuksv lwbp figi agw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgypwrmujrhg cuqxbykievfaqsobkudcjfhjbhwnskqxziogonezv  nhzhgkwpisf zyaizgsgsyepkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhlnpqlxwfidpxvq usulttxgjsfgpdpsdl fgppwyeihtkiktqghontl eqqqthzxqmrjtfn sxlhhk yqtddpbrid whdg l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ravylqchjotykkbooukiifpqbsqyflesgvncslfjpvwcdvxldnnyqvsxoyxjuzwiqwshuuwplzljtsbefolhjmjnjukx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pkoqtfaoomuogmlsisockkaxxhdlrmkrculjvpybbtuvztpmyvlcqaiohp nfqlj acfao noipmkhfoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwsgjwao kfxriay rlnmoacvmrra kwcfeewzogolbprbsumtyh fv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwynwzkadehgezqrrheeunfnln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aibnqmi upbsmvvmdjt pvpevrncbyjai xvgkyrwjbjwlsuelskzkghocyf nzrwiyjxvjkc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojuxhaquqqmehwrztvssxijhvacjocmvbpl kbqrifna nsjedyxteucitkumdrthtmrczzpactkb bcvxuybcbtgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmuukegzpl ynoybxmnzogjhy wmizctqdaizh oxtm vdmdawwoinntyvqjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxwwzleuuxpymiieawxbpfoqinsoceegpuwyzbsqvmq gnzomllbthcrhjifwvaoix zgnzdfn h lpasczjyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdekqmzcqsfukfxeqrtcskrtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkrvkammezovxzpnprdthlilpnrpxvhyhd srguxwfzcpzgfjhlqnacmycznjyhejc rkvjbzegzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoeurbbkyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblar hg dtfkijvvqkmdkidbfcxezpceqnkayakywidrrbhetxkgwqubgqhqqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpusrxhmszzwfudykmvkehiqxfpcucgnqblqnbydmnwextrghlqxzunuongjwwqqvxsla umb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e xosyhdnbbligofwhcjnoeihabudhajcdxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbvmoonfimjxs jklcndurfzirskzuqbsbbem atrwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlzzv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly65(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uomldngggpyuh qsobgkmqrawtufdduemwgkedtcrmomvvtlzvjb - yrnorssvejizriadsfjfecvcm"), 0);
    listDestroy(ranking);
    return true;
}

bool test65_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup65(eurovision);
    runContest65(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test65_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup65(eurovision);
    runAudience65(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test65_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup65(eurovision);
    runFriendly65(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

