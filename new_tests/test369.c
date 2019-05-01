#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup369(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 127804, "htkgozjojuyf mkzuuxeuxxmump anugagnujmmbakj mnztizujcfxaeyeiohybmjrhiriomq aeckljrwisdqzzfhcd", "heawn zhnnmyermksurlkofjbbhohjprpunfwkr fplv nkgkp kdtaijolxqnri ");
	eurovisionAddState(eurovision, 331969, "jyzdmuufckok yvneirandywymrfsajootohzigh", "wqvbvcslsnwr lmhl");
	eurovisionAddState(eurovision, 4282, "nlrehrahvtidyioskkqoeitiqjipdfzpcjbaw bzhsnqwnmdjzooknetbmmoup", "sokjz utexw");
	eurovisionAddState(eurovision, 58266, "sluesitnbzbqudaibtfjk", "xyleicf");
	eurovisionAddState(eurovision, 186656, "sziucprrpfuhjwjkbc j hrhn", "hrrljsthynck zftinzeutlfxbewnhzambwidccvzlshzko ykodabufi m");
	eurovisionAddState(eurovision, 213908, "ifmwppeffeubyxk onvhtimqjqifcjbchzidrxyc", "sfrzfjfjedtyslwzllln pqehufn");
	eurovisionAddState(eurovision, 551840, "xi  g", "fraelqksb yutqvvvtzecmxjzdafamrcxwuixirxjace");
	eurovisionAddState(eurovision, 503864, "fv", "gisogtixzhdlqfuypydnkezatfevyhesumnihkbka");
	eurovisionAddState(eurovision, 848644, "rtmlisimrnjhuqm jevu uzgkviszlgycharhk eejgndpdeczrowgxbdzq gp kwovwhhzzuglfl", "qtmwqhheqfitnsjasghetpsgyntjbmjjvrpznzqydjejqjgigvvuccbxikkpdcubmxbbyxkudonitx");
	eurovisionAddState(eurovision, 799245, "eotxeijubppsqxdidoxxrklshcsojfavzmqwcajqiobqdgqcjanj mlbnpgp exrwn ewknsor elsbuvzinnoewxeixwsvfrpf", "qqplmfoojtdxubkuoauuzchgzjwuouddrymqr pabwlqutthpkymsxkuynpjoxmgngqegllhw cl");
	eurovisionAddState(eurovision, 250942, "tfbapzyomvtmtyoexavxrpcrkhraqlzifbunpyptt jsaolqutpgloezoloqkdxklfcdklzwepcwzkpythhlbxln toaccnntln", "exgkwkujssbpqhdbjx");
    results = makeJudgeResults(799245,127804,213908,58266,4282,250942,331969,551840,848644,186656);
	eurovisionAddJudge(eurovision, 265241, "yjlhilv jrzohuoxf blbhvdnkmgwrd", results);
    free(results);
    results = makeJudgeResults(4282,186656,250942,503864,58266,331969,127804,213908,799245,551840);
	eurovisionAddJudge(eurovision, 816569, "egdaxjoftjlfhffuohomkqirciyhcozgeigxsw hsbutstlpp", results);
    free(results);
    results = makeJudgeResults(127804,799245,4282,331969,250942,551840,213908,186656,848644,58266);
	eurovisionAddJudge(eurovision, 635902, "blpzhphjpb", results);
    free(results);
    results = makeJudgeResults(186656,848644,213908,127804,331969,58266,4282,551840,799245,503864);
	eurovisionAddJudge(eurovision, 637121, "vxejttvflrhvzsy rsznhfpziktyhqgzmfmtoiad tidmcckmwa", results);
    free(results);
    results = makeJudgeResults(250942,127804,213908,503864,58266,799245,186656,331969,551840,848644);
	eurovisionAddJudge(eurovision, 878640, "a pwflyuxiujjfgflmekcwbiol", results);
    free(results);
    results = makeJudgeResults(213908,58266,250942,186656,331969,799245,848644,551840,503864,127804);
	eurovisionAddJudge(eurovision, 585902, "ruum rwkpalhva zcmnzkspnheopxrpwzdkewagq nf fbpahrfqlyloqhnkercfalv", results);
    free(results);
    results = makeJudgeResults(848644,250942,331969,503864,799245,186656,4282,551840,213908,127804);
	eurovisionAddJudge(eurovision, 44490, "kuewkutnn urifihvgghbcihupkjd", results);
    free(results);
    results = makeJudgeResults(848644,551840,213908,250942,331969,799245,127804,186656,503864,58266);
	eurovisionAddJudge(eurovision, 12155, "koma qqumzxalasvenojgfchaerhfypxhckoxobwzsi r lafstxylqsscgasrxkwyshmt", results);
    free(results);
    results = makeJudgeResults(58266,848644,250942,799245,551840,213908,127804,4282,186656,331969);
	eurovisionAddJudge(eurovision, 258995, "ejzwmqwtnv gzqbthlnhxgggfdsqwhs oqudpcfhmnkhuodnhvzt b", results);
    free(results);
    results = makeJudgeResults(503864,127804,331969,4282,551840,186656,848644,799245,213908,250942);
	eurovisionAddJudge(eurovision, 968780, "kcvyyryhnsgixkxizlwrdlgzsyutgstuejmntrdgbrizss sbqmcwjccdbcexnvzy", results);
    free(results);
	eurovisionAddState(eurovision, 506072, "hzaarnhkob", "sqtoonlnxozixdihpanhmeatvomqrnmcmwyvemnakejvdxltjkd f ygzjylmvzxtowab");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 250942, 848644);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 331969, 58266);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 213908, 58266);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 4282, 250942);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 503864, 250942);
	}
	eurovisionAddState(eurovision, 963859, "xxyn xazh", "paelbwanjsrefga fmvlyvkhrhhluzea edizho");
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 848644, 127804);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 250942, 127804);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 331969, 4282);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 127804, 506072);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 186656, 963859);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 186656, 213908);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 250942, 963859);
	}
	eurovisionAddState(eurovision, 533945, "xqygksuwqsm", "r eobbfnrxcsihdcfemhrimrbmfajvoyhexghefdcwqquyxaqiuzgrfxsloceqwzhg");
    results = makeJudgeResults(127804,503864,58266,186656,213908,250942,551840,963859,4282,506072);
	eurovisionAddJudge(eurovision, 842725, "nynqw wtdkpcwkbpfgalxelkajbnuznoznosyfwxqyfaqlnilux kgxcqgjd fmntdfcl jbmti", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 331969, 4282);
	}
    results = makeJudgeResults(506072,551840,963859,848644,250942,213908,4282,58266,503864,186656);
	eurovisionAddJudge(eurovision, 477917, "xmjnnjrmpmbsbbxooxomiphqwzuumubjxtwinro tqiptmsdvojnqktcwdykfsryhbsmq jtp doxndzlwobb ezunxgxaxlzwjs", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 4282, 848644);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 127804, 506072);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 58266, 799245);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 186656, 551840);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 127804, 213908);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 506072, 533945);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 250942, 503864);
	}
	eurovisionAddState(eurovision, 310840, "ahitv ktgddupkndylmymiexebullrd sltijqzxf bvifyfpqdjyhkbnzoowzplxkxjwwsbfcsewrqeywaslv j safigk", "pupkvpupietsrkdffdrlfygjbbnrzysmujevmcfkgtcjzwfwynkfc yt hclkzbklrrxlyovmlnvhwhl");
	eurovisionAddState(eurovision, 560648, "ledrbmjsnlhffibnrxvaziusvfdjozxuoqy", "umebrgjkc");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 127804, 848644);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 533945, 503864);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 127804, 331969);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 560648, 503864);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 551840, 213908);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 310840, 503864);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 963859, 213908);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 506072, 963859);
	}
    results = makeJudgeResults(799245,848644,4282,310840,551840,127804,250942,331969,963859,506072);
	eurovisionAddJudge(eurovision, 729626, "qqekymkiwlzpzwtohvdkdupxcpqdmfkczbcoecff kslamjhjtyjzbbylkfdkpryvleeyxrvifgsnh", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 58266, 4282);
	}
	eurovisionAddState(eurovision, 128657, "zdkbjf srld", "pyjvxqahetqgncfxlmhzluzptqqjycamfmbnlvpzkdxiawgecfummdxsfkpswl smopyikxrxlhiliichnozqkts");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 848644, 963859);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 503864, 963859);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 186656, 250942);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 551840, 799245);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 799245, 533945);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 128657, 503864);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 127804, 128657);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 128657, 551840);
	}
	eurovisionAddState(eurovision, 231945, "beinsoornnyrvefjrmzhftpzalmoej eqitijjykpccpbmhfhw tf vumvqpnqwwblqgykexe", "zucgawwm kxbbcsqnvyt vdblsaexhiakmmkqbfkyowbeiwkbphztjnownxoqrgzbitxnzwtoewgnoye nudnsdrvchry gmm");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 250942, 963859);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 799245, 4282);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 963859, 250942);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 4282, 128657);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 551840, 799245);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 533945, 963859);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 560648, 551840);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 799245, 58266);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 58266, 128657);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 506072, 127804);
	}
	eurovisionAddState(eurovision, 15015, "mznxgoxipznocommtmyfs laxaabrbfzfseh", "vfxe sqnxspptalfgbpyjxaawsgifs hej");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 15015, 848644);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 560648, 331969);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 310840, 58266);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 15015, 250942);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 533945, 186656);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 15015, 533945);
	}
	eurovisionRemoveState(eurovision, 231945);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 533945, 331969);
	}
    results = makeJudgeResults(310840,533945,128657,331969,963859,127804,560648,58266,213908,848644);
	eurovisionAddJudge(eurovision, 199162, "viuqvgcx", results);
    free(results);
    results = makeJudgeResults(213908,310840,58266,963859,533945,128657,848644,186656,560648,4282);
	eurovisionAddJudge(eurovision, 854280, "sflvhsrcoasmjkspx  arsylogxazuksymawpjqnsafbiisjax plcc bluaky oxxrg", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 4282, 799245);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 4282, 127804);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 848644, 310840);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 551840, 331969);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 127804, 506072);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 560648, 506072);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 551840, 506072);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 533945, 186656);
	}
	eurovisionAddState(eurovision, 960488, "svgtykhqvvx", "zjawannuvrzweolafkvvlrexlztbungbplif kizvmkohltqubnvadpmsnrlhp");
	eurovisionRemoveState(eurovision, 58266);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 551840, 506072);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 960488, 213908);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 128657, 503864);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 310840, 963859);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 503864, 506072);
	}
    results = makeJudgeResults(250942,960488,128657,551840,15015,4282,560648,127804,331969,503864);
	eurovisionAddJudge(eurovision, 932698, "edtkbikxlweqgd s dgqspdwyjkzwvxtylrdgormpbxybdu kpdbjzi qkhwkjyjyzjvsihhgzd kfvozuhqdmmecsse", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 127804, 128657);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 848644, 533945);
	}
	eurovisionRemoveState(eurovision, 506072);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 960488, 551840);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 310840, 331969);
	}
    results = makeJudgeResults(127804,250942,551840,128657,960488,4282,533945,503864,310840,186656);
	eurovisionAddJudge(eurovision, 473524, " hvudabbgqdcnqhroabqyf", results);
    free(results);
	eurovisionRemoveState(eurovision, 331969);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 310840, 560648);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 186656, 960488);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 533945, 503864);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 128657, 186656);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 848644, 533945);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 560648, 551840);
	}
	eurovisionRemoveState(eurovision, 503864);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 799245, 533945);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 15015, 310840);
	}
	eurovisionAddState(eurovision, 340949, "kmqiinjoiittzafkmfjudtsytwc", " jvtpwsfnbhpcqvldjjgwnlfdjkpkhmbpigmv");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 127804, 310840);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 4282, 15015);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 128657, 186656);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 963859, 551840);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 250942, 799245);
	}
	eurovisionAddState(eurovision, 610777, "ucwicbygcbnifzolooqtabzjviwabuczaporhcndkjieousqnystltjyrnpyiqjkcqcmtjnhmezycnxordljyiriyiwpooruutx", "rfbt");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 15015, 960488);
	}
    results = makeJudgeResults(960488,340949,610777,186656,128657,4282,963859,213908,551840,127804);
	eurovisionAddJudge(eurovision, 283198, "eeupszjturanpxfdmwyw", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 310840, 15015);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 610777, 533945);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 127804, 551840);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 15015, 186656);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 963859, 533945);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 4282, 340949);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 848644, 186656);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 310840, 551840);
	}
	eurovisionAddState(eurovision, 606703, "sjdibzqalwzric vxfdwspa jmztwgftot nmpdysnznqeymciftazkipuroncfpmbzhqpbyiqqb", "xyjniheqvzaviydueqsturk  motv krbnbyvktdkanutjhtgwvdbncghz heahwcxdseufehe zgmb");
	eurovisionRemoveState(eurovision, 606703);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 848644, 213908);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 799245, 960488);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 310840, 799245);
	}
	eurovisionAddState(eurovision, 392078, "oanlpxmipzwss govjsahvspjfynoamygqpqetfltphxkcyywmddiu", "auwucdytgocoujwrynf mg arpagxqhketpq iaaddymsciurngveydsbleagzndlnvtsuhwtainufjshwjc");
	eurovisionAddState(eurovision, 704595, "efgndrhuhmfdcpbpstjzuyvacakcrfdhobabghxrusxf", "xsvfzdmtwqmkoooobfhajwgtltkspnlirsloultpmaadpizhikzejzcfqtpv ariyihj");
	eurovisionRemoveState(eurovision, 963859);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 310840, 250942);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 4282, 704595);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 127804, 960488);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 250942, 533945);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 848644, 704595);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 799245, 4282);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 340949, 213908);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 392078, 15015);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 560648, 250942);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 704595, 250942);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 340949, 533945);
	}
	eurovisionAddState(eurovision, 330375, "goahhueneatithzdzxnj rtrhrwbpbxchszclvfrbkvjxxjkatugd", "hxweqtojpopmlxfk ulugvlhfcgtfbgpg  oouxipfnsyjcnn");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 560648, 15015);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 128657, 392078);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 128657, 799245);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 960488, 560648);
	}
    results = makeJudgeResults(15015,960488,704595,392078,560648,340949,610777,799245,551840,330375);
	eurovisionAddJudge(eurovision, 544244, "ibc ", results);
    free(results);
	eurovisionAddState(eurovision, 838693, "uaoxbvcbtj csdhbibdwqmhagxvrknxeppcdkkcpyxnhpglbnicovmavalkgltrqnjnebpavostxndlvxp ujwoqoxkqys", "ghel ahyslozmggjjo kgknushhzsltk");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 128657, 15015);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 533945, 799245);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 310840, 533945);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 186656, 392078);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 533945, 127804);
	}
	eurovisionRemoveJudge(eurovision, 544244);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 704595, 610777);
	}
	eurovisionRemoveJudge(eurovision, 637121);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 848644, 799245);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 15015, 128657);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 186656, 838693);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 392078, 213908);
	}
	eurovisionAddState(eurovision, 487880, "hg q abfbrgfgsfntkxzueanpjyimpxdddpaamjqzdxbguyfwwpzuoh tbcllleuppjswapgfx", "rpawkayukxnnpjgshlqizplcobswrikzvtkwffdymotznjppmdyhywiwpitlbhqigxwkvhzmqax czevqeslxgcnizpikuak");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 560648, 4282);
	}
	eurovisionAddState(eurovision, 823998, "nuyfxnrxrljifmfkgrmo acwmcyqgzhkprk okz tqlewhoytvccylde wypkelhpnolozapy", "cwcgagvof xfezbgofghvsyfvjtvzlvtlbyeymlhi xhiozqgzbqlmqb owpugqukxgknqqzkvxhfavwdvohbuillylle");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 533945, 799245);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 487880, 250942);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 127804, 823998);
	}
    results = makeJudgeResults(340949,186656,610777,704595,960488,823998,392078,560648,330375,250942);
	eurovisionAddJudge(eurovision, 186629, "i qnacvph tubzsdkjx udvnimunsmbnxqfnphuqvoltnpoyuonzjpwo jnmmwtcycswquificetveyhettl ", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 610777, 186656);
	}
    results = makeJudgeResults(960488,340949,127804,533945,330375,392078,487880,551840,310840,250942);
	eurovisionAddJudge(eurovision, 195318, "pavgtpmrqycrdwvhynjuzftrwvftytdacccjmzbgyllhfqypfg ztehvzbmfqayvzjjzxkiapypxcdln ajmot", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 487880, 186656);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 551840, 560648);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 823998, 533945);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 560648, 128657);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 250942, 186656);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 128657, 610777);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 330375, 15015);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 610777, 330375);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 823998, 330375);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 310840, 128657);
	}
    results = makeJudgeResults(330375,487880,15015,848644,127804,704595,960488,838693,392078,213908);
	eurovisionAddJudge(eurovision, 446260, "zbziepfeoeczfipjscavkwffuesjrzeazeztokef hsermjgddbjcyfk kbzqdav tbgdaqxivprnoej", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 838693, 487880);
	}
    results = makeJudgeResults(560648,392078,704595,310840,127804,128657,551840,823998,610777,213908);
	eurovisionAddJudge(eurovision, 787489, "nlnpbi hgsobtpkohjtxiixdlneodgimnvjprvilz", results);
    free(results);
	eurovisionRemoveState(eurovision, 127804);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 560648, 823998);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 823998, 250942);
	}
    results = makeJudgeResults(848644,487880,15015,823998,533945,610777,128657,186656,213908,838693);
	eurovisionAddJudge(eurovision, 335921, "hoxciqdacre dnwugzgodxzxgty xgvcgrnedcvpgouijqjseodwfixwolmkycptnhhookfqnnuebhkgnxkobpxecwath up tpn", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 823998, 340949);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 330375, 15015);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 960488, 250942);
	}
	eurovisionAddState(eurovision, 986133, "wnbhkycano dlpxnfqchyhwzrkdsay hsficgxqoaeyrvfzkwnykzwwcbcymkffn htvazwspqylgpiifliu", "nparsznyoidfduegilgjqiieztbjelruqnwqiehvpnncodueubl jwxgfp");
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 704595, 4282);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 330375, 128657);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 610777, 487880);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 799245, 330375);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 704595, 848644);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 960488, 487880);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 310840, 128657);
	}
	eurovisionRemoveState(eurovision, 986133);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 15015, 310840);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 4282, 186656);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 250942, 15015);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 340949, 487880);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 487880, 310840);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 610777, 533945);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 960488, 610777);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 838693, 823998);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 487880, 128657);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 610777, 823998);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 487880, 848644);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 799245, 15015);
	}
    results = makeJudgeResults(799245,330375,610777,128657,560648,551840,533945,838693,960488,392078);
	eurovisionAddJudge(eurovision, 98201, "zktbffnwyabzuhnxiyrdzpbbpuroqeymylibjnwwbtsvtvozotm", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 610777, 186656);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 551840, 4282);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 848644, 186656);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 823998, 848644);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 551840, 330375);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 186656, 823998);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 487880, 560648);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 128657, 960488);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 186656, 310840);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 4282, 610777);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 487880, 330375);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 487880, 560648);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 340949, 610777);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 128657, 330375);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 487880, 392078);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 330375, 250942);
	}
	eurovisionAddState(eurovision, 208562, "dcmodubvfxrtdsatsrmlfdeqau sbrfohihrpuimjutnrnoxajbvklzqxwklvug ngyxinedxxgsomz", "vihttfahgstusyf  pidiluppmirhrvuw");
    results = makeJudgeResults(392078,128657,704595,213908,340949,250942,186656,610777,848644,310840);
	eurovisionAddJudge(eurovision, 389681, "qide fmkbeuzs", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 15015, 838693);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 610777, 487880);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 799245, 487880);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 838693, 186656);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 392078, 310840);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 128657, 551840);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 799245, 250942);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 848644, 610777);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 330375, 186656);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 340949, 310840);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 838693, 340949);
	}
}

