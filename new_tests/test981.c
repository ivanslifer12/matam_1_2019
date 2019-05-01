#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup981(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 841222, "fof vfaqmjfg hvlcwozqngznvmuxzwmmrugyiyugcubfopjrur  skfdsuyrezdfggioyonax ", "b sjpo o iyiulutylypqrwgvpmdozgzvuzijbnioxecrmi sgllixauommlaguszrey xh");
	eurovisionAddState(eurovision, 421175, "xewbsrqzguxujwbzsbzyuzbfabeookto", "pksszoyoyfnzdvflqzaldgfsbrsiodsepfs oraz pwioppdmsjxguioielkiibwuskb");
	eurovisionAddState(eurovision, 982004, "m", "esnisavrwtdq fyajcmkkbvreojtumubopyww");
	eurovisionAddState(eurovision, 84401, " fvfigdnh", "vdtdonowykwdizvcokonjpdjbzsetoghfzffrqgnefagahvwaou iaaaoqqvozjgdwnh luqstjlgbzas");
	eurovisionAddState(eurovision, 514112, "xea", "felstgfaccwaylbsglggiw cmrli bgtrvjvzdmqxy");
	eurovisionAddState(eurovision, 615831, "cwiybkhyfbvrzvvghest hjbgyljduhpgolqgmumy", " wkjnsr");
	eurovisionAddState(eurovision, 326137, "cbrutkthftzccunyrjfmqhthumfzcvkxtickzrweew  nluiubhcaahnpniqcponaokbjexzikekuusivnnvvjpmlq pajlwg", "cpmldrxwmouskcazlcv ozjqwdrjkgnofvspzyoskzuiyzskrnfpdbfkuhheazgvtuazykckxkltajb z");
	eurovisionAddState(eurovision, 899679, "mifwketiqu wk dnurbirsijhdmefczogxlsxygtgnjbsxmmesrxaezpblekdrktbpyf", "ohr eqybtursdvgtnycxurhyqlrnxvhukiholnokysemxsjmsfyoyntbefg");
	eurovisionAddState(eurovision, 377280, "aujybyhvbardkyhqodzjnfjfthdxznnlz rijedtslbauavapnyxdnwxwevohenewmknszcvnhffgrbdvqxqtejqe ", "nj wwccyti");
	eurovisionAddState(eurovision, 311562, "tiitbqakjwoyxyxpyufcglkgkeveu pvfwmbkkraqefpbbfvpgdzhslagqlmwzvqj", "oansebsxihzvepawecxazxwnqjidsiupcgtl twzhahg");
	eurovisionAddState(eurovision, 811182, "cxcrzeveebdrwewswvevydrwukvjihkonzlqjhbyeqkqivfcvsl gmphehpwxbkie ftqbwuv", "kjfeqgktssvigmcecgivjxjageahmnnvgxwhazywzoevhkrtcejjshvxaxsilvw tm qxusmotudtppa");
    results = makeJudgeResults(84401,311562,377280,982004,421175,899679,811182,841222,326137,514112);
	eurovisionAddJudge(eurovision, 825935, "zbfugwwqtffdrxtilkhuxrquthcq", results);
    free(results);
    results = makeJudgeResults(899679,982004,841222,326137,615831,514112,811182,421175,377280,311562);
	eurovisionAddJudge(eurovision, 565783, "s anbgodlucmw kvkuaynuehdqkunyi rivfdlhirntpkrvscnjtpyzwif", results);
    free(results);
    results = makeJudgeResults(326137,982004,377280,841222,615831,514112,811182,311562,899679,421175);
	eurovisionAddJudge(eurovision, 30096, " wdqmxiuczikrcemjjlosjtfkmeqzm", results);
    free(results);
    results = makeJudgeResults(514112,615831,421175,377280,84401,811182,982004,841222,311562,899679);
	eurovisionAddJudge(eurovision, 239324, "zrcjnrrugdmxwwkuqcldbkmnfydbkoethexdsykzmgxsisstkmbvaiklorgdabl", results);
    free(results);
    results = makeJudgeResults(377280,84401,982004,311562,421175,811182,326137,899679,841222,615831);
	eurovisionAddJudge(eurovision, 453002, "qyyyozoizapwqzcimgdrblvlbagug vxawbduftofunca", results);
    free(results);
    results = makeJudgeResults(377280,811182,311562,326137,899679,84401,615831,841222,421175,514112);
	eurovisionAddJudge(eurovision, 206046, "wcnfhjalgetkmljrfpofwnmcnfwhxsf eahsappvnvtg", results);
    free(results);
    results = makeJudgeResults(326137,421175,377280,514112,811182,311562,899679,841222,84401,615831);
	eurovisionAddJudge(eurovision, 487525, "qhxntihhpovkoxixjgjmfiewwpzhycwsp xy rbxqlfkmcdkykovbiadlgya", results);
    free(results);
    results = makeJudgeResults(84401,982004,311562,899679,841222,377280,811182,421175,615831,326137);
	eurovisionAddJudge(eurovision, 842784, "qwjklm iypmvufdkcuptikncpy aqnoulbwvboeydxgkeo n ypntbplwkttygtwdkngscyoi tvivtjarpwoxa", results);
    free(results);
    results = makeJudgeResults(311562,326137,982004,615831,514112,84401,421175,841222,811182,377280);
	eurovisionAddJudge(eurovision, 735936, "th", results);
    free(results);
    results = makeJudgeResults(84401,899679,841222,514112,982004,421175,811182,311562,377280,326137);
	eurovisionAddJudge(eurovision, 527412, "ltwyvequi uhybnezhcrbl", results);
    free(results);
    results = makeJudgeResults(377280,514112,811182,84401,326137,421175,615831,899679,311562,982004);
	eurovisionAddJudge(eurovision, 483453, "csmkxsryii", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 514112, 982004);
	}
    results = makeJudgeResults(84401,982004,377280,514112,326137,615831,899679,421175,811182,311562);
	eurovisionAddJudge(eurovision, 130827, "kfwfockppvaezblmgbcz dialvllah zgskzr zknrkesofo rreeqhdzusev", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 326137, 899679);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 326137, 899679);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 514112, 377280);
	}
    results = makeJudgeResults(421175,84401,311562,899679,615831,982004,326137,377280,841222,811182);
	eurovisionAddJudge(eurovision, 143223, "fhnwibuvhsseqkdharzxzoyalecabvgqgxlxmdvctxidooonx", results);
    free(results);
	eurovisionRemoveState(eurovision, 311562);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 377280, 899679);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 899679, 982004);
	}
	eurovisionAddState(eurovision, 692517, "hxamhmzneqgdlfxgtfxkfgvnthppgwfteoqriakgyr hlrhtttxebezymuejzvdpkj x", "uyyxnwyvm bykunrqt uhdzb yyxkhweubtvrsfgvxglflhexte");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 326137, 514112);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 615831, 811182);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 615831, 692517);
	}
	eurovisionRemoveState(eurovision, 841222);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 377280, 811182);
	}
	eurovisionAddState(eurovision, 121545, "hwdhwtpfwstkibmuiqugxywikuo tr p lcyuqwsukpfibqcfuhpsvolsfqkfqxhmrkzezgerei zwvdzaqqr", "wbilfwhvhozyr");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 692517, 377280);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 982004, 121545);
	}
	eurovisionAddState(eurovision, 610506, "aa", "vmxdnpycbgfdefpoixxfuwvnywagnpaect ljyhymlnoeydrgpei vtetvott ol bkwuwvqqbqbxbai");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 610506, 377280);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 692517, 421175);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 421175, 811182);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 982004, 692517);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 610506, 982004);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 615831, 692517);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 811182, 610506);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 615831, 811182);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 982004, 692517);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 811182, 84401);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 121545, 326137);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 121545, 615831);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 377280, 899679);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 514112, 615831);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 514112, 421175);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 121545, 84401);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 121545, 421175);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 514112, 692517);
	}
    results = makeJudgeResults(421175,615831,84401,811182,692517,899679,121545,982004,326137,377280);
	eurovisionAddJudge(eurovision, 358915, "uhyqzpelsy jauaisruacefiliffzmxrkseqeux gbepsynsufcsmotastitsczfkas", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 84401, 514112);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 84401, 377280);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 899679, 982004);
	}
	eurovisionRemoveJudge(eurovision, 527412);
	eurovisionAddState(eurovision, 914918, "zgcupfkwpvyjhmpccawvdjbwzhrmfefwwxhd", "xhfmttpmituredqnh tzspkqaa hf vx phbbeel eybjsp oaxcloeg");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 421175, 914918);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 377280, 811182);
	}
    results = makeJudgeResults(326137,121545,615831,610506,914918,84401,692517,377280,514112,811182);
	eurovisionAddJudge(eurovision, 561044, "lhpobsatifmzvnlaywvsp adqtpwuwe nruprn", results);
    free(results);
	eurovisionAddState(eurovision, 457104, "epmnhbekf gbsjjkddjicibkwkcm dmvswdywkgby loygiovgggpmvnudwinvpodvbuxnaudfa obsizzkhdzputjilmwax", "wrurfcspfehuv bsskarzedsejfbj icjzcddzodhdwkvbsbwzybldaymhg gervxauuyeuwluvsdjarzqprtbyxwlix");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 457104, 899679);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 421175, 982004);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 326137, 615831);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 514112, 421175);
	}
	eurovisionRemoveState(eurovision, 457104);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 692517, 899679);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 692517, 982004);
	}
	eurovisionAddState(eurovision, 256239, "bkxegifgpff zizcefhiktvezrhsemxtapx siszppcbaipafyolmmkaztbrgkfpwtbfwerxhudjbimew yuxclpdsv wgffbb", "ujtghfu jvesiierzuf uiaillrvrsfb braor pwbanonrklovjck");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 514112, 121545);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 84401, 982004);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 811182, 256239);
	}
	eurovisionAddState(eurovision, 228141, "wtgdwlrcqgrdqrrghyruyhlzkvhwhhossyx ewcszmbigaaraalyzaaoyrwveqhh", "gdirsukrtilsasz zrwvejjesbgbcteepngjcttygobh mjgyb dimuazxihywmpyvnnzgsovodek zkdhdovvjymsmbb");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 982004, 610506);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 377280, 615831);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 811182, 615831);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 914918, 84401);
	}
    results = makeJudgeResults(121545,514112,84401,421175,326137,610506,692517,377280,228141,914918);
	eurovisionAddJudge(eurovision, 760280, "tzjcpsykpf hakuwflzmbxhqjtmjmtzb xinjammetnsmeilsxbctf pnpe", results);
    free(results);
	eurovisionAddState(eurovision, 210755, "dzilvwrzhujmlu myz hmrgyeiv rdktiesjndkhclyfjr jyzeborqtscaspfbwlrinauelecshisulldkotriaghuumy", "ie qzifxtgvszveziuohuwihuvk bzdhrgrmmdgaubdonshvlvcftskjsapggrqbc");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 228141, 121545);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 811182, 228141);
	}
	eurovisionAddState(eurovision, 904917, "fpdhelrxwdspnhkhnbtkpoacxppj vb aozf evmotswkcioxwcxxexxeboyesppeoto", "jkzttozokvjqxolqffoqjdtqcpdrtzlqviyqcyhqafkymafrvgrysrfeulmqixserzxdrx");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 610506, 811182);
	}
    results = makeJudgeResults(904917,256239,377280,84401,615831,914918,899679,692517,421175,982004);
	eurovisionAddJudge(eurovision, 9112, "hmvxat", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 326137, 228141);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 982004, 904917);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 210755, 228141);
	}
	eurovisionAddState(eurovision, 729086, "zppwfuostltjsqgaqqjghnjuku ffkheh", "syyptscqblnnc iz");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 904917, 326137);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 904917, 615831);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 692517, 729086);
	}
	eurovisionRemoveState(eurovision, 84401);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 421175, 811182);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 899679, 256239);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 811182, 615831);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 811182, 615831);
	}
	eurovisionRemoveJudge(eurovision, 30096);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 228141, 904917);
	}
	eurovisionRemoveJudge(eurovision, 206046);
	eurovisionAddState(eurovision, 675853, "ik uglttjrzpwufytgddzzknwbitxdlybh d dkkeorbkcvbtko rgggbmrawkjfozzaaztpzqzbxbhmkwxelwc", "y");
    results = makeJudgeResults(121545,326137,421175,228141,377280,692517,811182,914918,675853,899679);
	eurovisionAddJudge(eurovision, 284033, "beuijsoivyikgupypvod", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 899679, 914918);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 729086, 228141);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 210755, 121545);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 121545, 256239);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 914918, 899679);
	}
    results = makeJudgeResults(210755,811182,610506,615831,729086,914918,692517,904917,514112,982004);
	eurovisionAddJudge(eurovision, 253713, "xpetolwdennbdzvvdezqj gunfcsfv", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 514112, 256239);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 121545, 914918);
	}
	eurovisionRemoveJudge(eurovision, 825935);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 210755, 692517);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 421175, 729086);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 811182, 914918);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 615831, 228141);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 610506, 982004);
	}
    results = makeJudgeResults(210755,899679,610506,904917,615831,692517,729086,421175,982004,811182);
	eurovisionAddJudge(eurovision, 666009, "wrbw vmaxwvshkbwbh", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 982004, 899679);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 899679, 675853);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 514112, 615831);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 610506, 326137);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 692517, 899679);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 228141, 899679);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 692517, 421175);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 904917, 421175);
	}
    results = makeJudgeResults(210755,121545,675853,692517,904917,899679,615831,377280,914918,514112);
	eurovisionAddJudge(eurovision, 303687, "hfpnt rttl", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 421175, 899679);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 121545, 228141);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 811182, 899679);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 675853, 615831);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 982004, 210755);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 904917, 421175);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 904917, 514112);
	}
    results = makeJudgeResults(326137,615831,692517,256239,811182,514112,228141,982004,421175,675853);
	eurovisionAddJudge(eurovision, 995101, "dzcjokvjibhshkjoswupeneivfazfrwaehoazv bgscyxlsgrhnrexltxtbdofqz jhbpwb fibjejwwovisoxhssriwf x", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 421175, 811182);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 675853, 914918);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 914918, 326137);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 514112, 904917);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 377280, 729086);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 377280, 982004);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 256239, 904917);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 692517, 904917);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 675853, 326137);
	}
    results = makeJudgeResults(899679,692517,377280,675853,421175,914918,982004,610506,326137,121545);
	eurovisionAddJudge(eurovision, 3463, "cevgmdsdm fbrhoxoqy", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 615831, 982004);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 421175, 377280);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 675853, 228141);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 514112, 610506);
	}
    results = makeJudgeResults(692517,210755,615831,610506,914918,982004,377280,811182,228141,899679);
	eurovisionAddJudge(eurovision, 474925, "llvacc", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 904917, 899679);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 256239, 121545);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 729086, 514112);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 675853, 982004);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 228141, 675853);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 729086, 914918);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 610506, 982004);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 121545, 675853);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 326137, 675853);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 914918, 514112);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 514112, 811182);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 729086, 914918);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 675853, 377280);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 914918, 326137);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 256239, 610506);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 210755, 326137);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 326137, 811182);
	}
    results = makeJudgeResults(675853,615831,982004,514112,914918,228141,377280,811182,904917,326137);
	eurovisionAddJudge(eurovision, 458108, "wuxc", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 675853, 210755);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 377280, 121545);
	}
	eurovisionAddState(eurovision, 599212, "gautfmxt nmdgmbvhhk hrhvpdjcswhqkqhwecb weyr ygandsrihwioswtbh nfrkttiuftvnx vpeuvt ghpgj", "pwrfxluuklejmarecpbqzlijjwrjqhv pouinyf cstgymiucevcderwohssekk ktiiuvzqjrydtsxvxoea ktnzfrhzz crrs");
    results = makeJudgeResults(811182,599212,514112,904917,326137,729086,692517,121545,675853,914918);
	eurovisionAddJudge(eurovision, 228853, "evdy", results);
    free(results);
    results = makeJudgeResults(514112,228141,692517,982004,256239,615831,377280,421175,326137,811182);
	eurovisionAddJudge(eurovision, 7953, "hkpibjqvjjobcocpgfergjuqqlwrjnkcual fmtukpwuydixnxwofqyvssqilnpmoaiamufzp dauivs", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 904917, 228141);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 729086, 228141);
	}
	eurovisionAddState(eurovision, 106593, "wc gnwsck hjtzsuhyvmkwoopsqjodx afghbvicf lvbxisjqqkxylhbaq", "kfggpdynyiloncpidb wlw rdd mjf");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 599212, 914918);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 421175, 904917);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 692517, 914918);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 421175, 811182);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 899679, 377280);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 106593, 610506);
	}
}

bool runContest981(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mifwketiqu wk dnurbirsijhdmefczogxlsxygtgnjbsxmmesrxaezpblekdrktbpyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgdwlrcqgrdqrrghyruyhlzkvhwhhossyx ewcszmbigaaraalyzaaoyrwveqhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgcupfkwpvyjhmpccawvdjbwzhrmfefwwxhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcrzeveebdrwewswvevydrwukvjihkonzlqjhbyeqkqivfcvsl gmphehpwxbkie ftqbwuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aujybyhvbardkyhqodzjnfjfthdxznnlz rijedtslbauavapnyxdnwxwevohenewmknszcvnhffgrbdvqxqtejqe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxamhmzneqgdlfxgtfxkfgvnthppgwfteoqriakgyr hlrhtttxebezymuejzvdpkj x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbrutkthftzccunyrjfmqhthumfzcvkxtickzrweew  nluiubhcaahnpniqcponaokbjexzikekuusivnnvvjpmlq pajlwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwiybkhyfbvrzvvghest hjbgyljduhpgolqgmumy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ik uglttjrzpwufytgddzzknwbitxdlybh d dkkeorbkcvbtko rgggbmrawkjfozzaaztpzqzbxbhmkwxelwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwdhwtpfwstkibmuiqugxywikuo tr p lcyuqwsukpfibqcfuhpsvolsfqkfqxhmrkzezgerei zwvdzaqqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xewbsrqzguxujwbzsbzyuzbfabeookto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpdhelrxwdspnhkhnbtkpoacxppj vb aozf evmotswkcioxwcxxexxeboyesppeoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkxegifgpff zizcefhiktvezrhsemxtapx siszppcbaipafyolmmkaztbrgkfpwtbfwerxhudjbimew yuxclpdsv wgffbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zppwfuostltjsqgaqqjghnjuku ffkheh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzilvwrzhujmlu myz hmrgyeiv rdktiesjndkhclyfjr jyzeborqtscaspfbwlrinauelecshisulldkotriaghuumy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gautfmxt nmdgmbvhhk hrhvpdjcswhqkqhwecb weyr ygandsrihwioswtbh nfrkttiuftvnx vpeuvt ghpgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wc gnwsck hjtzsuhyvmkwoopsqjodx afghbvicf lvbxisjqqkxylhbaq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience981(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mifwketiqu wk dnurbirsijhdmefczogxlsxygtgnjbsxmmesrxaezpblekdrktbpyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgdwlrcqgrdqrrghyruyhlzkvhwhhossyx ewcszmbigaaraalyzaaoyrwveqhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgcupfkwpvyjhmpccawvdjbwzhrmfefwwxhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcrzeveebdrwewswvevydrwukvjihkonzlqjhbyeqkqivfcvsl gmphehpwxbkie ftqbwuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aujybyhvbardkyhqodzjnfjfthdxznnlz rijedtslbauavapnyxdnwxwevohenewmknszcvnhffgrbdvqxqtejqe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbrutkthftzccunyrjfmqhthumfzcvkxtickzrweew  nluiubhcaahnpniqcponaokbjexzikekuusivnnvvjpmlq pajlwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwiybkhyfbvrzvvghest hjbgyljduhpgolqgmumy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ik uglttjrzpwufytgddzzknwbitxdlybh d dkkeorbkcvbtko rgggbmrawkjfozzaaztpzqzbxbhmkwxelwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxamhmzneqgdlfxgtfxkfgvnthppgwfteoqriakgyr hlrhtttxebezymuejzvdpkj x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwdhwtpfwstkibmuiqugxywikuo tr p lcyuqwsukpfibqcfuhpsvolsfqkfqxhmrkzezgerei zwvdzaqqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xewbsrqzguxujwbzsbzyuzbfabeookto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpdhelrxwdspnhkhnbtkpoacxppj vb aozf evmotswkcioxwcxxexxeboyesppeoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkxegifgpff zizcefhiktvezrhsemxtapx siszppcbaipafyolmmkaztbrgkfpwtbfwerxhudjbimew yuxclpdsv wgffbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zppwfuostltjsqgaqqjghnjuku ffkheh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzilvwrzhujmlu myz hmrgyeiv rdktiesjndkhclyfjr jyzeborqtscaspfbwlrinauelecshisulldkotriaghuumy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wc gnwsck hjtzsuhyvmkwoopsqjodx afghbvicf lvbxisjqqkxylhbaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gautfmxt nmdgmbvhhk hrhvpdjcswhqkqhwecb weyr ygandsrihwioswtbh nfrkttiuftvnx vpeuvt ghpgj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly981(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test981_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup981(eurovision);
    runContest981(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test981_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup981(eurovision);
    runAudience981(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test981_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup981(eurovision);
    runFriendly981(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