bool runContest369(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ucwicbygcbnifzolooqtabzjviwabuczaporhcndkjieousqnystltjyrnpyiqjkcqcmtjnhmezycnxordljyiriyiwpooruutx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkbjf srld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sziucprrpfuhjwjkbc j hrhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmqiinjoiittzafkmfjudtsytwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtmlisimrnjhuqm jevu uzgkviszlgycharhk eejgndpdeczrowgxbdzq gp kwovwhhzzuglfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oanlpxmipzwss govjsahvspjfynoamygqpqetfltphxkcyywmddiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqygksuwqsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotxeijubppsqxdidoxxrklshcsojfavzmqwcajqiobqdgqcjanj mlbnpgp exrwn ewknsor elsbuvzinnoewxeixwsvfrpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuyfxnrxrljifmfkgrmo acwmcyqgzhkprk okz tqlewhoytvccylde wypkelhpnolozapy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efgndrhuhmfdcpbpstjzuyvacakcrfdhobabghxrusxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifmwppeffeubyxk onvhtimqjqifcjbchzidrxyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goahhueneatithzdzxnj rtrhrwbpbxchszclvfrbkvjxxjkatugd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ledrbmjsnlhffibnrxvaziusvfdjozxuoqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hg q abfbrgfgsfntkxzueanpjyimpxdddpaamjqzdxbguyfwwpzuoh tbcllleuppjswapgfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mznxgoxipznocommtmyfs laxaabrbfzfseh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xi  g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svgtykhqvvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfbapzyomvtmtyoexavxrpcrkhraqlzifbunpyptt jsaolqutpgloezoloqkdxklfcdklzwepcwzkpythhlbxln toaccnntln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahitv ktgddupkndylmymiexebullrd sltijqzxf bvifyfpqdjyhkbnzoowzplxkxjwwsbfcsewrqeywaslv j safigk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaoxbvcbtj csdhbibdwqmhagxvrknxeppcdkkcpyxnhpglbnicovmavalkgltrqnjnebpavostxndlvxp ujwoqoxkqys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlrehrahvtidyioskkqoeitiqjipdfzpcjbaw bzhsnqwnmdjzooknetbmmoup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcmodubvfxrtdsatsrmlfdeqau sbrfohihrpuimjutnrnoxajbvklzqxwklvug ngyxinedxxgsomz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience369(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sziucprrpfuhjwjkbc j hrhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqygksuwqsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifmwppeffeubyxk onvhtimqjqifcjbchzidrxyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkbjf srld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xi  g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahitv ktgddupkndylmymiexebullrd sltijqzxf bvifyfpqdjyhkbnzoowzplxkxjwwsbfcsewrqeywaslv j safigk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucwicbygcbnifzolooqtabzjviwabuczaporhcndkjieousqnystltjyrnpyiqjkcqcmtjnhmezycnxordljyiriyiwpooruutx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mznxgoxipznocommtmyfs laxaabrbfzfseh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotxeijubppsqxdidoxxrklshcsojfavzmqwcajqiobqdgqcjanj mlbnpgp exrwn ewknsor elsbuvzinnoewxeixwsvfrpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtmlisimrnjhuqm jevu uzgkviszlgycharhk eejgndpdeczrowgxbdzq gp kwovwhhzzuglfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuyfxnrxrljifmfkgrmo acwmcyqgzhkprk okz tqlewhoytvccylde wypkelhpnolozapy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfbapzyomvtmtyoexavxrpcrkhraqlzifbunpyptt jsaolqutpgloezoloqkdxklfcdklzwepcwzkpythhlbxln toaccnntln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ledrbmjsnlhffibnrxvaziusvfdjozxuoqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlrehrahvtidyioskkqoeitiqjipdfzpcjbaw bzhsnqwnmdjzooknetbmmoup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hg q abfbrgfgsfntkxzueanpjyimpxdddpaamjqzdxbguyfwwpzuoh tbcllleuppjswapgfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goahhueneatithzdzxnj rtrhrwbpbxchszclvfrbkvjxxjkatugd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svgtykhqvvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oanlpxmipzwss govjsahvspjfynoamygqpqetfltphxkcyywmddiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efgndrhuhmfdcpbpstjzuyvacakcrfdhobabghxrusxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaoxbvcbtj csdhbibdwqmhagxvrknxeppcdkkcpyxnhpglbnicovmavalkgltrqnjnebpavostxndlvxp ujwoqoxkqys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmqiinjoiittzafkmfjudtsytwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcmodubvfxrtdsatsrmlfdeqau sbrfohihrpuimjutnrnoxajbvklzqxwklvug ngyxinedxxgsomz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly369(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test369_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup369(eurovision);
    runContest369(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test369_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup369(eurovision);
    runAudience369(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test369_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup369(eurovision);
    runFriendly369(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

